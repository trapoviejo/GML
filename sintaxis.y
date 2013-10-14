%{
    
int yylex(void);
    void yyerror(char *s){} 

  #include <iostream>
  #include <string>
  #include <stdlib.h>
  #include <unordered_map>
  #include "Funcion.h"
  #include "Variable.h"
 
  using namespace std;
extern string programa;


%}

%union {
  int entero; 
  float flotante;
  string id;
};

%token ID CTESTRING CTEINT CTEFLOAT CTEPOS TRUE FALSE PROGRAM VARS
MAPSIZE DO WHILE IF ELSE RETURN DRAW VOID INT FLOAT POS BOOLEAN STRING 
ENTITY SPRITE ADD REM X Y LIST PLUS MINUS MULTIPLICATION DIVISION 
SIGN AT OR AND EQUALS EQUALMORETHAN EQUALLESSTHAN NOT LESSTHAN 
MORETHAN LEFTPARENTHESIS RIGHTPARENTHESIS COLON SEMICOLON COMMA 
LEFTBRACKET RIGHTBRACKET
 
 
%%
programa: PROGRAM ID { programa = $1; } SEMICOLON e1 mapa e2 bloque ;
e1: variables | /*null*/ ;
e2: funcion e2 | /*null*/ ;

funcion: e14 ID LEFTPARENTHESIS e15 RIGHTPARENTHESIS bloque ;
e14: tipo | VOID ;
e15: 	  tipo ID e16
		| /*vacio*/
;
e16: COMMA e15 | /*null*/ ;


variables: VARS ID e4 COLON tipo SEMICOLON e5 ;
e4: COMMA ID e4| /*null*/ ;
e5: ID e4 COLON tipo SEMICOLON e5 | /*null*/ ;

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
tipo: 		  tiposimple
			| lista
;
tiposimple:	  INT
			| FLOAT
			| POS
			| BOOLEAN
			| STRING
			| ENTITY
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
