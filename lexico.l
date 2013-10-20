%{
#include "y.tab.h"
#include "gml.operadores.h"
#include <stdlib.h>
extern int yylex();
%}
%option noyywrap
%%
"true"          return TRUE;
"false"         return FALSE;
"program"       return PROGRAM;
"vars"          return VARS;
"mapsize"       return MAPSIZE;
"do"            return DO;
"while"         return WHILE;
"if"            return IF;
"else"          return ELSE;
"return"        return RETURN;
"draw"          return DRAW;
"void"          return VOID;
"int"           return INT;
"float"         return FLOAT;
"pos"           return POS;
"boolean"       return BOOLEAN;
"string"        return STRING;
"entity"        return ENTITY;
"sprite"        return SPRITE;
"_add"          return ADD;
"_rem"          return REM;
"list_"         return LIST;
"="					return SIGN;
"@"					return AT;
"("					return LEFTPARENTHESIS;
")"					return RIGHTPARENTHESIS;
":"					return COLON;
";"					return SEMICOLON;
","					return COMMA;
"{"					return LEFTBRACKET;
"}"					return RIGHTBRACKET;

"||"        { yylval.op = OP_OR;                return OR; }
"&&"        { yylval.op = OP_AND;               return AND; }
">="        { yylval.op = OP_MAYOROIGUALQUE;    return EQUALMORETHAN; }
"<="        { yylval.op = OP_MENOROIGUALQUE;    return EQUALLESSTHAN; }
">"         { yylval.op = OP_MAYORQUE;          return MORETHAN; }
"<"         { yylval.op = OP_MENORQUE;          return LESSTHAN; }
"=="        { yylval.op = OP_IGUAL;             return EQUALS; }
"!="        { yylval.op = OP_DIFERENTE;         return NOT; }
"+"         { yylval.op = OP_SUMA;              return PLUS; }
"-"         { yylval.op = OP_RESTA;             return MINUS; }
"*"         { yylval.op = OP_MULTIPLICACION;    return MULTIPLICATION; }
"/"         { yylval.op = OP_DIVISION;          return DIVISION; }
"_x"        { yylval.op = OP_X;                 return X; }
"_y"        { yylval.op = OP_Y;                 return Y; }

[\t\n]                 						
[A-Za-z][A-Za-z0-9]*						{ yylval.id = strdup(yytext); return ID; }
"\""[A-Za-z0-9:/.]*"\""						{ return CTESTRING; }
"["[0-9]+","[0-9]+"]"						{ return CTEPOS; }
[0-9]+"."[0-9]+								{ yylval.id = strdup(yytext); return CTEFLOAT; }
[0-9]+										{ yylval.id = strdup(yytext); return CTEINT; }
%%