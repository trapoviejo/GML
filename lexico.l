%{
#include "y.tab.h"
#include "gml.operadores.h"
#include <stdlib.h>
extern int yylex();
%}
%option noyywrap
%%
"true"          { printf("%s", yytext); return TRUE; }
"false"         { printf("%s", yytext); return FALSE; }
"program"       { printf("%s", yytext); return PROGRAM; }
"vars"          { printf("%s", yytext); return VARS; }
"mapsize"       { printf("%s", yytext); return MAPSIZE; }
"do"            { printf("%s", yytext); return DO; }
"while"         { printf("%s", yytext); return WHILE; }
"if"            { printf("%s", yytext); return IF; }
"else"          { printf("%s", yytext); return ELSE; }
"return"        { printf("%s", yytext); return RETURN; }
"draw"          { printf("%s", yytext); return DRAW; }
"void"          { printf("%s", yytext); return VOID; }
"int"           { printf("%s", yytext); return INT; }
"float"         { printf("%s", yytext); return FLOAT; }
"pos"           { printf("%s", yytext); return POS; }
"boolean"       { printf("%s", yytext); return BOOLEAN; }
"string"        { printf("%s", yytext); return STRING; }
"entity"        { printf("%s", yytext); return ENTITY; }
"sprite"        { printf("%s", yytext); return SPRITE; }
"_add"          { printf("%s", yytext); return ADD; }
"_rem"          { printf("%s", yytext); return REM; }
"list_"         { printf("%s", yytext); return LIST; }
"="				{ printf("%s", yytext); return SIGN; }
"@"				{ printf("%s", yytext); return AT; }
"("				{ printf("%s", yytext); return LEFTPARENTHESIS; }
")"				{ printf("%s", yytext); return RIGHTPARENTHESIS; }
":"				{ printf("%s", yytext); return COLON; }
";"				{ printf("%s", yytext); return SEMICOLON; }
","				{ printf("%s", yytext); return COMMA; }
"{"				{ printf("%s", yytext); return LEFTBRACKET; }
"}"				{ printf("%s", yytext); return RIGHTBRACKET; }
"["				{ printf("%s", yytext); return LEFTSQUAREBRACKET; }
"]"				{ printf("%s", yytext); return RIGHTSQUAREBRACKET; }

"||"        { printf("%s", yytext); yylval.op = OP_OR;                return OR; }
"&&"        { printf("%s", yytext); yylval.op = OP_AND;               return AND; }
">="        { printf("%s", yytext); yylval.op = OP_MAYOROIGUALQUE;    return EQUALMORETHAN; }
"<="        { printf("%s", yytext); yylval.op = OP_MENOROIGUALQUE;    return EQUALLESSTHAN; }
">"         { printf("%s", yytext); yylval.op = OP_MAYORQUE;          return MORETHAN; }
"<"         { printf("%s", yytext); yylval.op = OP_MENORQUE;          return LESSTHAN; }
"=="        { printf("%s", yytext); yylval.op = OP_IGUAL;             return EQUALS; }
"!="        { printf("%s", yytext); yylval.op = OP_DIFERENTE;         return NOT; }
"+"         { printf("%s", yytext); yylval.op = OP_SUMA;              return PLUS; }
"-"         { printf("%s", yytext); yylval.op = OP_RESTA;             return MINUS; }
"*"         { printf("%s", yytext); yylval.op = OP_MULTIPLICACION;    return MULTIPLICATION; }
"/"         { printf("%s", yytext); yylval.op = OP_DIVISION;          return DIVISION; }
"_x"        { printf("%s", yytext); yylval.op = OP_X;                 return X; }
"_y"        { printf("%s", yytext); yylval.op = OP_Y;                 return Y; }

[\t\n]                 						
[A-Za-z][A-Za-z0-9]*		{ printf("%s", yytext); yylval.id = strdup(yytext); return ID; }
"\""[A-Za-z0-9:/.]*"\""		{ printf("%s", yytext); yylval.id = strdup(yytext); return CTESTRING; }
"["[0-9]+","[0-9]+"]"		{ printf("%s", yytext); yylval.id = strdup(yytext); return CTEPOS; }
[0-9]+"."[0-9]+				{ printf("%s", yytext); yylval.id = strdup(yytext); return CTEFLOAT; }
[0-9]+						{ printf("%s", yytext); yylval.id = strdup(yytext); return CTEINT; }
%%
