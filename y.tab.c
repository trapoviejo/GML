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
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

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
       0,     0,     3,     4,     5,    15,    16,    25,    26,    27,
      32,    33,    34,    42,    43,    44,    45,    55,    56,    58,
      60,    61,    66,    67,    70,    71,    75,    80,    83,    84,
      86,    88,    90,    92,    94,    96,    99,   101,   103,   107,
     110,   113,   115,   117,   118,   120,   122,   125,   128,   134,
     136,   138,   139,   140,   148,   149,   158,   159,   167,   168,
     172,   173,   174,   179,   181,   184,   185,   186,   191,   192,
     195,   199,   202,   204,   206,   208,   210,   212,   214,   216,
     218,   225,   229,   230,   234,   235,   239,   240,   242,   244,
     246,   248,   250,   252,   254,   256,   257,   261,   262,   266,
     267,   269,   271,   272,   276,   277,   281,   282,   284,   286,
     289,   291,   292,   294,   296,   297,   302,   305,   308,   310,
     312,   314,   316,   318,   320,   322,   324,   326,   328,   332,
     334,   336,   343,   348
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    -1,    10,     3,    55,    49,    57,
      70,    63,    56,    71,    -1,    -1,    11,    99,    48,     3,
      58,    59,    49,    61,    -1,    -1,    -1,    50,     3,    60,
      59,    -1,    -1,    -1,    99,    48,     3,    62,    59,    49,
      61,    -1,    -1,    -1,    -1,    66,     3,    64,    46,    67,
      47,    71,    65,    63,    -1,    -1,    99,    -1,    19,    -1,
      -1,    99,     3,    68,    69,    -1,    -1,    50,    67,    -1,
      -1,    12,   103,    49,    -1,    51,    73,    72,    52,    -1,
      73,    72,    -1,    -1,    74,    -1,    86,    -1,    79,    -1,
      81,    -1,    84,    -1,    97,    -1,    90,    49,    -1,   101,
      -1,   102,    -1,    75,    77,    78,    -1,     3,    76,    -1,
     124,    76,    -1,    29,    -1,    30,    -1,    -1,    36,    -1,
      37,    -1,   103,    49,    -1,   126,    49,    -1,    18,    46,
      80,    47,    49,    -1,   126,    -1,     3,    -1,    -1,    -1,
      14,    82,    46,   103,    47,    83,    71,    -1,    -1,    13,
      85,    71,    14,    46,   103,    47,    49,    -1,    -1,    15,
      46,   103,    47,    87,    71,    88,    -1,    -1,    16,    89,
      71,    -1,    -1,    -1,     3,    46,    91,    92,    -1,    47,
      -1,    93,    47,    -1,    -1,    -1,    94,   103,    95,    96,
      -1,    -1,    50,    93,    -1,    17,   103,    49,    -1,    31,
     100,    -1,   100,    -1,    98,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,     3,    27,
      46,   103,    47,    49,    -1,     3,    28,    49,    -1,    -1,
     108,   104,   105,    -1,    -1,   107,   106,   103,    -1,    -1,
      38,    -1,    39,    -1,    41,    -1,    42,    -1,    45,    -1,
      44,    -1,    40,    -1,    43,    -1,    -1,   113,   109,   110,
      -1,    -1,   112,   111,   108,    -1,    -1,    32,    -1,    33,
      -1,    -1,   118,   114,   115,    -1,    -1,   117,   116,   113,
      -1,    -1,    34,    -1,    35,    -1,   121,   119,    -1,   120,
      -1,    -1,    29,    -1,    30,    -1,    -1,    46,   122,   103,
      47,    -1,    32,   123,    -1,    33,   123,    -1,   123,    -1,
       3,    -1,     5,    -1,     6,    -1,     4,    -1,     8,    -1,
       9,    -1,     7,    -1,   124,    -1,    90,    -1,     3,    48,
     125,    -1,     5,    -1,     3,    -1,    25,    46,   103,    50,
      26,   127,    -1,     4,    50,   103,    47,    -1,     3,    50,
     103,    47,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    51,    43,    60,    59,    68,    71,    70,
      78,    81,    80,    89,    93,   101,    92,   106,   109,   110,
     114,   113,   121,   124,   125,   130,   138,   139,   139,   141,
     141,   141,   141,   141,   141,   142,   142,   142,   144,   153,
     165,   168,   169,   170,   172,   172,   173,   173,   175,   177,
     177,   180,   184,   179,   203,   202,   219,   218,   234,   233,
     244,   248,   247,   263,   271,   284,   287,   284,   308,   309,
     312,   326,   329,   330,   333,   334,   335,   336,   337,   338,
     341,   350,   354,   353,   365,   365,   366,   369,   370,   371,
     372,   373,   374,   375,   376,   380,   379,   391,   391,   392,
     394,   394,   397,   396,   408,   408,   409,   411,   411,   413,
     415,   430,   432,   432,   434,   434,   435,   436,   437,   440,
     447,   448,   449,   450,   451,   452,   453,   454,   457,   459,
     460,   463,   465,   466
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
  "$@2", "variables", "$@3", "listaids", "$@4", "varsotrotipo", "$@5",
  "funcion", "$@6", "$@7", "tipoovoid", "parametros", "$@8",
  "listaparametros", "mapa", "bloque", "e6", "estatuto", "asignacion",
  "porasignar", "porasignar2", "signo", "loasignado", "escritura", "e9",
  "ciclowhile", "$@9", "$@10", "ciclodowhile", "$@11", "condicion", "$@12",
  "condicionelse", "$@13", "llamadafuncion", "$@14", "llamadafuncion2",
  "paramsllamada", "$@15", "$@16", "paramsllamada2", "regreso", "lista",
  "tipo", "tiposimple", "agregar", "remover", "expresion", "$@17",
  "expresion2", "$@18", "operadorexpresion", "exp", "$@19", "exp2", "$@20",
  "operadorexp", "termino", "$@21", "termino2", "$@22", "operadortermino",
  "factor", "factor2", "operadorfactor", "obtenerxy", "$@23", "varcte",
  "elemento", "elemento2", "entidad", "entidad2", 0
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
       0,    53,    55,    56,    54,    58,    57,    57,    60,    59,
      59,    62,    61,    61,    64,    65,    63,    63,    66,    66,
      68,    67,    67,    69,    69,    70,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      75,    76,    76,    76,    77,    77,    78,    78,    79,    80,
      80,    82,    83,    81,    85,    84,    87,    86,    89,    88,
      88,    91,    90,    92,    92,    94,    95,    93,    96,    96,
      97,    98,    99,    99,   100,   100,   100,   100,   100,   100,
     101,   102,   104,   103,   106,   105,   105,   107,   107,   107,
     107,   107,   107,   107,   107,   109,   108,   111,   110,   110,
     112,   112,   114,   113,   116,   115,   115,   117,   117,   118,
     119,   119,   120,   120,   122,   121,   121,   121,   121,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   125,
     125,   126,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     9,     0,     8,     0,     0,     4,
       0,     0,     7,     0,     0,     0,     9,     0,     1,     1,
       0,     4,     0,     2,     0,     3,     4,     2,     0,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     2,
       2,     1,     1,     0,     1,     1,     2,     2,     5,     1,
       1,     0,     0,     7,     0,     8,     0,     7,     0,     3,
       0,     0,     4,     1,     2,     0,     0,     4,     0,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     3,     0,     3,     0,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     3,     0,
       1,     1,     0,     3,     0,     3,     0,     1,     1,     2,
       1,     0,     1,     1,     0,     4,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     6,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     7,     0,     0,    74,
      75,    76,    77,    78,    79,     0,    73,     0,    72,     0,
      17,    71,     0,   119,   122,   120,   121,   125,   123,   124,
       0,     0,   114,   127,     0,    82,    95,   102,   111,   118,
     126,    19,     3,     0,    18,     5,    61,     0,   116,   117,
       0,    25,    86,    99,   106,   112,   113,   109,   110,     0,
      14,    10,    65,   130,   129,   128,     0,    87,    88,    93,
      89,    90,    94,    92,    91,    83,    84,   100,   101,    96,
      97,   107,   108,   103,   104,     0,     4,     0,     0,     0,
      63,    62,     0,     0,   115,     0,     0,     0,    43,    54,
      51,     0,     0,     0,    28,    29,     0,    31,    32,    33,
      30,     0,    34,    36,    37,    43,    22,     8,    13,    64,
      66,    85,    98,   105,     0,     0,    41,    42,    39,     0,
       0,     0,     0,     0,     0,    28,    44,    45,     0,    35,
      40,     0,     0,    10,     6,     0,    68,     0,    81,     0,
       0,     0,    70,    50,     0,     0,    49,    26,    27,    38,
       0,     0,     0,    20,     9,     0,    65,    67,     0,     0,
       0,    56,     0,     0,    46,    47,    15,    24,    11,    69,
       0,     0,    52,     0,     0,    48,    17,    22,    21,    10,
      80,     0,     0,    60,     0,    16,    23,     0,     0,    53,
      58,    57,     0,    13,    55,     0,     0,     0,   131,    12,
      59,     0,     0,     0,     0,   133,   132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    59,     8,    61,    89,   143,   144,   189,
      42,    87,   186,    43,   141,   177,   188,    20,    86,   134,
     135,   105,   106,   128,   138,   159,   107,   155,   108,   130,
     192,   109,   129,   110,   183,   201,   205,    33,    62,    91,
      92,    93,   146,   167,   112,    16,    44,    18,   113,   114,
      34,    52,    75,    95,    76,    35,    53,    79,    96,    80,
      36,    54,    83,    97,    84,    37,    57,    58,    38,    50,
      39,    40,    65,   156,   208
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -141
static const yytype_int16 yypact[] =
{
       8,    24,    39,  -141,  -141,   -17,    34,    83,    31,  -141,
    -141,  -141,  -141,  -141,  -141,   104,  -141,    16,  -141,    54,
      71,  -141,    65,   -32,  -141,  -141,  -141,  -141,  -141,  -141,
     112,   112,  -141,  -141,    50,  -141,  -141,  -141,    -4,  -141,
    -141,  -141,  -141,    82,  -141,  -141,  -141,    12,  -141,  -141,
      54,  -141,    32,    -2,    -1,  -141,  -141,  -141,  -141,    37,
    -141,    47,    63,  -141,  -141,  -141,    75,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,    66,  -141,    67,   109,    81,
    -141,  -141,    84,    54,  -141,    54,    54,    54,    -8,  -141,
    -141,    87,    54,    88,    66,  -141,     5,  -141,  -141,  -141,
    -141,    86,  -141,  -141,  -141,    18,    83,  -141,    83,  -141,
    -141,  -141,  -141,  -141,    90,    89,  -141,  -141,  -141,    37,
      91,    54,    92,     3,    93,    66,  -141,  -141,     4,  -141,
    -141,    95,   136,    47,  -141,    96,    97,    54,  -141,   126,
      54,    99,  -141,  -141,   102,   103,  -141,  -141,  -141,  -141,
      94,   100,    37,  -141,  -141,   148,  -141,  -141,   105,   107,
     108,  -141,    54,   110,  -141,  -141,  -141,   106,  -141,  -141,
     111,    54,  -141,    37,   114,  -141,    71,    83,  -141,    47,
    -141,   118,    37,   138,   131,  -141,  -141,   117,   119,  -141,
    -141,  -141,    48,    83,  -141,    37,   120,   121,  -141,  -141,
    -141,    54,    54,   122,   125,  -141,  -141
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,  -141,  -141,  -140,  -141,   -45,  -141,
     -25,  -141,  -141,  -141,   -20,  -141,  -141,  -141,  -127,    38,
      98,  -141,  -141,    59,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,   -81,  -141,  -141,
       9,  -141,  -141,  -141,  -141,  -141,    -7,   161,  -141,  -141,
     -49,  -141,  -141,  -141,  -141,    85,  -141,  -141,  -141,  -141,
      80,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
      36,   -80,  -141,    40,  -141
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,    66,   149,   164,   111,   115,   153,    23,    24,    25,
      26,    27,    28,    29,    46,    63,    47,    64,     1,   124,
     125,   126,   127,   111,   115,    55,    56,     3,   154,   154,
      77,    78,     6,    81,    82,   176,    30,    31,    46,     4,
      47,   136,   137,    19,   120,     7,   121,   126,   127,   197,
      32,   206,   207,   132,   111,   115,   193,    23,    24,    25,
      26,    27,    28,    29,    22,   199,    48,    49,    45,    98,
      67,    68,    69,    70,    71,    72,    73,    74,   210,    99,
     100,   101,   151,   102,   103,    60,    30,    31,    85,   160,
      41,     9,    10,    11,    12,    13,    14,    88,   168,    51,
      32,   170,    15,     9,    10,    11,    12,    13,    14,   142,
      90,   145,   117,   116,    15,    23,    24,    25,    26,    27,
      28,    29,    94,   184,     9,    10,    11,    12,    13,    14,
     118,   119,   191,   131,   133,   139,   147,   150,   148,   163,
     169,   152,   162,   174,   165,   157,   171,   166,   172,   175,
     173,   178,   180,   181,   200,   182,   187,   202,   209,   185,
     190,   195,   213,   214,   194,   198,   203,   196,   204,   215,
     211,   212,   216,   158,   140,   179,    21,   123,   161,     0,
     142,   122,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-141))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    50,   129,   143,    85,    85,     3,     3,     4,     5,
       6,     7,     8,     9,    46,     3,    48,     5,    10,    27,
      28,    29,    30,   104,   104,    29,    30,     3,    25,    25,
      32,    33,    49,    34,    35,   162,    32,    33,    46,     0,
      48,    36,    37,    12,    93,    11,    95,    29,    30,   189,
      46,     3,     4,   102,   135,   135,   183,     3,     4,     5,
       6,     7,     8,     9,    48,   192,    30,    31,     3,     3,
      38,    39,    40,    41,    42,    43,    44,    45,   205,    13,
      14,    15,   131,    17,    18,     3,    32,    33,    51,   138,
      19,    20,    21,    22,    23,    24,    25,    50,   147,    49,
      46,   150,    31,    20,    21,    22,    23,    24,    25,   116,
      47,   118,     3,    46,    31,     3,     4,     5,     6,     7,
       8,     9,    47,   172,    20,    21,    22,    23,    24,    25,
      49,    47,   181,    46,    46,    49,    46,    46,    49,     3,
      14,    49,    47,    49,    48,    52,    47,    50,    46,    49,
      47,     3,    47,    46,    16,    47,    50,    26,   203,    49,
      49,   186,   211,   212,    50,    47,    49,   187,    49,    47,
      50,    50,    47,   135,   115,   166,    15,    97,   138,    -1,
     187,    96,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    54,     3,     0,    55,    49,    11,    57,    20,
      21,    22,    23,    24,    25,    31,    98,    99,   100,    12,
      70,   100,    48,     3,     4,     5,     6,     7,     8,     9,
      32,    33,    46,    90,   103,   108,   113,   118,   121,   123,
     124,    19,    63,    66,    99,     3,    46,    48,   123,   123,
     122,    49,   104,   109,   114,    29,    30,   119,   120,    56,
       3,    58,    91,     3,     5,   125,   103,    38,    39,    40,
      41,    42,    43,    44,    45,   105,   107,    32,    33,   110,
     112,    34,    35,   115,   117,    51,    71,    64,    50,    59,
      47,    92,    93,    94,    47,   106,   111,   116,     3,    13,
      14,    15,    17,    18,    73,    74,    75,    79,    81,    84,
      86,    90,    97,   101,   102,   124,    46,     3,    49,    47,
     103,   103,   108,   113,    27,    28,    29,    30,    76,    85,
      82,    46,   103,    46,    72,    73,    36,    37,    77,    49,
      76,    67,    99,    60,    61,    99,    95,    46,    49,    71,
      46,   103,    49,     3,    25,    80,   126,    52,    72,    78,
     103,   126,    47,     3,    59,    48,    50,    96,   103,    14,
     103,    47,    46,    47,    49,    49,    71,    68,     3,    93,
      47,    46,    47,    87,   103,    49,    65,    50,    69,    62,
      49,   103,    83,    71,    50,    63,    67,    59,    47,    71,
      16,    88,    26,    49,    49,    89,     3,     4,   127,    61,
      71,    50,    50,   103,   103,    47,    47
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
                Cuadruplo quad = Cuadruplo(OP_GOTO, GML_SALTO_PENDIENTE);
                compilador.vectorCuadruplos.push_back(quad);
            }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 51 "sintaxis.y"
    {
                //El main empieza abajo, actualiza el goto inicial
                compilador.vectorCuadruplos[0].resultado = compilador.vectorCuadruplos.size();
                compilador.funcionActual = compilador.nomPrograma;
            }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 60 "sintaxis.y"
    {
                    compilador.tipoActual = (yyvsp[(2) - (4)].entero);
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(4) - (4)].id), (yyvsp[(2) - (4)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 71 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), compilador.tipoActual)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 81 "sintaxis.y"
    {
                    compilador.tipoActual = (yyvsp[(1) - (3)].entero);
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(3) - (3)].id), (yyvsp[(1) - (3)].entero))){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 93 "sintaxis.y"
    {
                    if(!compilador.InsertaFunc((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)].entero))){
                        //No inserto la funcion porque ya existia, asi que hay error
                        yyerror("Funcion declarada dos veces");
                        YYERROR;
                    }
                }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 101 "sintaxis.y"
    {
                    Cuadruplo quad = Cuadruplo(OP_ENDPROC, -1);
                    compilador.vectorCuadruplos.push_back(quad);
                }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 109 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 110 "sintaxis.y"
    { (yyval.entero) = TIPO_VOID; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 114 "sintaxis.y"
    {
                    if(!compilador.InsertaVarEnFuncActual((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)].entero), true)){
                        yyerror("Variable declarada dos veces.");
                        YYERROR;
                    }
                }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 131 "sintaxis.y"
    {
                Variable operando = compilador.pilaOperandos.top();
                compilador.pilaOperandos.pop();
                Cuadruplo quad = Cuadruplo(OP_MAPSIZE, operando.direccion, -1, -1);
                compilador.vectorCuadruplos.push_back(quad);
            }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 145 "sintaxis.y"
    {
                    if(!compilador.GeneraCuadruploAsignacion()){
                        yyerror("No concuerdan los tipos para asignacion");
                        YYERROR;
                    }
                }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 154 "sintaxis.y"
    {
                    //$$ = $1;
                    if(!compilador.ExisteVar((yyvsp[(1) - (2)].id))){
                        yyerror("No existe la variable utilizada");
                        YYERROR;
                    }else{
                        Variable var = compilador.GetVar((yyvsp[(1) - (2)].id));
                        compilador.pilaOperandos.push(var);
                    }
                    
                }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 180 "sintaxis.y"
    {
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 184 "sintaxis.y"
    {
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de while debe ser booleano");
                        YYERROR;
                    }
                }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 191 "sintaxis.y"
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

  case 54:

/* Line 1806 of yacc.c  */
#line 203 "sintaxis.y"
    {
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size());
                }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 207 "sintaxis.y"
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

  case 56:

/* Line 1806 of yacc.c  */
#line 219 "sintaxis.y"
    {
                    if(!compilador.GeneraCuadruploGotof()){
                        yyerror("El argumento de if debe ser booleano");
                        YYERROR;
                    }
                }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 226 "sintaxis.y"
    {
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 234 "sintaxis.y"
    {
                    Cuadruplo quad = Cuadruplo(OP_GOTO, GML_SALTO_PENDIENTE);
                    compilador.vectorCuadruplos.push_back(quad);
                    int pendiente = compilador.pilaSaltos.top();
                    compilador.pilaSaltos.pop();
                    compilador.vectorCuadruplos[pendiente].resultado = compilador.vectorCuadruplos.size();
                    compilador.pilaSaltos.push(compilador.vectorCuadruplos.size()-1);
                }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 248 "sintaxis.y"
    {
                        //printf("Entrando a llamadafuncion\n");
                        if(!compilador.ExisteFunc((yyvsp[(1) - (2)].id)))
                        {
                           yyerror("Llamada a funcion no declarada.");
                           YYERROR;
                        }else{
                            compilador.llamadaActual = (yyvsp[(1) - (2)].id);
                            compilador.paramActual = 0;
                            Cuadruplo quad = Cuadruplo(OP_ERA, 1234, -1, -1);
                            compilador.vectorCuadruplos.push_back(quad);
                        }
                      }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 264 "sintaxis.y"
    {
                        int tipoResultante = compilador.tablaFuncs[compilador.llamadaActual].tipo;
                        compilador.InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
                        Variable resultado = compilador.pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
                        Cuadruplo quad = Cuadruplo(OP_GOSUB, compilador.tablaFuncs[compilador.llamadaActual].direccion, -1, resultado.direccion);
                        compilador.vectorCuadruplos.push_back(quad);
                    }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 272 "sintaxis.y"
    {
                        if(compilador.paramActual != compilador.tablaFuncs[compilador.llamadaActual].params.size()){
                           yyerror("Cantidad de parametros en llamada es menor al esperado");
                           YYERROR;
                        }
                        int tipoResultante = compilador.tablaFuncs[compilador.llamadaActual].tipo;
                        compilador.InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
                        Variable resultado = compilador.pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
                        Cuadruplo quad = Cuadruplo(OP_GOSUB, compilador.tablaFuncs[compilador.llamadaActual].direccion, -1, resultado.direccion);
                        compilador.vectorCuadruplos.push_back(quad);
                    }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 284 "sintaxis.y"
    { compilador.PonFondoFalso(); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 287 "sintaxis.y"
    {
                        compilador.QuitaFondoFalso();                        
                        Variable operando = compilador.pilaOperandos.top();
                        compilador.pilaOperandos.pop();
                        //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
                        //printf("operando.tipo = %d, llamadaActual.params[%d].tipo = %d\n", operando.tipo, compilador.paramActual, compilador.tablaFuncs[compilador.llamadaActual].params.at(compilador.paramActual));
                        
                        if(compilador.paramActual >= compilador.tablaFuncs[compilador.llamadaActual].params.size()){
                           yyerror("Cantidad de parametros en llamada es mayor al esperado");
                           YYERROR;
                        }else if(operando.tipo != compilador.tablaFuncs[compilador.llamadaActual].params.at(compilador.paramActual)){
                           yyerror("Tipo de parametro no concuerda");
                           YYERROR;           
                        }else{
                            Cuadruplo quad = Cuadruplo(OP_PARAM, operando.direccion, -1, compilador.paramActual);
                            compilador.vectorCuadruplos.push_back(quad);
                            compilador.paramActual++;
                        }
                    }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 313 "sintaxis.y"
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

  case 71:

/* Line 1806 of yacc.c  */
#line 326 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(2) - (2)].entero); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 329 "sintaxis.y"
    { (yyval.entero) = (yyvsp[(1) - (1)].entero); compilador.subtipoListaActual = TIPO_VOID; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 330 "sintaxis.y"
    { (yyval.entero) = TIPO_LIST; compilador.subtipoListaActual = (yyvsp[(1) - (1)].entero); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 333 "sintaxis.y"
    { (yyval.entero) = TIPO_INT; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 334 "sintaxis.y"
    { (yyval.entero) = TIPO_FLOAT; }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 335 "sintaxis.y"
    { (yyval.entero) = TIPO_POS; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 336 "sintaxis.y"
    { (yyval.entero) = TIPO_BOOLEAN; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 337 "sintaxis.y"
    { (yyval.entero) = TIPO_STRING; }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 338 "sintaxis.y"
    { (yyval.entero) = TIPO_ENTITY; }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 342 "sintaxis.y"
    {
                    bool sePudo = compilador.AccionAdd((yyvsp[(1) - (6)].id));
                    if(!sePudo){
                        yyerror("Error en semantica de agregar a lista");
                        YYERROR;
                    }
              }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 354 "sintaxis.y"
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

  case 84:

/* Line 1806 of yacc.c  */
#line 365 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 380 "sintaxis.y"
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

  case 97:

/* Line 1806 of yacc.c  */
#line 391 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 397 "sintaxis.y"
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

  case 104:

/* Line 1806 of yacc.c  */
#line 408 "sintaxis.y"
    { compilador.InsertaOperador((yyvsp[(1) - (1)].op)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 416 "sintaxis.y"
    {
                Variable op = compilador.pilaOperandos.top();
                compilador.pilaOperandos.pop();
                int tipo = compilador.TipoResultante((yyvsp[(1) - (1)].op), op.tipo, op.tipo);
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

  case 114:

/* Line 1806 of yacc.c  */
#line 434 "sintaxis.y"
    { compilador.PonFondoFalso(); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 434 "sintaxis.y"
    { compilador.QuitaFondoFalso(); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 441 "sintaxis.y"
    {
                if(!compilador.InsertaOperando((yyvsp[(1) - (1)].id), 0, GML_ES_VARIABLE)){
                    yyerror("No existe la variable utilizada");
                    YYERROR;
                }
            }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 447 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_INT, GML_ES_CONSTANTE); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 448 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_FLOAT, GML_ES_CONSTANTE); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 452 "sintaxis.y"
    { compilador.InsertaOperando((yyvsp[(1) - (1)].id), TIPO_POS, GML_ES_CONSTANTE); }
    break;



/* Line 1806 of yacc.c  */
#line 2257 "y.tab.c"
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
#line 469 "sintaxis.y"


void yyerror (char const *s){
    cout << s << endl;
}

