/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* "%code requires" blocks.  */

/* Line 2068 of yacc.c  */
#line 21 "sintaxis.y"
 #include "gml.operadores.h" 


/* Line 2068 of yacc.c  */
#line 42 "y.tab.h"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     CTESTRING = 259,
     CTEINT = 260,
     CTEFLOAT = 261,
     CTEPOS = 262,
     TRUE = 263,
     FALSE = 264,
     PROGRAM = 265,
     VARS = 266,
     MAPSIZE = 267,
     DO = 268,
     WHILE = 269,
     IF = 270,
     ELSE = 271,
     RETURN = 272,
     DRAW = 273,
     VOID = 274,
     INT = 275,
     FLOAT = 276,
     POS = 277,
     BOOLEAN = 278,
     STRING = 279,
     ENTITY = 280,
     SPRITE = 281,
     ADD = 282,
     REM = 283,
     X = 284,
     Y = 285,
     LIST = 286,
     PLUS = 287,
     MINUS = 288,
     MULTIPLICATION = 289,
     DIVISION = 290,
     SIGN = 291,
     AT = 292,
     OR = 293,
     AND = 294,
     EQUALS = 295,
     EQUALMORETHAN = 296,
     EQUALLESSTHAN = 297,
     NOT = 298,
     LESSTHAN = 299,
     MORETHAN = 300,
     LEFTPARENTHESIS = 301,
     RIGHTPARENTHESIS = 302,
     COLON = 303,
     SEMICOLON = 304,
     COMMA = 305,
     LEFTBRACKET = 306,
     RIGHTBRACKET = 307
   };
#endif
/* Tokens.  */
#define ID 258
#define CTESTRING 259
#define CTEINT 260
#define CTEFLOAT 261
#define CTEPOS 262
#define TRUE 263
#define FALSE 264
#define PROGRAM 265
#define VARS 266
#define MAPSIZE 267
#define DO 268
#define WHILE 269
#define IF 270
#define ELSE 271
#define RETURN 272
#define DRAW 273
#define VOID 274
#define INT 275
#define FLOAT 276
#define POS 277
#define BOOLEAN 278
#define STRING 279
#define ENTITY 280
#define SPRITE 281
#define ADD 282
#define REM 283
#define X 284
#define Y 285
#define LIST 286
#define PLUS 287
#define MINUS 288
#define MULTIPLICATION 289
#define DIVISION 290
#define SIGN 291
#define AT 292
#define OR 293
#define AND 294
#define EQUALS 295
#define EQUALMORETHAN 296
#define EQUALLESSTHAN 297
#define NOT 298
#define LESSTHAN 299
#define MORETHAN 300
#define LEFTPARENTHESIS 301
#define RIGHTPARENTHESIS 302
#define COLON 303
#define SEMICOLON 304
#define COMMA 305
#define LEFTBRACKET 306
#define RIGHTBRACKET 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 23 "sintaxis.y"

  int entero; 
  float flotante;
  char* id;
  int op;



/* Line 2068 of yacc.c  */
#line 172 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


