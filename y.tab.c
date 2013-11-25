/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
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
    


/* Line 268 of yacc.c  */
#line 92 "y.tab.c"

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

/* Line 288 of yacc.c  */
#line 21 "sintaxis.y"
 #include "gml.operadores.h" 


/* Line 288 of yacc.c  */
#line 120 "y.tab.c"

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
     RIGHTBRACKET = 307,
     LEFTSQUAREBRACKET = 308,
     RIGHTSQUAREBRACKET = 309
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
#define LEFTSQUAREBRACKET 308
#define RIGHTSQUAREBRACKET 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 23 "sintaxis.y"

  int entero; 
  float flotante;
  char* id;
  int op;



/* Line 293 of yacc.c  */
#line 254 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 266 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  214

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,    17,    18,    27,    28,
      29,    34,    35,    36,    44,    45,    46,    47,    57,    58,
      60,    62,    63,    68,    69,    72,    73,    77,    82,    85,
      86,    88,    90,    92,    94,    96,    98,   101,   103,   105,
     109,   112,   114,   116,   117,   119,   121,   124,   127,   133,
     134,   135,   143,   144,   153,   154,   162,   163,   167,   168,
     169,   174,   176,   179,   180,   181,   186,   187,   190,   194,
     197,   199,   201,   203,   205,   207,   209,   211,   213,   220,
     224,   225,   229,   230,   234,   235,   237,   239,   241,   243,
     245,   247,   249,   251,   252,   256,   257,   261,   262,   264,
     266,   267,   271,   272,   276,   277,   279,   281,   284,   286,
     287,   289,   291,   292,   297,   300,   303,   305,   307,   309,
     311,   313,   315,   317,   319,   321,   322,   326,   331,   332,
     333,   334
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      56,     0,    -1,    -1,    -1,    -1,    10,     3,    49,    57,
      60,    73,    58,    66,    59,    74,    -1,    -1,    11,   101,
      48,     3,    61,    62,    49,    64,    -1,    -1,    -1,    50,
       3,    63,    62,    -1,    -1,    -1,   101,    48,     3,    65,
      62,    49,    64,    -1,    -1,    -1,    -1,    69,     3,    67,
      46,    70,    47,    74,    68,    66,    -1,    -1,   101,    -1,
      19,    -1,    -1,   101,     3,    71,    72,    -1,    -1,    50,
      70,    -1,    -1,    12,   105,    49,    -1,    51,    76,    75,
      52,    -1,    76,    75,    -1,    -1,    77,    -1,    88,    -1,
      82,    -1,    83,    -1,    86,    -1,    99,    -1,    92,    49,
      -1,   103,    -1,   104,    -1,    78,    80,    81,    -1,   126,
      79,    -1,    29,    -1,    30,    -1,    -1,    36,    -1,    37,
      -1,   105,    49,    -1,   129,    49,    -1,    18,    46,   105,
      47,    49,    -1,    -1,    -1,    14,    84,    46,   105,    47,
      85,    74,    -1,    -1,    13,    87,    74,    14,    46,   105,
      47,    49,    -1,    -1,    15,    46,   105,    47,    89,    74,
      90,    -1,    -1,    16,    91,    74,    -1,    -1,    -1,     3,
      46,    93,    94,    -1,    47,    -1,    95,    47,    -1,    -1,
      -1,    96,   105,    97,    98,    -1,    -1,    50,    95,    -1,
      17,   105,    49,    -1,    31,   102,    -1,   102,    -1,   100,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,     3,    27,    46,   105,    47,    49,    -1,
       3,    28,    49,    -1,    -1,   110,   106,   107,    -1,    -1,
     109,   108,   105,    -1,    -1,    38,    -1,    39,    -1,    41,
      -1,    42,    -1,    45,    -1,    44,    -1,    40,    -1,    43,
      -1,    -1,   115,   111,   112,    -1,    -1,   114,   113,   110,
      -1,    -1,    32,    -1,    33,    -1,    -1,   120,   116,   117,
      -1,    -1,   119,   118,   115,    -1,    -1,    34,    -1,    35,
      -1,   123,   121,    -1,   122,    -1,    -1,    29,    -1,    30,
      -1,    -1,    46,   124,   105,    47,    -1,    32,   125,    -1,
      33,   125,    -1,   125,    -1,   126,    -1,     5,    -1,     6,
      -1,     4,    -1,     8,    -1,     9,    -1,     7,    -1,    92,
      -1,    -1,     3,   127,   128,    -1,    48,    53,   105,    54,
      -1,    -1,    -1,    -1,    25,    46,   105,   130,    50,    26,
     105,   131,    50,   105,    47,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    49,    55,    43,    66,    65,    74,    77,
      76,    84,    87,    86,    95,    99,   107,    98,   112,   115,
     116,   120,   119,   127,   130,   131,   136,   144,   145,   145,
     147,   147,   147,   147,   147,   147,   148,   148,   148,   150,
     153,   156,   157,   158,   160,   160,   161,   168,   170,   181,
     187,   180,   209,   208,   225,   224,   242,   241,   252,   256,
     255,   274,   295,   314,   317,   314,   346,   347,   350,   364,
     367,   368,   371,   372,   373,   374,   375,   376,   379,   388,
     392,   391,   403,   403,   404,   407,   408,   409,   410,   411,
     412,   413,   414,   418,   417,   429,   429,   430,   432,   432,
     435,   434,   446,   446,   447,   449,   449,   451,   453,   468,
     470,   470,   472,   472,   473,   474,   475,   478,   479,   480,
     481,   482,   483,   484,   485,   489,   488,   510,   514,   518,
     528,   517
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
  "COMMA", "LEFTBRACKET", "RIGHTBRACKET", "LEFTSQUAREBRACKET",
  "RIGHTSQUAREBRACKET", "$accept", "programa", "$@1", "$@2", "$@3",
  "variables", "$@4", "listaids", "$@5", "varsotrotipo", "$@6", "funcion",
  "$@7", "$@8", "tipoovoid", "parametros", "$@9", "listaparametros",
  "mapa", "bloque", "e6", "estatuto", "asignacion", "porasignar",
  "porasignar2", "signo", "loasignado", "escritura", "ciclowhile", "$@10",
  "$@11", "ciclodowhile", "$@12", "condicion", "$@13", "condicionelse",
  "$@14", "llamadafuncion", "$@15", "llamadafuncion2", "paramsllamada",
  "$@16", "$@17", "paramsllamada2", "regreso", "lista", "tipo",
  "tiposimple", "agregar", "remover", "expresion", "$@18", "expresion2",
  "$@19", "operadorexpresion", "exp", "$@20", "exp2", "$@21",
  "operadorexp", "termino", "$@22", "termino2", "$@23", "operadortermino",
  "factor", "factor2", "operadorfactor", "obtenerxy", "$@24", "varcte",
  "asignable", "$@25", "elemento", "entidad", "$@26", "$@27", 0
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
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    57,    58,    59,    56,    61,    60,    60,    63,
      62,    62,    65,    64,    64,    67,    68,    66,    66,    69,
      69,    71,    70,    70,    72,    72,    73,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      78,    79,    79,    79,    80,    80,    81,    81,    82,    84,
      85,    83,    87,    86,    89,    88,    91,    90,    90,    93,
      92,    94,    94,    96,    97,    95,    98,    98,    99,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   103,   104,
     106,   105,   108,   107,   107,   109,   109,   109,   109,   109,
     109,   109,   109,   111,   110,   113,   112,   112,   114,   114,
     116,   115,   118,   117,   117,   119,   119,   120,   121,   121,
     122,   122,   124,   123,   123,   123,   123,   125,   125,   125,
     125,   125,   125,   125,   125,   127,   126,   128,   128,   130,
     131,   129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,    10,     0,     8,     0,     0,
       4,     0,     0,     7,     0,     0,     0,     9,     0,     1,
       1,     0,     4,     0,     2,     0,     3,     4,     2,     0,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       2,     1,     1,     0,     1,     1,     2,     2,     5,     0,
       0,     7,     0,     8,     0,     7,     0,     3,     0,     0,
       4,     1,     2,     0,     0,     4,     0,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     3,
       0,     3,     0,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     0,     1,     1,
       0,     3,     0,     3,     0,     1,     1,     2,     1,     0,
       1,     1,     0,     4,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     4,     0,     0,
       0,    11
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     8,     0,     0,    72,
      73,    74,    75,    76,    77,     0,    71,     0,    70,     0,
       3,    69,     0,   125,   120,   118,   119,   123,   121,   122,
       0,     0,   112,   124,     0,    80,    93,   100,   109,   116,
     117,    18,     6,    59,   128,   114,   115,     0,    26,    84,
      97,   104,   110,   111,   107,   108,    20,     4,     0,    19,
      11,    63,     0,   126,     0,    85,    86,    91,    87,    88,
      92,    90,    89,    81,    82,    98,    99,    94,    95,   105,
     106,   101,   102,     0,    15,     0,     0,    61,    60,     0,
       0,     0,   113,     0,     0,     0,     0,     5,     0,     9,
      14,    62,    64,     0,    83,    96,   103,   125,    52,    49,
       0,     0,     0,    29,    30,     0,    32,    33,    34,    31,
       0,    35,    37,    38,    43,    23,    11,     7,     0,    66,
     127,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      44,    45,     0,    36,    41,    42,    40,     0,     0,    10,
       0,    63,    65,     0,    79,     0,     0,     0,    68,     0,
      27,    28,     0,    39,     0,     0,     0,    21,    12,    67,
       0,     0,     0,    54,     0,     0,    46,    47,    16,    25,
      11,     0,     0,    50,     0,    48,   129,    18,    23,    22,
       0,    78,     0,     0,    58,     0,    17,    24,    14,     0,
      51,    56,    55,     0,    13,    53,     0,     0,    57,   130,
       0,     0,     0,   131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    41,    83,     8,    60,    86,   126,   127,
     180,    57,    98,   187,    58,   147,   179,   189,    20,    97,
     138,   139,   114,   115,   146,   142,   163,   116,   117,   134,
     193,   118,   133,   119,   184,   202,   206,    33,    61,    88,
      89,    90,   129,   152,   121,    16,    59,    18,   122,   123,
      34,    49,    73,    93,    74,    35,    50,    77,    94,    78,
      36,    51,    81,    95,    82,    37,    54,    55,    38,    47,
      39,    40,    44,    63,   165,   195,   210
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -132
static const yytype_int16 yypact[] =
{
      -6,    29,    21,    -3,  -132,  -132,    23,    81,    44,  -132,
    -132,  -132,  -132,  -132,  -132,    18,  -132,    12,  -132,    65,
    -132,  -132,    58,    17,  -132,  -132,  -132,  -132,  -132,  -132,
     134,   134,  -132,  -132,    34,  -132,  -132,  -132,   -12,  -132,
    -132,    57,  -132,  -132,    16,  -132,  -132,    65,  -132,    82,
      -8,   -15,  -132,  -132,  -132,  -132,  -132,  -132,    63,  -132,
      35,    20,    31,  -132,    39,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,    36,  -132,    87,    43,  -132,  -132,    47,
      65,    65,  -132,    65,    65,    65,    13,  -132,    49,  -132,
      81,  -132,  -132,    45,  -132,  -132,  -132,   -13,  -132,  -132,
      54,    65,    62,    13,  -132,    15,  -132,  -132,  -132,  -132,
      60,  -132,  -132,  -132,    25,    81,    35,  -132,    66,    67,
    -132,    69,    64,    36,    70,    65,    79,    65,    78,    13,
    -132,  -132,     4,  -132,  -132,  -132,  -132,    72,   128,  -132,
     129,  -132,  -132,    65,  -132,   119,    65,    88,  -132,    97,
    -132,  -132,    99,  -132,    85,    98,    36,  -132,  -132,  -132,
     101,   100,   102,  -132,   103,    65,  -132,  -132,  -132,   104,
      35,   106,    65,  -132,    36,  -132,  -132,    57,    81,  -132,
     107,  -132,   110,    36,   135,   108,  -132,  -132,    81,   111,
    -132,  -132,  -132,   124,  -132,  -132,    36,    65,  -132,  -132,
     109,    65,   115,  -132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -123,  -132,   -45,
    -132,   -24,  -132,  -132,  -132,   -22,  -132,  -132,  -132,  -131,
      30,    68,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,   -91,  -132,  -132,
      19,  -132,  -132,  -132,  -132,  -132,    -7,   152,  -132,  -132,
     -46,  -132,  -132,  -132,  -132,    74,  -132,  -132,  -132,  -132,
      76,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
      28,   -90,  -132,  -132,  -132,  -132,  -132
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,    64,   155,   149,     1,   120,   124,    23,    24,    25,
      26,    27,    28,    29,   131,   132,   107,    52,    53,    79,
      80,     4,   120,   124,    75,    76,   108,   109,   110,   162,
     111,   112,     3,    43,     7,   178,    30,    31,     9,    10,
      11,    12,    13,    14,   102,   103,     5,   104,   120,   124,
      32,   140,   141,   194,   144,   145,    19,   190,    45,    46,
      22,    42,   200,    43,    62,   136,    84,    87,    23,    24,
      25,    26,    27,    28,    29,   208,    56,     9,    10,    11,
      12,    13,    14,    48,    91,    85,    92,    96,    15,   157,
      99,   159,   100,   128,   101,   125,   164,    30,    31,   130,
     135,     9,    10,    11,    12,    13,    14,   170,   137,   143,
     172,    32,    15,   154,   150,   153,   156,   151,   148,   166,
      65,    66,    67,    68,    69,    70,    71,    72,   158,   186,
     160,   167,   168,   171,   176,   173,   192,    23,    24,    25,
      26,    27,    28,    29,   174,   175,   182,   177,   181,   183,
     207,   201,   185,   204,   188,   191,   198,   199,   203,   211,
     205,   209,   213,   196,   113,   212,   197,    21,   105,   161,
     169,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-132))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    47,   133,   126,    10,    96,    96,     3,     4,     5,
       6,     7,     8,     9,    27,    28,     3,    29,    30,    34,
      35,     0,   113,   113,    32,    33,    13,    14,    15,    25,
      17,    18,     3,    46,    11,   166,    32,    33,    20,    21,
      22,    23,    24,    25,    90,    91,    49,    93,   139,   139,
      46,    36,    37,   184,    29,    30,    12,   180,    30,    31,
      48,     3,   193,    46,    48,   111,     3,    47,     3,     4,
       5,     6,     7,     8,     9,   206,    19,    20,    21,    22,
      23,    24,    25,    49,    53,    50,    47,    51,    31,   135,
       3,   137,    49,   100,    47,    46,   142,    32,    33,    54,
      46,    20,    21,    22,    23,    24,    25,   153,    46,    49,
     156,    46,    31,    49,    48,    46,    46,    50,   125,    47,
      38,    39,    40,    41,    42,    43,    44,    45,    49,   175,
      52,     3,     3,    14,    49,    47,   182,     3,     4,     5,
       6,     7,     8,     9,    47,    46,    46,    49,    47,    47,
      26,    16,    49,   198,    50,    49,    49,    47,    50,    50,
      49,   207,    47,   187,    96,   211,   188,    15,    94,   139,
     151,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   198
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    56,     3,     0,    49,    57,    11,    60,    20,
      21,    22,    23,    24,    25,    31,   100,   101,   102,    12,
      73,   102,    48,     3,     4,     5,     6,     7,     8,     9,
      32,    33,    46,    92,   105,   110,   115,   120,   123,   125,
     126,    58,     3,    46,   127,   125,   125,   124,    49,   106,
     111,   116,    29,    30,   121,   122,    19,    66,    69,   101,
      61,    93,    48,   128,   105,    38,    39,    40,    41,    42,
      43,    44,    45,   107,   109,    32,    33,   112,   114,    34,
      35,   117,   119,    59,     3,    50,    62,    47,    94,    95,
      96,    53,    47,   108,   113,   118,    51,    74,    67,     3,
      49,    47,   105,   105,   105,   110,   115,     3,    13,    14,
      15,    17,    18,    76,    77,    78,    82,    83,    86,    88,
      92,    99,   103,   104,   126,    46,    63,    64,   101,    97,
      54,    27,    28,    87,    84,    46,   105,    46,    75,    76,
      36,    37,    80,    49,    29,    30,    79,    70,   101,    62,
      48,    50,    98,    46,    49,    74,    46,   105,    49,   105,
      52,    75,    25,    81,   105,   129,    47,     3,     3,    95,
     105,    14,   105,    47,    47,    46,    49,    49,    74,    71,
      65,    47,    46,    47,    89,    49,   105,    68,    50,    72,
      62,    49,   105,    85,    74,   130,    66,    70,    49,    47,
      74,    16,    90,    50,    64,    49,    91,    26,    74,   105,
     131,    50,   105,    47
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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

/* Line 1806 of yacc.c  */
#line 44 "sintaxis.y"
    {
                compilador.nomPrograma = (yyvsp[(2) - (3)].id);
                compilador.InsertaFunc((yyvsp[(2) - (3)].id), TIPO_PROGRAMA);
            }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 49 "sintaxis.y"
    {
                compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                Cuadruplo quad = Cuadruplo(OP_GOTO, GML_SALTO_PENDIENTE);
                compilador.vectorCuadruplos.push_back(quad);
            }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 55 "sintaxis.y"
    {
                //El main empieza abajo, actualiza el goto inicial
                int gotoInicial = compilador.pilaSaltos.top();
                compilador.pilaSaltos.pop();
                compilador.vectorCuadruplos[gotoInicial].resultado = compilador.vectorCuadruplos.size();
                compilador.funcionActual = compilador.nomPrograma;
            }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 66 "sintaxis.y"
    {
                    compilador.tipoActual = (yyvsp[(2) - (4)].entero);
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(4) - (4)].id), (yyvsp[(2) - (4)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 77 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), compilador.tipoActual)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 87 "sintaxis.y"
    {
                    compilador.tipoActual = (yyvsp[(1) - (3)].entero);
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(3) - (3)].id), (yyvsp[(1) - (3)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 99 "sintaxis.y"
    {
                    if(!compilador.InsertaFunc((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)].entero))){
                        //No inserto la funcion porque ya existia, asi que hay error
                        yyerror("Funcion declarada dos veces");
                        YYERROR;
                    }
                }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 107 "sintaxis.y"
    {
                    Cuadruplo quad = Cuadruplo(OP_ENDPROC, -1);
                    compilador.vectorCuadruplos.push_back(quad);
                }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 115 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 116 "sintaxis.y"
    { (yyval.entero) = TIPO_VOID; }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 120 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)].entero), true)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 137 "sintaxis.y"
    {
                Variable operando = compilador.pilaOperandos.top();
                compilador.pilaOperandos.pop();
                Cuadruplo quad = Cuadruplo(OP_MAPSIZE, operando.direccion, -1, -1);
                compilador.vectorCuadruplos.push_back(quad);
            }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 162 "sintaxis.y"
    {
                    if(!compilador.GeneraCuadruploAsignacion()){
                        yyerror("No concuerdan los tipos para asignacion");
                        YYERROR;
                    }
                }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 171 "sintaxis.y"
    {
                bool sePudo = compilador.AccionDraw();
                if(!sePudo){
                    yyerror("Error en semantica de dibujo (draw)");
                    YYERROR;
                }
            }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 181 "sintaxis.y"
    {
                    //cout << "Se pudo entrar al while!" << endl;
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                    //cout << "Se pudo pushear a pila saltos!" << endl;
                }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 187 "sintaxis.y"
    {
                    //cout << "Termine parentesis del while" << endl;
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de while debe ser booleano");
                        YYERROR;
                    }
                    //cout << "Generé cuádruplo GOTOF en while" << endl;
                }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 196 "sintaxis.y"
    {
                    //cout << "Terminé bloque de while" << endl;
                    int porActualizar = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    int inicioExpresion = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    Cuadruplo quad = Cuadruplo(OP_GOTO, inicioExpresion);
                    compilador.vectorCuadruplos.push_back(quad);
                    compilador.vectorCuadruplos[porActualizar].resultado = compilador.vectorCuadruplos.size();
                }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 209 "sintaxis.y"
    {
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 213 "sintaxis.y"
    {
                    int inicioDoWhile = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    Variable operando = compilador.pilaOperandos.top();
                    compilador.pilaOperandos.pop();
                    //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
                    Cuadruplo quad = Cuadruplo(OP_GOTOV, operando.direccion, inicioDoWhile);
                    compilador.vectorCuadruplos.push_back(quad);
                }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 225 "sintaxis.y"
    {
                    //cout << "Por generar cuádruplo GOTOF en if" << endl;
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de if debe ser booleano");
                        YYERROR;
                    }
                    //cout << "Generé cuádruplo GOTOF en if" << endl;
                }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 234 "sintaxis.y"
    {
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 242 "sintaxis.y"
    {
                    Cuadruplo quad = Cuadruplo(OP_GOTO, GML_SALTO_PENDIENTE);
                    compilador.vectorCuadruplos.push_back(quad);
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size()-1);
                }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 256 "sintaxis.y"
    {
                        cout << "Entrando a llamadafuncion " << (yyvsp[(1) - (2)].id) << endl;
                        if(!compilador.ExisteFunc((yyvsp[(1) - (2)].id)))
                        {
                           yyerror("Llamada a funcion no declarada.");
                           YYERROR;
                        }else{
                            compilador.llamadaActual = (yyvsp[(1) - (2)].id);
                            compilador.paramActual = 0;
                            //cout << "Si existe func, por generar quad " << endl;
                            int numFunc = compilador.tablaFuncs[(yyvsp[(1) - (2)].id)].numFuncion;
                            Cuadruplo quad = Cuadruplo(OP_ERA, numFunc, -1, -1);
                            compilador.vectorCuadruplos.push_back(quad);
                            //cout << "Ya genere quad" << endl;
                        }
                      }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 275 "sintaxis.y"
    {
                        cout << "Cerré paréntesis" << endl;
                        if(compilador.paramActual != compilador.tablaFuncs[compilador.llamadaActual].params.size()){
                           yyerror("Cantidad de parametros en llamada es menor al esperado");
                           YYERROR;
                        }
                        cout << "Hice chequeo de cantidad de parámetros" << endl;
                        int tipoResultante = compilador.tablaFuncs[compilador.llamadaActual].tipo;
                        cout << "Obtuve tipo de tipoResultante" << endl;
                        int dirReturn;
                        if(tipoResultante != TIPO_VOID){
                            compilador.InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
                            Variable resultado = compilador.pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
                            dirReturn = resultado.tipo;
                        }else{
                            dirReturn = -1;
                        }
                        Cuadruplo quad = Cuadruplo(OP_GOSUB, compilador.tablaFuncs[compilador.llamadaActual].direccion, -1, dirReturn);
                        compilador.vectorCuadruplos.push_back(quad);
                    }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 296 "sintaxis.y"
    {
                        if(compilador.paramActual != compilador.tablaFuncs[compilador.llamadaActual].params.size()){
                           yyerror("Cantidad de parametros en llamada es menor al esperado");
                           YYERROR;
                        }
                        int tipoResultante = compilador.tablaFuncs[compilador.llamadaActual].tipo;
                        int dirReturn;
                        if(tipoResultante != TIPO_VOID){
                            compilador.InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
                            Variable resultado = compilador.pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
                            dirReturn = resultado.tipo;
                        }else{
                            dirReturn = -1;
                        }
                        Cuadruplo quad = Cuadruplo(OP_GOSUB, compilador.tablaFuncs[compilador.llamadaActual].direccion, -1, dirReturn);
                        compilador.vectorCuadruplos.push_back(quad);
                    }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 314 "sintaxis.y"
    { compilador.PonFondoFalso(); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 317 "sintaxis.y"
    {
                        compilador.QuitaFondoFalso();                        
                        Variable operando = compilador.pilaOperandos.top();
                        compilador.pilaOperandos.pop();
                        //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
                        //printf("operando.tipo = %d, llamadaActual.params[%d].tipo = %d\n", operando.tipo, compilador.paramActual, compilador.tablaFuncs[compilador.llamadaActual].params.at(compilador.paramActual));
                        
                        if(compilador.paramActual >= compilador.tablaFuncs[compilador.llamadaActual].params.size()){
                           yyerror("Cantidad de parametros en llamada es mayor al esperado");
                           YYERROR;
                        }else{
                            int tipoOp;
                            if(operando.tipo != TIPO_POINTER){
                                tipoOp = operando.tipo;
                            }else{
                                tipoOp = operando.subtipo;
                            }
                            if(tipoOp != compilador.tablaFuncs[compilador.llamadaActual].params.at(compilador.paramActual)){
                               yyerror("Tipo de parametro no concuerda");
                               YYERROR;           
                            }else{
                                Cuadruplo quad = Cuadruplo(OP_PARAM, operando.direccion, -1, compilador.paramActual);
                                compilador.vectorCuadruplos.push_back(quad);
                                compilador.paramActual++;
                            }
                        }
                    }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 351 "sintaxis.y"
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
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 364 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(2) - (2)].entero); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 367 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); compilador.subtipoListaActual = TIPO_VOID; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 368 "sintaxis.y"
    { (yyval.entero) = TIPO_LIST; compilador.subtipoListaActual = (yyvsp[(1) - (1)].entero); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 371 "sintaxis.y"
    { (yyval.entero) = TIPO_INT; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 372 "sintaxis.y"
    { (yyval.entero) = TIPO_FLOAT; }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 373 "sintaxis.y"
    { (yyval.entero) = TIPO_POS; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 374 "sintaxis.y"
    { (yyval.entero) = TIPO_BOOLEAN; }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 375 "sintaxis.y"
    { (yyval.entero) = TIPO_STRING; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 376 "sintaxis.y"
    { (yyval.entero) = TIPO_ENTITY; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 380 "sintaxis.y"
    {
                    bool sePudo = compilador.AccionAdd((yyvsp[(1) - (6)].id));
                    if(!sePudo){
                        yyerror("Error en semantica de agregar a lista");
                        YYERROR;
                    }
              }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 392 "sintaxis.y"
    {
                    if(compilador.ChecaPrioridad(OP_OR)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos en operadores booleanos");
                            YYERROR;
                        }
                    }
                }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 403 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 418 "sintaxis.y"
    {
                    if(compilador.ChecaPrioridad(OP_SUMA)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos en suma o resta");
                            YYERROR;
                        }
                    }
                }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 429 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 435 "sintaxis.y"
    {
                    if(compilador.ChecaPrioridad(OP_MULTIPLICACION)){
                        bool sePudo = compilador.GeneraCuadruplo();
                        if(!sePudo){
                            yyerror("Incompatibilidad de tipos en multiplicacion o division");
                            YYERROR;
                        }
                    }
                }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 446 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 454 "sintaxis.y"
    {
                Variable op = compilador.pilaOperandos.top();
                compilador.pilaOperandos.pop();
                int tipo = compilador.TipoResultante((yyvsp[(1) - (1)].op), op, op);
                if(tipo == TIPO_VOID){
                    yyerror("Incompatibilidad de tipo en _x o _y");
                    YYERROR;
                }else{
                    compilador.InsertaOperando("temp", tipo, GML_ES_TEMPORAL);
                    Variable res = compilador.pilaOperandos.top();
                    Cuadruplo quad = Cuadruplo((yyvsp[(1) - (1)].op), op.direccion, -1, res.direccion);
                    compilador.vectorCuadruplos.push_back(quad);
                }
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 472 "sintaxis.y"
    { compilador.PonFondoFalso(); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 472 "sintaxis.y"
    { compilador.QuitaFondoFalso(); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 479 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_INT, GML_ES_CONSTANTE); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 480 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_FLOAT, GML_ES_CONSTANTE); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 481 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_STRING, GML_ES_CONSTANTE); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 482 "sintaxis.y"
    { compilador.InsertaOperando("true", TIPO_BOOLEAN, GML_ES_CONSTANTE); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 483 "sintaxis.y"
    { compilador.InsertaOperando("false", TIPO_BOOLEAN, GML_ES_CONSTANTE); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 484 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_POS, GML_ES_CONSTANTE); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 489 "sintaxis.y"
    {
                    compilador.esElemento = false;
                }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 493 "sintaxis.y"
    {
                    if(!compilador.esElemento){
                        //trátalo como variable
                        if(!compilador.InsertaOperando((yyvsp[(1) - (3)].id), 0, GML_ES_VARIABLE)){
                            yyerror("No existe la variable utilizada");
                            YYERROR;
                        }
                    }else{
                        //trátalo como elemento
                        bool sePudo = compilador.AccionElemento((yyvsp[(1) - (3)].id));
                        if(!sePudo){
                            yyerror("Error en semantica de elemento de lista");
                            YYERROR;
                        }
                    }
                }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 511 "sintaxis.y"
    {
                    compilador.esElemento = true;
                }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 518 "sintaxis.y"
    {
                    //cout << "Antes de asignar pos!" << endl;
                    bool sePudo = compilador.AccionEntidadPos();
                    if(!sePudo){
                        yyerror("Error en semantica de definicion de entidad - pos");
                        YYERROR;
                    }
                    //cout << "Se pudo asignar pos!" << endl;
                }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 528 "sintaxis.y"
    {
                    bool sePudo = compilador.AccionEntidadSprite();
                    if(!sePudo){
                        yyerror("Error en semantica de definicion de entidad - sprite");
                        YYERROR;
                    }
                    //cout << "Se pudo asignar sprite!" << endl;
                }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 537 "sintaxis.y"
    {
                    bool sePudo = compilador.AccionEntidadPass();
                    if(!sePudo){
                        yyerror("Error en semantica de definicion de entidad - pass");
                        YYERROR;
                    }
                    //cout << "Se pudo asignar entity!" << endl;
                }
    break;



/* Line 1806 of yacc.c  */
#line 2397 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 547 "sintaxis.y"


void yyerror (char const *s){
    cout << s << endl;
}

