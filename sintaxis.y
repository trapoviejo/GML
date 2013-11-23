%{
    int yylex(void);
    void yyerror(char const *s);

    #include <iostream>
    #include <string>
    #include <stdlib.h>
    #include <unordered_map>
    #include "Funcion.h"
    #include "Variable.h"
    #include "gml.tipos.h"
    #include "gml.operadores.h"
    #include "Compilador.h"

    using namespace std;

    extern Compilador compilador;
    
%}

%code requires { #include "gml.operadores.h" }

%union {
  int entero; 
  float flotante;
  char* id;
  int op;
};

%type<entero> tipoovoid tipo tiposimple lista
%type<id> ID CTEINT CTEFLOAT CTEPOS porasignar
%type<op> PLUS MINUS MULTIPLICATION DIVISION OR AND EQUALS EQUALMORETHAN EQUALLESSTHAN NOT LESSTHAN MORETHAN X Y operadorexpresion operadorexp operadortermino operadorfactor

%token ID CTESTRING CTEINT CTEFLOAT CTEPOS TRUE FALSE PROGRAM VARS
MAPSIZE DO WHILE IF ELSE RETURN DRAW VOID INT FLOAT POS BOOLEAN STRING 
ENTITY SPRITE ADD REM X Y LIST PLUS MINUS MULTIPLICATION DIVISION 
SIGN AT OR AND EQUALS EQUALMORETHAN EQUALLESSTHAN NOT LESSTHAN 
MORETHAN LEFTPARENTHESIS RIGHTPARENTHESIS COLON SEMICOLON COMMA 
LEFTBRACKET RIGHTBRACKET
 
 
%%
programa:   PROGRAM ID
            {
                compilador.nomPrograma = $2;
                compilador.InsertaFunc($2, TIPO_PROGRAMA);
                Cuadruplo quad = Cuadruplo(OP_GOTO, GML_SALTO_PENDIENTE);
                compilador.vectorCuadruplos.push_back(quad);
            }
            SEMICOLON variables mapa funcion
            {
                //El main empieza abajo, actualiza el goto inicial
                compilador.vectorCuadruplos[0].resultado = compilador.vectorCuadruplos.size();
                compilador.funcionActual = compilador.nomPrograma;
            }            
            bloque
;

variables:      VARS tipo COLON ID
                {
                    compilador.tipoActual = $2;
                    if(!compilador.InsertaVarEnFuncActual($4, $2)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
                listaids SEMICOLON varsotrotipo
            |   /*vacio*/
;
listaids:       COMMA ID
                {
                    if(!compilador.InsertaVarEnFuncActual($2, compilador.tipoActual)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
                listaids
            |   /*null*/
;
varsotrotipo:   tipo COLON ID
                {
                    compilador.tipoActual = $1;
                    if(!compilador.InsertaVarEnFuncActual($3, $1)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
                listaids SEMICOLON varsotrotipo
            |   /*vacio*/
;

funcion:        tipoovoid ID 
                {
                    if(!compilador.InsertaFunc($2, $1)){
                        //No inserto la funcion porque ya existia, asi que hay error
                        yyerror("Funcion declarada dos veces");
                        YYERROR;
                    }
                }
                LEFTPARENTHESIS parametros RIGHTPARENTHESIS bloque
                {
                    Cuadruplo quad = Cuadruplo(OP_ENDPROC, -1);
                    compilador.vectorCuadruplos.push_back(quad);
                }
                funcion
            |   /*null*/
;

tipoovoid:      tipo    { $$ = $1; }
            |   VOID    { $$ = TIPO_VOID; }
            ;
            
parametros: 	tipo ID
                {
                    if(!compilador.InsertaVarEnFuncActual($2, $1, true)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
                listaparametros
            |   /*vacio*/
            ;

listaparametros:    COMMA parametros
            |   /*null*/
            ;



mapa:       MAPSIZE expresion SEMICOLON
            {
                Variable operando = compilador.pilaOperandos.top();
                compilador.pilaOperandos.pop();
                Cuadruplo quad = Cuadruplo(OP_MAPSIZE, operando.direccion, -1, -1);
                compilador.vectorCuadruplos.push_back(quad);
            }

bloque: LEFTBRACKET estatuto e6 RIGHTBRACKET ;
e6: estatuto e6 | /*null*/ ;

estatuto: asignacion|condicion|escritura|ciclowhile|ciclodowhile|regreso
|llamadafuncion SEMICOLON |agregar|remover
;
asignacion:     porasignar signo loasignado 
                {
                    if(!compilador.GeneraCuadruploAsignacion($1)){
                        yyerror("No concuerdan los tipos para asignacion");
                        YYERROR;
                    }
                }
;

porasignar:     ID porasignar2
                {
                    $$ = $1;
                    if(!compilador.ExisteVar($1)){
                        yyerror("No existe la variable utilizada");
                        YYERROR;
                    }
                }
			|   elemento porasignar2
            ;

porasignar2:	  X
				| Y
				| /*vacio*/
;
signo: SIGN | AT ;
loasignado: expresion SEMICOLON | entidad SEMICOLON
;
escritura: DRAW LEFTPARENTHESIS e9 RIGHTPARENTHESIS SEMICOLON
;
e9: entidad | ID ; 

ciclowhile:     WHILE
                {
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                }                
                LEFTPARENTHESIS expresion RIGHTPARENTHESIS
                {
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de while debe ser booleano");
                        YYERROR;
                    }
                }
                bloque
                {
                    int porActualizar = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    int inicioExpresion = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    Cuadruplo quad = Cuadruplo(OP_GOTO, inicioExpresion);
                    compilador.vectorCuadruplos.push_back(quad);
                    compilador.vectorCuadruplos[porActualizar].resultado = compilador.vectorCuadruplos.size();
                }
;

ciclodowhile:   DO
                {
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                }
                bloque WHILE LEFTPARENTHESIS expresion RIGHTPARENTHESIS SEMICOLON
                {
                    int inicioDoWhile = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    Variable operando = compilador.pilaOperandos.top();
                    compilador.pilaOperandos.pop();
                    //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
                    Cuadruplo quad = Cuadruplo(OP_GOTOV, operando.direccion, inicioDoWhile);
                    compilador.vectorCuadruplos.push_back(quad);
                }
;

condicion:      IF LEFTPARENTHESIS expresion RIGHTPARENTHESIS
                {
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de if debe ser booleano");
                        YYERROR;
                    }
                }
                bloque condicionelse
                {
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                }
;
		
condicionelse:  ELSE
                {
                    Cuadruplo quad = Cuadruplo(OP_GOTO, GML_SALTO_PENDIENTE);
                    compilador.vectorCuadruplos.push_back(quad);
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size()-1);
                }
                bloque

			|   /*vacio*/
;

llamadafuncion:		  ID LEFTPARENTHESIS
                      {
                        //printf("Entrando a llamadafuncion\n");
                        if(!compilador.ExisteFunc($1))
                        {
                           yyerror("Llamada a funcion no declarada.");
                           YYERROR;
                        }else{
                            compilador.llamadaActual = $1;
                            compilador.paramActual = 0;
                            Cuadruplo quad = Cuadruplo(OP_ERA, 1234, -1, -1);
                            compilador.vectorCuadruplos.push_back(quad);
                        }
                      }
                      llamadafuncion2
                ;
llamadafuncion2:	  RIGHTPARENTHESIS
                    {
                        int tipoResultante = compilador.tablaFuncs[compilador.llamadaActual].tipo;
                        compilador.InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
                        Variable resultado = compilador.pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
                        Cuadruplo quad = Cuadruplo(OP_GOSUB, compilador.tablaFuncs[compilador.llamadaActual].direccion, -1, resultado.direccion);
                        compilador.vectorCuadruplos.push_back(quad);
                    }
					| paramsllamada RIGHTPARENTHESIS
                    {
                        if(compilador.paramActual != compilador.tablaFuncs[compilador.llamadaActual].params.size()){
                           yyerror("Cantidad de parametros en llamada es menor al esperado");
                           YYERROR;
                        }
                        int tipoResultante = compilador.tablaFuncs[compilador.llamadaActual].tipo;
                        compilador.InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
                        Variable resultado = compilador.pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
                        Cuadruplo quad = Cuadruplo(OP_GOSUB, compilador.tablaFuncs[compilador.llamadaActual].direccion, -1, resultado.direccion);
                        compilador.vectorCuadruplos.push_back(quad);
                    }
;
paramsllamada:      { compilador.PonFondoFalso(); }
    		
                      expresion
                    {
                        compilador.QuitaFondoFalso();                        
                        Variable operando = compilador.pilaOperandos.top();
                        compilador.pilaOperandos.pop();
                        //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
                        //printf("operando.tipo = %d, llamadaActual.params[%d].tipo = %d\n", operando.tipo, compilador.paramActual, compilador.tablaFuncs[compilador.llamadaActual].params.at(compilador.paramActual));
                        
                        if(compilador.paramActual >= compilador.tablaFuncs[compilador.llamadaActual].params.size()){
                           yyerror("Cantidad de parametros en llamada es mayor al esperado");
                           YYERROR;
                        }else if(operando.tipo != compilador.tablaFuncs[compilador.llamadaActual].params.at(compilador.paramActual)){
                           yyerror("Tipo de parametro no concuerda");
                           YYERROR;           
                        }else{
                            Cuadruplo quad = Cuadruplo(OP_PARAM, operando.direccion, -1, compilador.paramActual);
                            compilador.vectorCuadruplos.push_back(quad);
                            compilador.paramActual++;
                        }
                    }
                    paramsllamada2
;
paramsllamada2:		  /*vacio*/
					| COMMA paramsllamada
;

regreso:	  RETURN expresion SEMICOLON
            {
                Variable operando = compilador.pilaOperandos.top();
                compilador.pilaOperandos.pop();
                //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
                if(operando.tipo != compilador.tablaFuncs[compilador.funcionActual].tipo){
                       yyerror("Tipo de retorno no concuerda con tipo de funcion.");
                       YYERROR;               
                }else{
                    Cuadruplo quad = Cuadruplo(OP_RETURN, operando.direccion, -1, -1);
                    compilador.vectorCuadruplos.push_back(quad);
                }
            }
;
lista:		  LIST tiposimple { $$ = $2; }
;

tipo:       tiposimple  { $$ = $1; compilador.subtipoListaActual = TIPO_VOID; }
        |   lista       { $$ = TIPO_LIST; compilador.subtipoListaActual = $1; }
;

tiposimple:     INT     { $$ = TIPO_INT; }
            |   FLOAT   { $$ = TIPO_FLOAT; }
            |   POS     { $$ = TIPO_POS; }
            |   BOOLEAN { $$ = TIPO_BOOLEAN; }
            |   STRING  { $$ = TIPO_STRING; }
            |   ENTITY  { $$ = TIPO_ENTITY; }
;

agregar:	  ID ADD LEFTPARENTHESIS expresion RIGHTPARENTHESIS SEMICOLON
              {
                    bool sePudo = compilador.AccionAdd($1);
                    if(!sePudo){
                        yyerror("Error en semantica de agregar a lista");
                        YYERROR;
                    }
              }
;
remover:	  ID REM SEMICOLON
;

expresion:      exp
                {
                    if(compilador.ChecaPrioridad(OP_OR)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos en operadores booleanos");
                            YYERROR;
                        }
                    }
                }
                expresion2
;
expresion2:     operadorexpresion { compilador.InsertaOperador($1); } expresion
            |   /*vacio*/
;

operadorexpresion:      OR
                    |   AND
                    |   EQUALMORETHAN
                    |   EQUALLESSTHAN
                    |   MORETHAN
                    |   LESSTHAN
                    |   EQUALS
                    |   NOT
;

exp:            termino
                {
                    if(compilador.ChecaPrioridad(OP_SUMA)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos en suma o resta");
                            YYERROR;
                        }
                    }
                }
                exp2
;
exp2:		  operadorexp { compilador.InsertaOperador($1); } exp
			| /*vacio*/
;
operadorexp:    PLUS | MINUS ;

termino:	    factor
                {
                    if(compilador.ChecaPrioridad(OP_MULTIPLICACION)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos en multiplicacion o division");
                            YYERROR;
                        }
                    }
                }
                termino2
;
termino2:	  operadortermino { compilador.InsertaOperador($1); } termino
			| /*vacio*/
;
operadortermino:    MULTIPLICATION | DIVISION ;

factor:		  obtenerxy factor2
;
factor2:	operadorfactor
            {
                Variable op = compilador.pilaOperandos.top();
                compilador.pilaOperandos.pop();
                int tipo = compilador.TipoResultante($1, op.tipo, op.tipo);
                if(tipo == TIPO_VOID){
                    yyerror("Incompatibilidad de tipo en _x o _y");
                    YYERROR;
                }else{
                    compilador.InsertaOperando("temp", tipo, GML_ES_TEMPORAL);
                    Variable res = compilador.pilaOperandos.top();
                    Cuadruplo quad = Cuadruplo($1, op.direccion, -1, res.direccion);
                    compilador.vectorCuadruplos.push_back(quad);
                }
            }
			| /*vacio*/
;
operadorfactor: X | Y ;

obtenerxy:	  LEFTPARENTHESIS { compilador.PonFondoFalso(); } expresion RIGHTPARENTHESIS { compilador.QuitaFondoFalso(); }
			| PLUS varcte
			| MINUS varcte
			| varcte
;

varcte:	    ID
            {
                if(!compilador.InsertaOperando($1, 0, GML_ES_VARIABLE)){
                    yyerror("No existe la variable utilizada");
                    YYERROR;
                }
            }
        |   CTEINT      { compilador.InsertaOperando($1, TIPO_INT, GML_ES_CONSTANTE); }
        |   CTEFLOAT    { compilador.InsertaOperando($1, TIPO_FLOAT, GML_ES_CONSTANTE); }
        |   CTESTRING   
        |   TRUE        
        |   FALSE       
        |   CTEPOS      { compilador.InsertaOperando($1, TIPO_POS, GML_ES_CONSTANTE); }
        |   elemento
        |   llamadafuncion
;

elemento:	  ID COLON elemento2
;
elemento2:	  CTEINT
			| ID
;

entidad:	  ENTITY LEFTPARENTHESIS expresion COMMA SPRITE entidad2 
;
entidad2:	  CTESTRING COMMA expresion RIGHTPARENTHESIS
			| ID COMMA expresion RIGHTPARENTHESIS
;
 
%%

void yyerror (char const *s){
    cout << s << endl;
}
