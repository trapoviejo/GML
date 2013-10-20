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

%type<entero> tipoovoid tipo tiposimple
%type<id> ID CTEINT CTEFLOAT
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
            }
            SEMICOLON variables mapa funcion bloque
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
                LEFTPARENTHESIS parametros RIGHTPARENTHESIS bloque funcion
            |   /*null*/
;

tipoovoid:      tipo    { $$ = $1; }
            |   VOID    { $$ = TIPO_VOID; }
            ;
            
parametros: 	tipo ID
                {
                    if(!compilador.InsertaVarEnFuncActual($2, $1)){
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

mapa: MAPSIZE expresion SEMICOLON

bloque: LEFTBRACKET estatuto e6 RIGHTBRACKET ;
e6: estatuto e6 | /*null*/ ;

estatuto: asignacion|condicion|escritura|ciclowhile|ciclodowhile|regreso
|llamadafuncion|agregar|remover
;
asignacion: porasignar e7 e8 ;

porasignar:     ID porasignar2
                {
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
e7: SIGN | AT ;
e8: expresion SEMICOLON | llamadafuncion | entidad SEMICOLON
;
escritura: DRAW LEFTPARENTHESIS e9 RIGHTPARENTHESIS SEMICOLON
;
e9: entidad | ID ; 

ciclowhile: WHILE LEFTPARENTHESIS expresion RIGHTPARENTHESIS bloque ;

ciclodowhile: DO bloque WHILE LEFTPARENTHESIS expresion 
RIGHTPARENTHESIS SEMICOLON;

condicion:			  IF LEFTPARENTHESIS expresion RIGHTPARENTHESIS bloque condicionelse
;
		
condicionelse: 		  ELSE bloque
					| /*vacio*/
;

llamadafuncion:		  ID LEFTPARENTHESIS
                      {
                        if(!compilador.ExisteFunc($1))
                        {
                           yyerror("Llamada a funcion no declarada.");
                           YYERROR;
                        }
                      }
                      llamadafuncion2
                ;
llamadafuncion2:	  RIGHTPARENTHESIS SEMICOLON
					| paramsllamada RIGHTPARENTHESIS SEMICOLON
;
paramsllamada:		  expresion paramsllamada2
;
paramsllamada2:		  /*vacio*/
					| COMMA paramsllamada
;

regreso:	  RETURN expresion SEMICOLON
;
lista:		  LIST tiposimple
;

tipo:       tiposimple  { $$ = $1; }
        |   lista       { $$ = TIPO_LIST; }
;

tiposimple:     INT     { $$ = TIPO_INT; }
            |   FLOAT   { $$ = TIPO_FLOAT; }
            |   POS     { $$ = TIPO_POS; }
            |   BOOLEAN { $$ = TIPO_BOOLEAN; }
            |   STRING  { $$ = TIPO_STRING; }
            |   ENTITY  { $$ = TIPO_ENTITY; }
;

agregar:	  ID ADD LEFTPARENTHESIS expresion RIGHTPARENTHESIS SEMICOLON
;
remover:	  ID REM SEMICOLON
;

expresion:      exp
                {
                    if(compilador.ChecaPrioridad(OP_OR)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos");
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
                            yyerror("Incompatibilidad de tipos");
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
                            yyerror("Incompatibilidad de tipos");
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
factor2:	  operadorfactor
			| /*vacio*/
;
operadorfactor: X | Y ;

obtenerxy:	  LEFTPARENTHESIS expresion RIGHTPARENTHESIS
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
        |   CTEPOS
        |   elemento
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
