%{
#include "y.tab.h"
#include <stdlib.h>
extern int yylex();
%}
%option noyywrap
%%
"true"				return TRUE;
"false"				return FALSE;
"program"			return PROGRAM;
"vars"				return VARS;
"mapsize"			return MAPSIZE;
"do"				return DO;
"while"				return WHILE;
"if"				return IF;
"else"				return ELSE;
"return"			return RETURN;
"draw"				return DRAW;
"void"				return VOID;
"int"				return INT;
"float"				return FLOAT;
"pos"				return POS;
"boolean"			return BOOLEAN;
"string"			return STRING;
"entity"			return ENTITY;
"sprite"			return SPRITE;
"_add"				return ADD;
"_rem"				return REM;
"_x"				return X;
"_y"				return Y;
"list_"				return LIST;
"+"					return PLUS;
"-"					return MINUS;
"*"					return MULTIPLICATION;
"/"					return DIVISION;
"="					return SIGN;
"@"					return AT;
"||"				return OR;
"&&"				return AND;
"=="				return EQUALS;
">="				return EQUALMORETHAN;
"<="				return EQUALLESSTHAN;
"!="				return NOT;
"<"					return LESSTHAN;
">"					return MORETHAN;
"("					return LEFTPARENTHESIS;
")"					return RIGHTPARENTHESIS;
":"					return COLON;
";"					return SEMICOLON;
","					return COMMA;
"{"					return LEFTBRACKET;
"}"					return RIGHTBRACKET;

[\t\n]                 						
[A-Za-z][A-Za-z0-9]*						{ yylval.val = yytext; return ID; }
"\""[A-Za-z0-9:/.]*"\""						{ return CTESTRING; }
"["[0-9]+","[0-9]+"]"						{ return CTEPOS; }
[0-9]+"."[0-9]+								{ yylval.val = atof(yytext); return CTEFLOAT; }
[0-9]+										{ yylval.val = atoi(yytext); return CTEINT; }
%%