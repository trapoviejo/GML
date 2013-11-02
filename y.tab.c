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

/* Line 293 of yacc.c  */
#line 23 "sintaxis.y"

  int entero; 
  float flotante;
  char* id;
  int op;



/* Line 293 of yacc.c  */
#line 250 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 262 "y.tab.c"

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
#define YYLAST   199

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  215

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
     135,   136,   137,   145,   146,   155,   156,   164,   165,   169,
     170,   171,   176,   179,   183,   186,   187,   190,   194,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   220,   224,
     225,   229,   230,   234,   235,   237,   239,   241,   243,   245,
     247,   249,   251,   252,   256,   257,   261,   262,   264,   266,
     267,   271,   272,   276,   277,   279,   281,   284,   286,   287,
     289,   291,   292,   297,   300,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   325,   327,   329,   336,   341
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    10,     3,    55,    49,    56,    68,
      62,    69,    -1,    -1,    11,    95,    48,     3,    57,    58,
      49,    60,    -1,    -1,    -1,    50,     3,    59,    58,    -1,
      -1,    -1,    95,    48,     3,    61,    58,    49,    60,    -1,
      -1,    -1,    64,     3,    63,    46,    65,    47,    69,    62,
      -1,    -1,    95,    -1,    19,    -1,    -1,    95,     3,    66,
      67,    -1,    -1,    50,    65,    -1,    -1,    12,    99,    49,
      -1,    51,    71,    70,    52,    -1,    71,    70,    -1,    -1,
      72,    -1,    84,    -1,    77,    -1,    79,    -1,    82,    -1,
      93,    -1,    88,    -1,    97,    -1,    98,    -1,    73,    75,
      76,    -1,     3,    74,    -1,   120,    74,    -1,    29,    -1,
      30,    -1,    -1,    36,    -1,    37,    -1,    99,    49,    -1,
      88,    -1,   122,    49,    -1,    18,    46,    78,    47,    49,
      -1,   122,    -1,     3,    -1,    -1,    -1,    14,    80,    46,
      99,    47,    81,    69,    -1,    -1,    13,    83,    69,    14,
      46,    99,    47,    49,    -1,    -1,    15,    46,    99,    47,
      85,    69,    86,    -1,    -1,    16,    87,    69,    -1,    -1,
      -1,     3,    46,    89,    90,    -1,    47,    49,    -1,    91,
      47,    49,    -1,    99,    92,    -1,    -1,    50,    91,    -1,
      17,    99,    49,    -1,    31,    96,    -1,    96,    -1,    94,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,     3,    27,    46,    99,    47,    49,    -1,
       3,    28,    49,    -1,    -1,   104,   100,   101,    -1,    -1,
     103,   102,    99,    -1,    -1,    38,    -1,    39,    -1,    41,
      -1,    42,    -1,    45,    -1,    44,    -1,    40,    -1,    43,
      -1,    -1,   109,   105,   106,    -1,    -1,   108,   107,   104,
      -1,    -1,    32,    -1,    33,    -1,    -1,   114,   110,   111,
      -1,    -1,   113,   112,   109,    -1,    -1,    34,    -1,    35,
      -1,   117,   115,    -1,   116,    -1,    -1,    29,    -1,    30,
      -1,    -1,    46,   118,    99,    47,    -1,    32,   119,    -1,
      33,   119,    -1,   119,    -1,     3,    -1,     5,    -1,     6,
      -1,     4,    -1,     8,    -1,     9,    -1,     7,    -1,   120,
      -1,     3,    48,   121,    -1,     5,    -1,     3,    -1,    25,
      46,    99,    50,    26,   123,    -1,     4,    50,    99,    47,
      -1,     3,    50,    99,    47,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    43,    52,    51,    60,    63,    62,    70,
      73,    72,    81,    85,    84,    93,    96,    97,   101,   100,
     108,   111,   112,   115,   117,   118,   118,   120,   120,   120,
     120,   120,   120,   121,   121,   121,   123,   132,   140,   143,
     144,   145,   147,   147,   148,   148,   148,   150,   152,   152,
     155,   159,   154,   178,   177,   193,   192,   208,   207,   218,
     222,   221,   231,   232,   234,   236,   237,   240,   242,   245,
     246,   249,   250,   251,   252,   253,   254,   257,   259,   263,
     262,   274,   274,   275,   278,   279,   280,   281,   282,   283,
     284,   285,   289,   288,   300,   300,   301,   303,   303,   306,
     305,   317,   317,   318,   320,   320,   322,   324,   325,   327,
     327,   329,   329,   330,   331,   332,   335,   342,   343,   344,
     345,   346,   347,   348,   351,   353,   354,   357,   359,   360
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
  "signo", "loasignado", "escritura", "e9", "ciclowhile", "$@7", "$@8",
  "ciclodowhile", "$@9", "condicion", "$@10", "condicionelse", "$@11",
  "llamadafuncion", "$@12", "llamadafuncion2", "paramsllamada",
  "paramsllamada2", "regreso", "lista", "tipo", "tiposimple", "agregar",
  "remover", "expresion", "$@13", "expresion2", "$@14",
  "operadorexpresion", "exp", "$@15", "exp2", "$@16", "operadorexp",
  "termino", "$@17", "termino2", "$@18", "operadortermino", "factor",
  "factor2", "operadorfactor", "obtenerxy", "$@19", "varcte", "elemento",
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
      80,    81,    79,    83,    82,    85,    84,    87,    86,    86,
      89,    88,    90,    90,    91,    92,    92,    93,    94,    95,
      95,    96,    96,    96,    96,    96,    96,    97,    98,   100,
      99,   102,   101,   101,   103,   103,   103,   103,   103,   103,
     103,   103,   105,   104,   107,   106,   106,   108,   108,   110,
     109,   112,   111,   111,   113,   113,   114,   115,   115,   116,
     116,   118,   117,   117,   117,   117,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   121,   121,   122,   123,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     0,     8,     0,     0,     4,     0,
       0,     7,     0,     0,     8,     0,     1,     1,     0,     4,
       0,     2,     0,     3,     4,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     1,
       1,     0,     1,     1,     2,     1,     2,     5,     1,     1,
       0,     0,     7,     0,     8,     0,     7,     0,     3,     0,
       0,     4,     2,     3,     2,     0,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     3,     0,
       3,     0,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     3,     0,     1,     1,     0,
       3,     0,     3,     0,     1,     1,     2,     1,     0,     1,
       1,     0,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     6,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,    71,
      72,    73,    74,    75,    76,     0,    70,     0,    69,     0,
      15,    68,     0,   116,   119,   117,   118,   122,   120,   121,
       0,     0,   111,     0,    79,    92,    99,   108,   115,   123,
      17,     0,     0,    16,     4,     0,   113,   114,     0,    23,
      83,    96,   103,   109,   110,   106,   107,     0,     3,    13,
       9,   126,   125,   124,     0,    84,    85,    90,    86,    87,
      91,    89,    88,    80,    81,    97,    98,    93,    94,   104,
     105,   100,   101,    41,    53,    50,     0,     0,     0,    26,
      27,     0,    29,    30,    31,    28,    33,    32,    34,    35,
      41,     0,     0,     0,   112,     0,     0,     0,     0,     0,
      39,    40,    60,    37,     0,     0,     0,     0,     0,     0,
      26,    42,    43,     0,    38,    20,     7,    12,    82,    95,
     102,     0,    78,     0,     0,     0,     0,    67,    49,     0,
       0,    48,    24,    25,   116,    36,    45,     0,     0,     0,
       0,     9,     5,     0,     0,     0,    61,     0,    65,     0,
       0,    55,     0,     0,    44,    46,     0,    18,     8,     0,
       0,    62,     0,     0,    64,     0,    51,     0,     0,    47,
      15,    22,    10,    77,    63,    66,     0,     0,    59,     0,
      14,    20,    19,     9,     0,    52,    57,    56,     0,    21,
       0,    54,     0,     0,     0,   127,    12,    58,     0,     0,
      11,     0,     0,   129,   128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     8,    60,   103,   151,   152,   193,    41,
     101,    42,   149,   181,   192,    20,    58,   119,   120,    90,
      91,   113,   123,   145,    92,   140,    93,   115,   187,    94,
     114,    95,   177,   197,   202,    96,   133,   156,   157,   174,
      97,    16,    43,    18,    98,    99,   158,    50,    73,   105,
      74,    34,    51,    77,   106,    78,    35,    52,    81,   107,
      82,    36,    55,    56,    37,    48,    38,    39,    63,   141,
     205
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -141
static const yytype_int16 yypact[] =
{
      22,    25,    38,  -141,  -141,     0,    67,    72,    40,  -141,
    -141,  -141,  -141,  -141,  -141,   109,  -141,    53,  -141,    18,
      60,  -141,    99,    56,  -141,  -141,  -141,  -141,  -141,  -141,
     103,   103,  -141,    37,  -141,  -141,  -141,   -17,  -141,  -141,
    -141,    63,   112,  -141,  -141,    26,  -141,  -141,    18,  -141,
      83,    13,    21,  -141,  -141,  -141,  -141,    59,  -141,  -141,
      66,  -141,  -141,  -141,    88,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,    12,  -141,  -141,    73,    18,    90,    59,
    -141,    31,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
      41,    91,   135,    92,  -141,    18,    18,    18,    93,    94,
    -141,  -141,  -141,  -141,    63,    96,    18,    97,    34,    95,
      59,  -141,  -141,    11,  -141,    72,  -141,    72,  -141,  -141,
    -141,    18,  -141,     1,   126,    18,    98,  -141,  -141,   102,
     104,  -141,  -141,  -141,    15,  -141,  -141,   100,   101,   105,
     150,    66,  -141,   106,   108,   107,  -141,   111,   110,   113,
     114,  -141,    18,   115,  -141,  -141,    63,  -141,  -141,   159,
     116,  -141,   117,    18,  -141,    18,  -141,    63,   118,  -141,
      60,   119,  -141,  -141,  -141,  -141,   120,    63,   147,   144,
    -141,    72,  -141,    66,   122,  -141,  -141,  -141,    85,  -141,
     123,  -141,    63,   124,   125,  -141,    72,  -141,    18,    18,
    -141,   129,   130,  -141,  -141
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,  -141,  -140,  -141,   -33,  -141,    -2,
    -141,  -141,   -12,  -141,  -141,  -141,  -112,    61,   128,  -141,
    -141,    80,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,    64,  -141,  -141,     9,  -141,
    -141,  -141,    -7,   168,  -141,  -141,   -18,  -141,  -141,  -141,
    -141,    82,  -141,  -141,  -141,  -141,    79,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,    69,   -54,  -141,    70,
    -141
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,    33,   134,   100,    23,    24,    25,    26,    27,    28,
      29,   168,    53,    54,   144,    24,    25,    26,    27,    28,
      29,    23,    24,    25,    26,    27,    28,    29,     3,    61,
      64,    62,     1,    30,    31,   100,   139,   138,     4,   108,
     109,   110,   111,    30,    31,    75,    76,    32,   155,     6,
      30,    31,    19,   200,   180,    79,    80,    32,   112,   139,
      45,   112,    83,    45,    32,   188,   100,   121,   122,   117,
     110,   111,    84,    85,    86,   195,    87,    88,     7,    40,
       9,    10,    11,    12,    13,    14,    49,   128,   203,   204,
     207,    15,     9,    10,    11,    12,    13,    14,   136,    46,
      47,    22,    44,    15,    45,   147,    23,    24,    25,    26,
      27,    28,    29,   154,    57,    59,   102,   160,   150,   116,
     153,    65,    66,    67,    68,    69,    70,    71,    72,     9,
      10,    11,    12,    13,    14,   104,   118,   125,   126,   131,
     159,   127,   135,   132,   178,   161,   137,   142,   162,   164,
     165,   163,   166,   167,   169,   170,   171,   186,   172,   175,
     173,   176,   182,   196,   179,   183,   184,   194,   189,   191,
     198,   201,   206,   210,   208,   209,   213,   214,   190,   199,
     124,   143,   185,    21,   150,    89,   130,   146,   129,     0,
     211,   212,     0,   148,     0,     0,     0,     0,     0,   153
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-141))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    19,   114,    57,     3,     4,     5,     6,     7,     8,
       9,   151,    29,    30,     3,     4,     5,     6,     7,     8,
       9,     3,     4,     5,     6,     7,     8,     9,     3,     3,
      48,     5,    10,    32,    33,    89,    25,     3,     0,    27,
      28,    29,    30,    32,    33,    32,    33,    46,    47,    49,
      32,    33,    12,   193,   166,    34,    35,    46,    46,    25,
      48,    46,     3,    48,    46,   177,   120,    36,    37,    87,
      29,    30,    13,    14,    15,   187,    17,    18,    11,    19,
      20,    21,    22,    23,    24,    25,    49,   105,     3,     4,
     202,    31,    20,    21,    22,    23,    24,    25,   116,    30,
      31,    48,     3,    31,    48,   123,     3,     4,     5,     6,
       7,     8,     9,   131,    51,     3,    50,   135,   125,    46,
     127,    38,    39,    40,    41,    42,    43,    44,    45,    20,
      21,    22,    23,    24,    25,    47,    46,    46,     3,    46,
      14,    49,    46,    49,   162,    47,    49,    52,    46,    49,
      49,    47,    47,     3,    48,    47,    49,   175,    47,    46,
      50,    47,     3,    16,    49,    49,    49,    47,    50,    50,
      26,    49,    49,   206,    50,    50,    47,    47,   180,   191,
     100,   120,   173,    15,   191,    57,   107,   123,   106,    -1,
     208,   209,    -1,   123,    -1,    -1,    -1,    -1,    -1,   206
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    54,     3,     0,    55,    49,    11,    56,    20,
      21,    22,    23,    24,    25,    31,    94,    95,    96,    12,
      68,    96,    48,     3,     4,     5,     6,     7,     8,     9,
      32,    33,    46,    99,   104,   109,   114,   117,   119,   120,
      19,    62,    64,    95,     3,    48,   119,   119,   118,    49,
     100,   105,   110,    29,    30,   115,   116,    51,    69,     3,
      57,     3,     5,   121,    99,    38,    39,    40,    41,    42,
      43,    44,    45,   101,   103,    32,    33,   106,   108,    34,
      35,   111,   113,     3,    13,    14,    15,    17,    18,    71,
      72,    73,    77,    79,    82,    84,    88,    93,    97,    98,
     120,    63,    50,    58,    47,   102,   107,   112,    27,    28,
      29,    30,    46,    74,    83,    80,    46,    99,    46,    70,
      71,    36,    37,    75,    74,    46,     3,    49,    99,   104,
     109,    46,    49,    89,    69,    46,    99,    49,     3,    25,
      78,   122,    52,    70,     3,    76,    88,    99,   122,    65,
      95,    59,    60,    95,    99,    47,    90,    91,    99,    14,
      99,    47,    46,    47,    49,    49,    47,     3,    58,    48,
      47,    49,    47,    50,    92,    46,    47,    85,    99,    49,
      69,    66,     3,    49,    49,    91,    99,    81,    69,    50,
      62,    50,    67,    61,    47,    69,    16,    86,    26,    65,
      58,    49,    87,     3,     4,   123,    49,    69,    50,    50,
      60,    99,    99,    47,    47
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
                compilador.nomPrograma = (yyvsp[(2) - (2)].id);
                compilador.InsertaFunc((yyvsp[(2) - (2)].id), TIPO_PROGRAMA);
            }
    break;

  case 4:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 63 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), compilador.tipoActual)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 10:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 96 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 97 "sintaxis.y"
    { (yyval.entero) = TIPO_VOID; }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 101 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 124 "sintaxis.y"
    {
                    if(!compilador.GeneraCuadruploAsignacion((yyvsp[(1) - (3)].id))){
                        yyerror("No concuerdan los tipos para asignacion");
                        YYERROR;
                    }
                }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 133 "sintaxis.y"
    {
                    (yyval.id) = (yyvsp[(1) - (2)].id);
                    if(!compilador.ExisteVar((yyvsp[(1) - (2)].id))){
                        yyerror("No existe la variable utilizada");
                        YYERROR;
                    }
                }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 155 "sintaxis.y"
    {
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 159 "sintaxis.y"
    {
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de while debe ser booleano");
                        YYERROR;
                    }
                }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 166 "sintaxis.y"
    {
                    int porActualizar = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    int inicioExpresion = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    Cuadruplo quad = Cuadruplo(OP_GOTO, inicioExpresion);
                    compilador.vectorCuadruplos.push_back(quad);
                    compilador.vectorCuadruplos[porActualizar].resultado = compilador.vectorCuadruplos.size();
                }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 178 "sintaxis.y"
    {
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 182 "sintaxis.y"
    {
                    int inicioDoWhile = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    Variable operando = compilador.pilaOperandos.top();
                    compilador.pilaOperandos.pop();
                    Cuadruplo quad = Cuadruplo(OP_GOTOV, operando.direccion, inicioDoWhile);
                    compilador.vectorCuadruplos.push_back(quad);
                }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 193 "sintaxis.y"
    {
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de if debe ser booleano");
                        YYERROR;
                    }
                }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 200 "sintaxis.y"
    {
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 208 "sintaxis.y"
    {
                    Cuadruplo quad = Cuadruplo(OP_GOTO, GML_SALTO_PENDIENTE);
                    compilador.vectorCuadruplos.push_back(quad);
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size()-1);
                }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 222 "sintaxis.y"
    {
                        if(!compilador.ExisteFunc((yyvsp[(1) - (2)].id)))
                        {
                           yyerror("Llamada a funcion no declarada.");
                           YYERROR;
                        }
                      }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 245 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 246 "sintaxis.y"
    { (yyval.entero) = TIPO_LIST; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 249 "sintaxis.y"
    { (yyval.entero) = TIPO_INT; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 250 "sintaxis.y"
    { (yyval.entero) = TIPO_FLOAT; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 251 "sintaxis.y"
    { (yyval.entero) = TIPO_POS; }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 252 "sintaxis.y"
    { (yyval.entero) = TIPO_BOOLEAN; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 253 "sintaxis.y"
    { (yyval.entero) = TIPO_STRING; }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 254 "sintaxis.y"
    { (yyval.entero) = TIPO_ENTITY; }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 263 "sintaxis.y"
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

  case 81:

/* Line 1806 of yacc.c  */
#line 274 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 289 "sintaxis.y"
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

  case 94:

/* Line 1806 of yacc.c  */
#line 300 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 306 "sintaxis.y"
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

  case 101:

/* Line 1806 of yacc.c  */
#line 317 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 329 "sintaxis.y"
    { compilador.PonFondoFalso(); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 329 "sintaxis.y"
    { compilador.QuitaFondoFalso(); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 336 "sintaxis.y"
    {
                if(!compilador.InsertaOperando((yyvsp[(1) - (1)].id), 0, GML_ES_VARIABLE)){
                    yyerror("No existe la variable utilizada");
                    YYERROR;
                }
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 342 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_INT, GML_ES_CONSTANTE); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 343 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_FLOAT, GML_ES_CONSTANTE); }
    break;



/* Line 1806 of yacc.c  */
#line 2079 "y.tab.c"
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
#line 363 "sintaxis.y"


void yyerror (char const *s){
    cout << s << endl;
}

