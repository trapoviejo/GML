
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "sintaxis.y"

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
    


/* Line 189 of yacc.c  */
#line 94 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 21 "sintaxis.y"
 #include "gml.operadores.h" 


/* Line 209 of yacc.c  */
#line 122 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 23 "sintaxis.y"

  int entero; 
  float flotante;
  char* id;
  int op;



/* Line 214 of yacc.c  */
#line 252 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 264 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    13,    14,    23,    24,    25,    30,
      31,    32,    40,    41,    42,    51,    52,    54,    56,    57,
      62,    63,    66,    67,    71,    76,    79,    80,    82,    84,
      86,    88,    90,    92,    94,    96,    98,   102,   105,   108,
     110,   112,   113,   115,   117,   120,   122,   125,   131,   133,
     135,   141,   149,   156,   159,   160,   161,   166,   169,   173,
     176,   177,   180,   184,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   210,   214,   215,   219,   220,   224,   225,
     227,   229,   231,   233,   235,   237,   239,   241,   242,   246,
     247,   251,   252,   254,   256,   257,   261,   262,   266,   267,
     269,   271,   274,   276,   277,   279,   281,   285,   288,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   313,
     315,   317,   324,   329
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    10,     3,    55,    49,    56,    68,
      62,    69,    -1,    -1,    11,    90,    48,     3,    57,    58,
      49,    60,    -1,    -1,    -1,    50,     3,    59,    58,    -1,
      -1,    -1,    90,    48,     3,    61,    58,    49,    60,    -1,
      -1,    -1,    64,     3,    63,    46,    65,    47,    69,    62,
      -1,    -1,    90,    -1,    19,    -1,    -1,    90,     3,    66,
      67,    -1,    -1,    50,    65,    -1,    -1,    12,    94,    49,
      -1,    51,    71,    70,    52,    -1,    71,    70,    -1,    -1,
      72,    -1,    81,    -1,    77,    -1,    79,    -1,    80,    -1,
      88,    -1,    83,    -1,    92,    -1,    93,    -1,    73,    75,
      76,    -1,     3,    74,    -1,   114,    74,    -1,    29,    -1,
      30,    -1,    -1,    36,    -1,    37,    -1,    94,    49,    -1,
      83,    -1,   116,    49,    -1,    18,    46,    78,    47,    49,
      -1,   116,    -1,     3,    -1,    14,    46,    94,    47,    69,
      -1,    13,    69,    14,    46,    94,    47,    49,    -1,    15,
      46,    94,    47,    69,    82,    -1,    16,    69,    -1,    -1,
      -1,     3,    46,    84,    85,    -1,    47,    49,    -1,    86,
      47,    49,    -1,    94,    87,    -1,    -1,    50,    86,    -1,
      17,    94,    49,    -1,    31,    91,    -1,    91,    -1,    89,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,     3,    27,    46,    94,    47,    49,    -1,
       3,    28,    49,    -1,    -1,    99,    95,    96,    -1,    -1,
      98,    97,    94,    -1,    -1,    38,    -1,    39,    -1,    41,
      -1,    42,    -1,    45,    -1,    44,    -1,    40,    -1,    43,
      -1,    -1,   104,   100,   101,    -1,    -1,   103,   102,    99,
      -1,    -1,    32,    -1,    33,    -1,    -1,   109,   105,   106,
      -1,    -1,   108,   107,   104,    -1,    -1,    34,    -1,    35,
      -1,   112,   110,    -1,   111,    -1,    -1,    29,    -1,    30,
      -1,    46,    94,    47,    -1,    32,   113,    -1,    33,   113,
      -1,   113,    -1,     3,    -1,     5,    -1,     6,    -1,     4,
      -1,     8,    -1,     9,    -1,     7,    -1,   114,    -1,     3,
      48,   115,    -1,     5,    -1,     3,    -1,    25,    46,    94,
      50,    26,   117,    -1,     4,    50,    94,    47,    -1,     3,
      50,    94,    47,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    43,    52,    51,    60,    63,    62,    70,
      73,    72,    81,    85,    84,    93,    96,    97,   101,   100,
     108,   111,   112,   115,   117,   118,   118,   120,   120,   120,
     120,   120,   120,   121,   121,   121,   123,   125,   132,   135,
     136,   137,   139,   139,   140,   140,   140,   142,   144,   144,
     146,   148,   151,   154,   155,   159,   158,   168,   169,   171,
     173,   174,   177,   179,   182,   183,   186,   187,   188,   189,
     190,   191,   194,   196,   200,   199,   211,   211,   212,   215,
     216,   217,   218,   219,   220,   221,   222,   226,   225,   237,
     237,   238,   240,   240,   243,   242,   254,   254,   255,   257,
     257,   259,   261,   262,   264,   264,   266,   267,   268,   269,
     272,   279,   280,   281,   282,   283,   284,   285,   288,   290,
     291,   294,   296,   297
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CTESTRING", "CTEINT", "CTEFLOAT",
  "CTEPOS", "TRUE", "FALSE", "PROGRAM", "VARS", "MAPSIZE", "DO", "WHILE",
  "IF", "ELSE", "RETURN", "DRAW", "VOID", "INT", "FLOAT", "POS", "BOOLEAN",
  "STRING", "ENTITY", "SPRITE", "ADD", "REM", "X", "Y", "LIST", "PLUS",
  "MINUS", "MULTIPLICATION", "DIVISION", "SIGN", "AT", "OR", "AND",
  "EQUALS", "EQUALMORETHAN", "EQUALLESSTHAN", "NOT", "LESSTHAN",
  "MORETHAN", "LEFTPARENTHESIS", "RIGHTPARENTHESIS", "COLON", "SEMICOLON",
  "COMMA", "LEFTBRACKET", "RIGHTBRACKET", "$accept", "programa", "$@1",
  "variables", "$@2", "listaids", "$@3", "varsotrotipo", "$@4", "funcion",
  "$@5", "tipoovoid", "parametros", "$@6", "listaparametros", "mapa",
  "bloque", "e6", "estatuto", "asignacion", "porasignar", "porasignar2",
  "e7", "e8", "escritura", "e9", "ciclowhile", "ciclodowhile", "condicion",
  "condicionelse", "llamadafuncion", "$@7", "llamadafuncion2",
  "paramsllamada", "paramsllamada2", "regreso", "lista", "tipo",
  "tiposimple", "agregar", "remover", "expresion", "$@8", "expresion2",
  "$@9", "operadorexpresion", "exp", "$@10", "exp2", "$@11", "operadorexp",
  "termino", "$@12", "termino2", "$@13", "operadortermino", "factor",
  "factor2", "operadorfactor", "obtenerxy", "varcte", "elemento",
  "elemento2", "entidad", "entidad2", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    57,    56,    56,    59,    58,    58,
      61,    60,    60,    63,    62,    62,    64,    64,    66,    65,
      65,    67,    67,    68,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    73,    73,    74,
      74,    74,    75,    75,    76,    76,    76,    77,    78,    78,
      79,    80,    81,    82,    82,    84,    83,    85,    85,    86,
      87,    87,    88,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    93,    95,    94,    97,    96,    96,    98,
      98,    98,    98,    98,    98,    98,    98,   100,    99,   102,
     101,   101,   103,   103,   105,   104,   107,   106,   106,   108,
     108,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   115,
     115,   116,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     0,     8,     0,     0,     4,     0,
       0,     7,     0,     0,     8,     0,     1,     1,     0,     4,
       0,     2,     0,     3,     4,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     1,
       1,     0,     1,     1,     2,     1,     2,     5,     1,     1,
       5,     7,     6,     2,     0,     0,     4,     2,     3,     2,
       0,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     3,     0,     3,     0,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       3,     0,     1,     1,     0,     3,     0,     3,     0,     1,
       1,     2,     1,     0,     1,     1,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     6,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,    66,
      67,    68,    69,    70,    71,     0,    65,     0,    64,     0,
      15,    63,     0,   110,   113,   111,   112,   116,   114,   115,
       0,     0,     0,     0,    74,    87,    94,   103,   109,   117,
      17,     0,     0,    16,     4,     0,   107,   108,     0,    23,
      78,    91,    98,   104,   105,   101,   102,     0,     3,    13,
       9,   120,   119,   118,   106,    79,    80,    85,    81,    82,
      86,    84,    83,    75,    76,    92,    93,    88,    89,    99,
     100,    95,    96,    41,     0,     0,     0,     0,     0,    26,
      27,     0,    29,    30,    31,    28,    33,    32,    34,    35,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    55,    37,     0,     0,     0,     0,     0,     0,    26,
      42,    43,     0,    38,    20,     7,    12,    77,    90,    97,
       0,    73,     0,     0,     0,     0,    62,    49,     0,     0,
      48,    24,    25,   110,    36,    45,     0,     0,     0,     0,
       9,     5,     0,     0,     0,    56,     0,    60,     0,     0,
       0,     0,     0,    44,    46,     0,    18,     8,     0,     0,
      57,     0,     0,    59,     0,    50,    54,     0,    47,    15,
      22,    10,    72,    58,    61,     0,     0,    52,     0,    14,
      20,    19,     9,    51,    53,     0,    21,     0,     0,     0,
     121,    12,     0,     0,    11,     0,     0,   123,   122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     8,    60,   103,   150,   151,   192,    41,
     101,    42,   148,   180,   191,    20,    58,   118,   119,    90,
      91,   112,   122,   144,    92,   139,    93,    94,    95,   187,
      96,   132,   155,   156,   173,    97,    16,    43,    18,    98,
      99,   157,    50,    73,   104,    74,    34,    51,    77,   105,
      78,    35,    52,    81,   106,    82,    36,    55,    56,    37,
      38,    39,    63,   140,   200
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -147
static const yytype_int16 yypact[] =
{
      -5,    10,    29,  -147,  -147,   -16,    50,    52,    51,  -147,
    -147,  -147,  -147,  -147,  -147,    86,  -147,    34,  -147,    19,
      68,  -147,    95,    37,  -147,  -147,  -147,  -147,  -147,  -147,
     125,   125,    19,    64,  -147,  -147,  -147,    13,  -147,  -147,
    -147,    63,   112,  -147,  -147,    27,  -147,  -147,    69,  -147,
      82,    15,    20,  -147,  -147,  -147,  -147,    53,  -147,  -147,
      85,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,    11,    63,    90,    91,    19,    92,    53,
    -147,    44,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
      65,    93,   115,    96,    19,    19,    19,    98,    99,  -147,
    -147,  -147,  -147,   127,    19,    19,   100,    28,    94,    53,
    -147,  -147,    12,  -147,    52,  -147,    52,  -147,  -147,  -147,
      19,  -147,     3,   101,   103,   104,  -147,  -147,   106,   107,
    -147,  -147,  -147,    14,  -147,  -147,   108,   109,   113,   139,
      85,  -147,   105,   114,   110,  -147,   116,   117,    19,    63,
      63,    19,   119,  -147,  -147,    63,  -147,  -147,   152,   120,
    -147,   121,    19,  -147,   118,  -147,   140,   122,  -147,    68,
     123,  -147,  -147,  -147,  -147,   126,    63,  -147,   136,  -147,
      52,  -147,    85,  -147,  -147,    97,  -147,   128,   124,   129,
    -147,    52,    19,    19,  -147,   131,   133,  -147,  -147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,  -147,  -147,  -146,  -147,   -37,  -147,   -13,
    -147,  -147,   -19,  -147,  -147,  -147,   -81,    57,   130,  -147,
    -147,    81,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
      60,  -147,  -147,    16,  -147,  -147,  -147,    -7,   171,  -147,
    -147,   -18,  -147,  -147,  -147,  -147,    84,  -147,  -147,  -147,
    -147,    87,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
      72,   -55,  -147,    70,  -147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,    33,   100,   113,   167,     1,    23,    24,    25,    26,
      27,    28,    29,     3,    48,   143,    24,    25,    26,    27,
      28,    29,    23,    24,    25,    26,    27,    28,    29,     4,
      61,   137,    62,     6,   100,    30,    31,   138,   107,   108,
     109,   110,    53,    54,    30,    31,   197,    75,    76,    32,
     154,    30,    31,   138,    79,    80,    83,   111,    32,    45,
     111,     7,    45,    19,   100,    32,    84,    85,    86,   116,
      87,    88,     9,    10,    11,    12,    13,    14,   175,   176,
     120,   121,    22,    15,   179,    45,   127,    40,     9,    10,
      11,    12,    13,    14,   109,   110,   134,   135,    44,    15,
     198,   199,    46,    47,   146,   194,     9,    10,    11,    12,
      13,    14,   153,    49,    57,    59,    64,   149,   125,   152,
      65,    66,    67,    68,    69,    70,    71,    72,    23,    24,
      25,    26,    27,    28,    29,   102,   114,   115,   117,   124,
     174,   133,   166,   177,   130,   126,   141,   158,   131,   136,
     159,   160,   161,   168,   162,   181,   186,   163,   164,   170,
     165,   169,   195,   171,   204,   185,   189,   172,   178,   182,
     183,   196,   188,   190,   202,   193,   142,   201,   207,   203,
     208,   123,   145,   149,   205,   206,    21,    89,   184,   128,
       0,     0,   147,   129,   152
};

static const yytype_int16 yycheck[] =
{
       7,    19,    57,    84,   150,    10,     3,     4,     5,     6,
       7,     8,     9,     3,    32,     3,     4,     5,     6,     7,
       8,     9,     3,     4,     5,     6,     7,     8,     9,     0,
       3,     3,     5,    49,    89,    32,    33,    25,    27,    28,
      29,    30,    29,    30,    32,    33,   192,    32,    33,    46,
      47,    32,    33,    25,    34,    35,     3,    46,    46,    48,
      46,    11,    48,    12,   119,    46,    13,    14,    15,    87,
      17,    18,    20,    21,    22,    23,    24,    25,   159,   160,
      36,    37,    48,    31,   165,    48,   104,    19,    20,    21,
      22,    23,    24,    25,    29,    30,   114,   115,     3,    31,
       3,     4,    30,    31,   122,   186,    20,    21,    22,    23,
      24,    25,   130,    49,    51,     3,    47,   124,     3,   126,
      38,    39,    40,    41,    42,    43,    44,    45,     3,     4,
       5,     6,     7,     8,     9,    50,    46,    46,    46,    46,
     158,    14,     3,   161,    46,    49,    52,    46,    49,    49,
      47,    47,    46,    48,    47,     3,    16,    49,    49,    49,
      47,    47,    26,    47,   201,    47,   179,    50,    49,    49,
      49,   190,    50,    50,    50,    49,   119,    49,    47,    50,
      47,   100,   122,   190,   202,   203,    15,    57,   172,   105,
      -1,    -1,   122,   106,   201
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    54,     3,     0,    55,    49,    11,    56,    20,
      21,    22,    23,    24,    25,    31,    89,    90,    91,    12,
      68,    91,    48,     3,     4,     5,     6,     7,     8,     9,
      32,    33,    46,    94,    99,   104,   109,   112,   113,   114,
      19,    62,    64,    90,     3,    48,   113,   113,    94,    49,
      95,   100,   105,    29,    30,   110,   111,    51,    69,     3,
      57,     3,     5,   115,    47,    38,    39,    40,    41,    42,
      43,    44,    45,    96,    98,    32,    33,   101,   103,    34,
      35,   106,   108,     3,    13,    14,    15,    17,    18,    71,
      72,    73,    77,    79,    80,    81,    83,    88,    92,    93,
     114,    63,    50,    58,    97,   102,   107,    27,    28,    29,
      30,    46,    74,    69,    46,    46,    94,    46,    70,    71,
      36,    37,    75,    74,    46,     3,    49,    94,    99,   104,
      46,    49,    84,    14,    94,    94,    49,     3,    25,    78,
     116,    52,    70,     3,    76,    83,    94,   116,    65,    90,
      59,    60,    90,    94,    47,    85,    86,    94,    46,    47,
      47,    46,    47,    49,    49,    47,     3,    58,    48,    47,
      49,    47,    50,    87,    94,    69,    69,    94,    49,    69,
      66,     3,    49,    49,    86,    47,    16,    82,    50,    62,
      50,    67,    61,    49,    69,    26,    65,    58,     3,     4,
     117,    49,    50,    50,    60,    94,    94,    47,    47
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 44 "sintaxis.y"
    {
                compilador.nomPrograma = (yyvsp[(2) - (2)].id);
                compilador.InsertaFunc((yyvsp[(2) - (2)].id), TIPO_PROGRAMA);
            }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 52 "sintaxis.y"
    {
                    compilador.tipoActual = (yyvsp[(2) - (4)].entero);
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(4) - (4)].id), (yyvsp[(2) - (4)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 63 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), compilador.tipoActual)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 73 "sintaxis.y"
    {
                    compilador.tipoActual = (yyvsp[(1) - (3)].entero);
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(3) - (3)].id), (yyvsp[(1) - (3)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 85 "sintaxis.y"
    {
                    if(!compilador.InsertaFunc((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)].entero))){
                        //No inserto la funcion porque ya existia, asi que hay error
                        yyerror("Funcion declarada dos veces");
                        YYERROR;
                    }
                }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 96 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 97 "sintaxis.y"
    { (yyval.entero) = TIPO_VOID; }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 101 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 126 "sintaxis.y"
    {
                    if(!compilador.ExisteVar((yyvsp[(1) - (2)].id))){
                        yyerror("No existe la variable utilizada");
                        YYERROR;
                    }
                }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 159 "sintaxis.y"
    {
                        if(!compilador.ExisteFunc((yyvsp[(1) - (2)].id)))
                        {
                           yyerror("Llamada a funcion no declarada.");
                           YYERROR;
                        }
                      }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 182 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 183 "sintaxis.y"
    { (yyval.entero) = TIPO_LIST; }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 186 "sintaxis.y"
    { (yyval.entero) = TIPO_INT; }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 187 "sintaxis.y"
    { (yyval.entero) = TIPO_FLOAT; }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 188 "sintaxis.y"
    { (yyval.entero) = TIPO_POS; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 189 "sintaxis.y"
    { (yyval.entero) = TIPO_BOOLEAN; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 190 "sintaxis.y"
    { (yyval.entero) = TIPO_STRING; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 191 "sintaxis.y"
    { (yyval.entero) = TIPO_ENTITY; }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 200 "sintaxis.y"
    {
                    if(compilador.ChecaPrioridad(OP_OR)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos");
                            YYERROR;
                        }
                    }
                }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 211 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 226 "sintaxis.y"
    {
                    if(compilador.ChecaPrioridad(OP_SUMA)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos");
                            YYERROR;
                        }
                    }
                }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 237 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 243 "sintaxis.y"
    {
                    if(compilador.ChecaPrioridad(OP_MULTIPLICACION)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos");
                            YYERROR;
                        }
                    }
                }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 254 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 273 "sintaxis.y"
    {
                if(!compilador.InsertaOperando((yyvsp[(1) - (1)].id), 0, GML_ES_VARIABLE)){
                    yyerror("No existe la variable utilizada");
                    YYERROR;
                }
            }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 279 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_INT, GML_ES_CONSTANTE); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 280 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_FLOAT, GML_ES_CONSTANTE); }
    break;



/* Line 1455 of yacc.c  */
#line 1919 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 300 "sintaxis.y"


void yyerror (char const *s){
    cout << s << endl;
}

