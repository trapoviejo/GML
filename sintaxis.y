%{
    
int yylex(void);
    void yyerror(char *s){} 

  #include <iostream>
  #include <string>
  #include <stdlib.h>
  #include <unordered_map>
  #include "Funcion.h"
  #include "Variable.h"
  #include "gml.tipos.h"
 
  using namespace std;
  
    extern string nomPrograma;
    extern unordered_map<string, Funcion> tablaFuncs;
    extern int tipoActual; 
%}

%union {
  int entero; 
  float flotante;
  char* id;
};

%type<entero> CTEINT tipoovoid tipo tiposimple
%type<flotante> CTEFLOAT
%type<id> ID

%token ID CTESTRING CTEINT CTEFLOAT CTEPOS TRUE FALSE PROGRAM VARS
MAPSIZE DO WHILE IF ELSE RETURN DRAW VOID INT FLOAT POS BOOLEAN STRING 
ENTITY SPRITE ADD REM X Y LIST PLUS MINUS MULTIPLICATION DIVISION 
SIGN AT OR AND EQUALS EQUALMORETHAN EQUALLESSTHAN NOT LESSTHAN 
MORETHAN LEFTPARENTHESIS RIGHTPARENTHESIS COLON SEMICOLON COMMA 
LEFTBRACKET RIGHTBRACKET
 
 
%%
programa:   PROGRAM ID
            {
                nomPrograma = $2;
                Funcion funcionPrograma(nomPrograma, TIPO_PROGRAMA);
                std::pair<std::string,Funcion> par (nomPrograma, funcionPrograma);
                tablaFuncs.insert(par);
            }
            SEMICOLON variables mapa funcion bloque
;

variables:      VARS tipo COLON ID
                {
                    tipoActual = $2;
                    string nomID = $4;
                    Variable nuevaVar(nomID, tipoActual);
                    tablaFuncs[nomPrograma].InsertaVar(nuevaVar);
                }
                listaids SEMICOLON varsotrotipo
            |   /*vacio*/
;
listaids:       COMMA ID
                {
                    string nomID = $2;
                    Variable nuevaVar(nomID, tipoActual);
                    tablaFuncs[nomPrograma].InsertaVar(nuevaVar);
                }
                listaids
            |   /*null*/
;
varsotrotipo:   tipo COLON ID listaids SEMICOLON varsotrotipo
            |   /*vacio*/
;

funcion:        tipoovoid ID 
                {
                    int tipo = $1;
                    string nomFuncion = $2;
                    Funcion nuevaFuncion(nomFuncion, tipo);
                    std::pair<std::string,Funcion> par (nomFuncion, nuevaFuncion);
                    tablaFuncs.insert(par);
                }
                LEFTPARENTHESIS parametros RIGHTPARENTHESIS bloque funcion
            |   /*null*/
;
            
tipoovoid:      tipo    { $$ = $1; }
            |   VOID    { $$ = TIPO_VOID; }
            ;
            
parametros: 	tipo ID parametros2
            |   /*vacio*/
            ;

parametros2:    COMMA parametros
            |   /*null*/
            ;

mapa: MAPSIZE expresion SEMICOLON

bloque: LEFTBRACKET estatuto e6 RIGHTBRACKET ;
e6: estatuto e6 | /*null*/ ;

estatuto: asignacion|condicion|escritura|ciclowhile|ciclodowhile|regreso
|llamadafuncion|agregar|remover
;
asignacion: porasignar e7 e8 ;
porasignar:		  ID porasignar2
				| elemento porasignar2
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

llamadafuncion:		  ID LEFTPARENTHESIS llamadafuncion2
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
expresion:	  exp expresion2
;
expresion2: 	  AND expresion
				| OR expresion
				| EQUALS expresion
				| NOT expresion
				| MORETHAN expresion
				| LESSTHAN expresion
				| EQUALMORETHAN expresion
				| EQUALLESSTHAN expresion
				| /*vacio*/
;

exp:		  termino exp2
;
exp2:		  PLUS exp
			| MINUS exp
			| /*vacio*/
;

termino:	  factor termino2
;
termino2:	  MULTIPLICATION termino
			| DIVISION termino
			| /*vacio*/
;

entidad:	  ENTITY LEFTPARENTHESIS expresion COMMA SPRITE entidad2 
;
entidad2:	  CTESTRING COMMA expresion RIGHTPARENTHESIS
			| ID COMMA expresion RIGHTPARENTHESIS
;

factor:		  obtenerxy factor2
;
factor2:	  X
			| Y
			| /*vacio*/
;

obtenerxy:	  LEFTPARENTHESIS expresion RIGHTPARENTHESIS
			| PLUS varcte
			| MINUS varcte
			| varcte
;

varcte:		  ID
			| CTEINT
			| CTEFLOAT
			| CTESTRING
			| TRUE
			| FALSE
			| CTEPOS
			| elemento
;

elemento:	  ID COLON elemento2
;
elemento2:	  CTEINT
			| ID
;
 
%%
