%{
#include "y.tab.h"
#include <stdlib.h>
extern int yylex();
%}
%option noyywrap
%%
"true"				ECHO; return TRUE;
"false"				ECHO; return FALSE;
"program"			ECHO; return PROGRAM;
"vars"				ECHO; return VARS;
"mapsize"			ECHO; return MAPSIZE;
"do"				ECHO; return DO;
"while"				ECHO; return WHILE;
"if"				ECHO; return IF;
"else"				ECHO; return ELSE;
"return"			ECHO; return RETURN;
"draw"				ECHO; return DRAW;
"void"				ECHO; return VOID;
"int"				ECHO; return INT;
"float"				ECHO; return FLOAT;
"pos"				ECHO; return POS;
"boolean"			ECHO; return BOOLEAN;
"string"			ECHO; return STRING;
"entity"			ECHO; return ENTITY;
"sprite"			ECHO; return SPRITE;
"_add"				ECHO; return ADD;
"_rem"				ECHO; return REM;
"_x"				ECHO; return X;
"_y"				ECHO; return Y;
"list_"				ECHO; return LIST;
"+"					ECHO; return PLUS;
"-"					ECHO; return MINUS;
"*"					ECHO; return MULTIPLICATION;
"/"					ECHO; return DIVISION;
"="					ECHO; return SIGN;
"@"					ECHO; return AT;
"||"				ECHO; return OR;
"&&"				ECHO; return AND;
"=="				ECHO; return EQUALS;
">="				ECHO; return EQUALMORETHAN;
"<="				ECHO; return EQUALLESSTHAN;
"!="				ECHO; return NOT;
"<"					ECHO; return LESSTHAN;
">"					ECHO; return MORETHAN;
"("					ECHO; return LEFTPARENTHESIS;
")"					ECHO; return RIGHTPARENTHESIS;
":"					ECHO; return COLON;
";"					ECHO; return SEMICOLON;
","					ECHO; return COMMA;
"{"					ECHO; return LEFTBRACKET;
"}"					ECHO; return RIGHTBRACKET;

[\t\n]                 						ECHO;
[A-Za-z][A-Za-z0-9]*						ECHO; return ID;
"\""[A-Za-z0-9:/.]*"\""						ECHO; return CTESTRING;
"["[0-9]+","[0-9]+"]"						ECHO; return CTEPOS;
[0-9]+"."[0-9]+								ECHO; return CTEFLOAT;
[0-9]+										ECHO; return CTEINT;
%%