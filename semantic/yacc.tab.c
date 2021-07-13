/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "yacc.y"

int yylex();
void yyerror(char* s);			

	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
	#include<string.h>
    #include "../symbolTable/symboltable.h"

	int yylineno;
	
	
	


    

int a;
char val[200];

int last=0;

char datatp[200];
    
	



/* Line 371 of yacc.c  */
#line 98 "yacc.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.tab.h".  */
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     REAL = 259,
     PLUS = 260,
     MINUS = 261,
     MULTIPLY = 262,
     DEVIDE = 263,
     MODULES = 264,
     POWER = 265,
     AND = 266,
     OR = 267,
     XOR = 268,
     NOT = 269,
     EQUEL = 270,
     NOT_EQUEL = 271,
     LESS = 272,
     LESS_OR_EQUEL = 273,
     GRETER = 274,
     GRETER_OR_EQUEL = 275,
     PLUS_AND_EQUEL = 276,
     MINUS_AND_EQUEL = 277,
     MULTIPLY_AND_EQUEL = 278,
     DEVIDE_AND_EQUEL = 279,
     MODULES_AND_EQUEL = 280,
     POWER_AND_EQUEL = 281,
     AND_AND_EQUEL = 282,
     OR_AND_EQUEL = 283,
     XOR_AND_EQUEL = 284,
     LOGICAL_AND = 285,
     LOGICAL_OR = 286,
     DOLER = 287,
     IF = 288,
     ELIF = 289,
     ELSE = 290,
     LOOP = 291,
     IN = 292,
     INT_KEY = 293,
     REAL_KEY = 294,
     CHAR_KEY = 295,
     VOID = 296,
     STRING_KEY = 297,
     RETURN = 298,
     IDENTIFIER = 299,
     LEFT_PARENTHESES = 300,
     RIGHT_PARENTHESES = 301,
     LEFT_CURLY_BRACKET = 302,
     RIGHT_CURLY_BRACKET = 303,
     LEFT_SQUARE_BRACKET = 304,
     RIGHT_SQUARE_BRACKET = 305,
     SAMI_COLON = 306,
     COMMA = 307,
     STRING = 308,
     CHAR = 309,
     PRINT = 310
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 30 "yacc.y"
int int_val;float real_val;char char_val;  char* id;

struct temp{
	int int_val;
	float real_val;
	char char_val;
	char string_val[200];
} tmp;





/* Line 387 of yacc.c  */
#line 210 "yacc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 238 "yacc.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  127

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    14,    16,    18,    21,
      23,    32,    34,    38,    40,    45,    48,    49,    51,    55,
      57,    59,    62,    64,    67,    69,    72,    74,    77,    79,
      83,    85,    90,    94,    98,   100,   106,   110,   112,   114,
     116,   118,   120,   125,   130,   135,   140,   145,   150,   155,
     160,   165,   167,   169,   171,   175,   179,   183,   187,   191,
     193,   197,   201,   204,   207,   209,   213,   217,   221,   223,
     227,   229,   231,   233,   235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    63,    57,    -1,    58,    57,    -1,    74,
      57,    -1,    63,    -1,    58,    -1,    74,    -1,    59,    58,
      -1,    59,    -1,    45,    61,    46,    60,    45,    62,    46,
      64,    -1,    44,    -1,    73,    52,    61,    -1,    73,    -1,
      73,    44,    52,    62,    -1,    73,    44,    -1,    -1,    70,
      -1,    65,    67,    66,    -1,    47,    -1,    48,    -1,    70,
      67,    -1,    70,    -1,    74,    67,    -1,    74,    -1,    68,
      67,    -1,    68,    -1,    64,    67,    -1,    64,    -1,    69,
      77,    51,    -1,    55,    -1,    73,    71,    51,    70,    -1,
      73,    71,    51,    -1,    72,    52,    71,    -1,    72,    -1,
      72,    15,    77,    52,    71,    -1,    72,    15,    77,    -1,
      44,    -1,    38,    -1,    39,    -1,    42,    -1,    40,    -1,
      76,    15,    77,    51,    -1,    75,    21,    77,    51,    -1,
      75,    22,    77,    51,    -1,    75,    23,    77,    51,    -1,
      75,    24,    77,    51,    -1,    75,    25,    77,    51,    -1,
      75,    27,    77,    51,    -1,    75,    28,    77,    51,    -1,
      75,    29,    77,    51,    -1,    76,    -1,    44,    -1,    78,
      -1,    77,    11,    77,    -1,    77,    13,    77,    -1,    77,
      12,    77,    -1,    77,    30,    77,    -1,    77,    31,    77,
      -1,    79,    -1,    78,     5,    79,    -1,    78,     6,    79,
      -1,     6,    79,    -1,     5,    79,    -1,    80,    -1,    79,
       7,    80,    -1,    79,     8,    80,    -1,    79,     9,    80,
      -1,    81,    -1,    45,    77,    46,    -1,     3,    -1,     4,
      -1,    54,    -1,    53,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   112,   113,   114,   115,   119,   121,
     125,   129,   144,   145,   148,   149,   150,   155,   160,   163,
     166,   171,   172,   173,   174,   175,   176,   177,   178,   181,
     201,   206,   208,   212,   213,   214,   235,   259,   278,   279,
     280,   281,   287,   320,   347,   374,   397,   420,   439,   458,
     477,   498,   531,   540,   541,   556,   571,   586,   604,   623,
     624,   645,   663,   677,   694,   695,   709,   723,   735,   736,
     740,   759,   774,   793,   814
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "PLUS", "MINUS",
  "MULTIPLY", "DEVIDE", "MODULES", "POWER", "AND", "OR", "XOR", "NOT",
  "EQUEL", "NOT_EQUEL", "LESS", "LESS_OR_EQUEL", "GRETER",
  "GRETER_OR_EQUEL", "PLUS_AND_EQUEL", "MINUS_AND_EQUEL",
  "MULTIPLY_AND_EQUEL", "DEVIDE_AND_EQUEL", "MODULES_AND_EQUEL",
  "POWER_AND_EQUEL", "AND_AND_EQUEL", "OR_AND_EQUEL", "XOR_AND_EQUEL",
  "LOGICAL_AND", "LOGICAL_OR", "DOLER", "IF", "ELIF", "ELSE", "LOOP", "IN",
  "INT_KEY", "REAL_KEY", "CHAR_KEY", "VOID", "STRING_KEY", "RETURN",
  "IDENTIFIER", "LEFT_PARENTHESES", "RIGHT_PARENTHESES",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "SAMI_COLON", "COMMA", "STRING", "CHAR", "PRINT",
  "$accept", "program", "function", "function_def", "fun_id",
  "return_list", "param_list", "global_var", "blocks", "start_black",
  "end_block", "block", "print", "printst", "var_declareation",
  "variables", "var_id", "data_type", "assignment", "eqassign_id",
  "assign_id", "exp", "exp1", "exp2", "exp3", "term", YY_NULL
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
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    57,    57,    58,    58,
      59,    60,    61,    61,    62,    62,    62,    63,    64,    65,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      69,    70,    70,    71,    71,    71,    71,    72,    73,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    75,    76,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    80,    80,
      81,    81,    81,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     1,     1,     2,     1,
       8,     1,     3,     1,     4,     2,     0,     1,     3,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     4,     3,     3,     1,     5,     3,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     2,     2,     1,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    38,    39,    41,    40,    52,     0,     0,     6,     9,
       5,    17,     0,     7,     0,    51,     0,    13,     1,     3,
       8,     2,    37,     0,    34,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
      70,    71,     0,     0,    74,     0,    73,    72,     0,    53,
      59,    64,    68,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    31,    36,    33,    63,    62,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,    42,    16,
       0,    69,    54,    56,    55,    57,    58,    60,    61,    65,
      66,    67,     0,     0,    35,     0,    15,    19,    10,     0,
      16,    30,    28,     0,    26,     0,    22,    24,    14,    27,
      20,    18,    25,     0,    21,    23,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    62,    16,   102,    10,   112,   109,
     121,   113,   114,   115,   116,    23,    24,    12,   117,    14,
      15,    48,    49,    50,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -29
static const yytype_int16 yypact[] =
{
      87,   -29,   -29,   -29,   -29,   -29,   112,    17,    87,    -9,
      87,   -29,    -3,    87,   156,    59,    53,    25,   -29,   -29,
     -29,   -29,   -29,    52,    34,   -29,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    62,   112,   112,    10,    -3,
     -29,   -29,     6,     6,   -29,    10,   -29,   -29,    22,    76,
     162,   -29,   -29,    45,    54,    57,    67,    79,    82,    89,
     104,   -29,    66,   -29,   -29,     9,   -29,   162,   162,   126,
      10,    10,    10,    10,    10,   -29,     6,     6,     6,     6,
       6,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   112,
      -3,   -29,    12,    12,    12,    12,    12,   162,   162,   -29,
     -29,   -29,    61,    70,   -29,    74,   101,   -29,   -29,   121,
     112,   -29,   121,    80,   121,    10,   121,   121,   -29,   -29,
     -29,   -29,   -29,   111,   -29,   -29,   -29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -29,    19,   149,   -29,   -29,   128,    56,   -29,    69,   -29,
     -29,    31,   -29,   -29,   136,   -28,   -29,    -6,    18,   -29,
     -29,   -26,   -29,    -5,   108,   -29
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,    53,    54,    55,    56,    57,    58,    59,    60,    40,
      41,    66,    65,    40,    41,    42,    43,    18,    13,    69,
      70,    71,    72,    70,    71,    72,    13,    19,    13,    21,
      17,    13,    25,    70,    71,    72,     6,    67,    68,    73,
      74,    22,    73,    74,    92,    93,    94,    95,    96,    38,
      44,    45,    73,    74,    44,    45,    70,    71,    72,    46,
      47,    90,   104,    46,    47,    70,    71,    72,    70,    71,
      72,    97,    98,    75,    34,    73,    74,    36,    70,    71,
      72,    76,    77,   103,    73,    74,    39,    73,    74,   123,
      70,    71,    72,    70,    71,    72,    81,    73,    74,    35,
      70,    71,    72,    37,   103,    82,    61,   105,    83,    73,
      74,    89,    73,    74,   106,    70,    71,    72,    84,    73,
      74,   107,    70,    71,    72,     1,     2,     3,   120,     4,
      85,     5,     6,    86,    73,    74,    11,    70,    71,    72,
      87,    73,    74,   119,    11,   122,    11,   124,   125,    11,
       1,     2,     3,   110,     4,    88,    73,    74,    20,     1,
       2,     3,   126,     4,    63,     5,   118,     0,   107,    78,
      79,    80,    91,    64,   108,     0,   111,    26,    27,    28,
      29,    30,     0,    31,    32,    33,    99,   100,   101
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-29)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       6,    27,    28,    29,    30,    31,    32,    33,    34,     3,
       4,    39,    38,     3,     4,     5,     6,     0,     0,    45,
      11,    12,    13,    11,    12,    13,     8,     8,    10,    10,
      36,    13,    13,    11,    12,    13,    45,    42,    43,    30,
      31,    44,    30,    31,    70,    71,    72,    73,    74,    15,
      44,    45,    30,    31,    44,    45,    11,    12,    13,    53,
      54,    52,    90,    53,    54,    11,    12,    13,    11,    12,
      13,    76,    77,    51,    15,    30,    31,    52,    11,    12,
      13,     5,     6,    89,    30,    31,    52,    30,    31,   115,
      11,    12,    13,    11,    12,    13,    51,    30,    31,    46,
      11,    12,    13,    51,   110,    51,    44,    46,    51,    30,
      31,    45,    30,    31,    44,    11,    12,    13,    51,    30,
      31,    47,    11,    12,    13,    38,    39,    40,    48,    42,
      51,    44,    45,    51,    30,    31,     0,    11,    12,    13,
      51,    30,    31,   112,     8,   114,    10,   116,   117,    13,
      38,    39,    40,    52,    42,    51,    30,    31,     9,    38,
      39,    40,    51,    42,    36,    44,   110,    -1,    47,     7,
       8,     9,    46,    37,   105,    -1,    55,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    78,    79,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    40,    42,    44,    45,    57,    58,    59,
      63,    70,    73,    74,    75,    76,    61,    73,     0,    57,
      58,    57,    44,    71,    72,    57,    21,    22,    23,    24,
      25,    27,    28,    29,    15,    46,    52,    51,    15,    52,
       3,     4,     5,     6,    44,    45,    53,    54,    77,    78,
      79,    80,    81,    77,    77,    77,    77,    77,    77,    77,
      77,    44,    60,    61,    70,    77,    71,    79,    79,    77,
      11,    12,    13,    30,    31,    51,     5,     6,     7,     8,
       9,    51,    51,    51,    51,    51,    51,    51,    51,    45,
      52,    46,    77,    77,    77,    77,    77,    79,    79,    80,
      80,    80,    62,    73,    71,    46,    44,    47,    64,    65,
      52,    55,    64,    67,    68,    69,    70,    74,    62,    67,
      48,    66,    67,    77,    67,    67,    51
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 110 "yacc.y"
    {;}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 111 "yacc.y"
    {;}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 112 "yacc.y"
    {;}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 113 "yacc.y"
    {;}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 114 "yacc.y"
    {;}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 115 "yacc.y"
    {;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 119 "yacc.y"
    {//printf("function\n");
			}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 121 "yacc.y"
    {//printf("function\n");
			}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 125 "yacc.y"
    {;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 129 "yacc.y"
    {

	int ax=table_insert_var(table,size,yylineno,(yyvsp[(1) - (1)].id),"function");
	
	
					if(ax==-1)
					{
						printf("%s name  is already used\n",(yyvsp[(1) - (1)].id));
						
					}
					

}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 144 "yacc.y"
    {;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 145 "yacc.y"
    {;}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 148 "yacc.y"
    {;}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 149 "yacc.y"
    {;}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 155 "yacc.y"
    {;}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 160 "yacc.y"
    {;}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 163 "yacc.y"
    {push();}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 166 "yacc.y"
    {end_scop(yylineno);}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 171 "yacc.y"
    {;}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 172 "yacc.y"
    {;}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 173 "yacc.y"
    {;}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 174 "yacc.y"
    {;}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 175 "yacc.y"
    {;}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 177 "yacc.y"
    {;}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 178 "yacc.y"
    {;}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 181 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			printf("printing %d\n",(yyvsp[(2) - (3)].tmp).int_val);
		}
		else if(stringcmp(datatp,"real")==1)
		{
			printf("printing %f\n",(yyvsp[(2) - (3)].tmp).real_val);
		}
		else if(stringcmp(datatp,"char")==1)
		{
			printf("printing %c\n",(yyvsp[(2) - (3)].tmp).char_val);
		}
		else
		{
			printf("printing %s\n",(yyvsp[(2) - (3)].tmp).string_val);
		}
}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 201 "yacc.y"
    {strcpy(datatp,"read");}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 206 "yacc.y"
    {//printf("var_declareation\n");
					}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 208 "yacc.y"
    {//printf("var_declareation\n");
					}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 212 "yacc.y"
    {;}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 213 "yacc.y"
    {;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 214 "yacc.y"
    {
char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(3) - (5)].tmp).int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string((yyvsp[(3) - (5)].tmp).real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=(yyvsp[(3) - (5)].tmp).char_val;
}
else
{
	strcpy(p,(yyvsp[(3) - (5)].tmp).string_val);
}
table_insert_value(table,size,val,p);
}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 235 "yacc.y"
    {
char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(3) - (3)].tmp).int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string((yyvsp[(3) - (3)].tmp).real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=(yyvsp[(3) - (3)].tmp).char_val;
}
else
{
	strcpy(p,(yyvsp[(3) - (3)].tmp).string_val);
}
table_insert_value(table,size,val,p);
}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 259 "yacc.y"
    {
strcpy(val,(yyvsp[(1) - (1)].id));
int ax=table_insert_var(table,size,yylineno,(yyvsp[(1) - (1)].id),datatp);
	
	
					if(ax==-1)
					{
						printf("lineNo-%d\tvariable %s is already created\n",yylineno,(yyvsp[(1) - (1)].id));
						
					}
					else
					{
						top_increment();
						name_push((yyvsp[(1) - (1)].id));
					}
}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 278 "yacc.y"
    {strcpy(datatp,(yyvsp[(1) - (1)].id));}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 279 "yacc.y"
    {strcpy(datatp,(yyvsp[(1) - (1)].id));}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 280 "yacc.y"
    {strcpy(datatp,(yyvsp[(1) - (1)].id));}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 281 "yacc.y"
    {strcpy(datatp,(yyvsp[(1) - (1)].id));}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 287 "yacc.y"
    { 

 

char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(3) - (4)].tmp).int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string((yyvsp[(3) - (4)].tmp).real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=(yyvsp[(3) - (4)].tmp).char_val;
}
else
{
	strcpy(p,(yyvsp[(3) - (4)].tmp).string_val);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}



}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 320 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val+(yyvsp[(3) - (4)].tmp).int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string((yyvsp[(1) - (4)].tmp).real_val+(yyvsp[(3) - (4)].tmp).real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=((yyvsp[(1) - (4)].tmp).char_val+(yyvsp[(3) - (4)].tmp).char_val);
}
else
{
	strcpy(p,strcat((yyvsp[(1) - (4)].tmp).string_val,(yyvsp[(3) - (4)].tmp).string_val));
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 347 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val-(yyvsp[(3) - (4)].tmp).int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string((yyvsp[(1) - (4)].tmp).real_val-(yyvsp[(3) - (4)].tmp).real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=((yyvsp[(1) - (4)].tmp).char_val-(yyvsp[(3) - (4)].tmp).char_val);
}
else
{
	printf("minus operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 374 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val*(yyvsp[(3) - (4)].tmp).int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string((yyvsp[(1) - (4)].tmp).real_val*(yyvsp[(3) - (4)].tmp).real_val,p);
}
else
{
	printf("multiply operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 397 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val/(yyvsp[(3) - (4)].tmp).int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string((yyvsp[(1) - (4)].tmp).real_val/(yyvsp[(3) - (4)].tmp).real_val,p);
}
else
{
	printf("devide operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 420 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val%(yyvsp[(3) - (4)].tmp).int_val,p);
}
else
{
	printf("modules operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 439 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val&(yyvsp[(3) - (4)].tmp).int_val,p);
}
else
{
	printf("bitwise and operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 458 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val|(yyvsp[(3) - (4)].tmp).int_val,p);
}
else
{
	printf("bitwise or operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 477 "yacc.y"
    {
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string((yyvsp[(1) - (4)].tmp).int_val^(yyvsp[(3) - (4)].tmp).int_val,p);
}
else
{
	printf("bitwise xor operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 498 "yacc.y"
    {
	char x[200];
					

						if(read_table(table,size,val,x)==-1)
						{
							printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
							//exit(0);
						}
						else
						{
							if(stringcmp(datatp,"int")==1)
							{
								(yyval.tmp).int_val=string_to_int(x);
							}
							else if(stringcmp(datatp,"real")==1)
							{
								(yyval.tmp).real_val=string_to_float(x);
							}
							else if(stringcmp(datatp,"char")==1)
							{
								(yyval.tmp).char_val=x[0];
							}
							else
							{
								strcpy((yyval.tmp).string_val,x);
							}
						}
						
					
}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 531 "yacc.y"
    {
	strcpy(val,(yyvsp[(1) - (1)].id));
	if(read_var_type(table,size,(yyvsp[(1) - (1)].id),datatp)==-1)
	{
		//printf("lineNo-%d\t%s variable is not created\n",yylineno,$1);
	}
	
	}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 540 "yacc.y"
    {;}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 541 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val&(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			(yyval.tmp).char_val = (yyvsp[(1) - (3)].tmp).char_val&(yyvsp[(3) - (3)].tmp).char_val;
		}
		else
		{
			printf("bitwise and operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 556 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val^(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			(yyval.tmp).char_val = (yyvsp[(1) - (3)].tmp).char_val^(yyvsp[(3) - (3)].tmp).char_val;
		}
		else
		{
			printf("bitwise xor operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 571 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val|(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			(yyval.tmp).char_val = (yyvsp[(1) - (3)].tmp).char_val|(yyvsp[(3) - (3)].tmp).char_val;
		}
		else
		{
			printf("bitwise or operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 586 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val&&(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = (yyvsp[(1) - (3)].tmp).real_val&&(yyvsp[(3) - (3)].tmp).real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
			(yyval.tmp).char_val = (yyvsp[(1) - (3)].tmp).char_val&&(yyvsp[(3) - (3)].tmp).char_val;
		}
		else
		{
			printf("logical and operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 604 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val||(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = (yyvsp[(1) - (3)].tmp).real_val||(yyvsp[(3) - (3)].tmp).real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
			(yyval.tmp).char_val = (yyvsp[(1) - (3)].tmp).char_val||(yyvsp[(3) - (3)].tmp).char_val;
		}
		else
		{
			printf("logical or operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 623 "yacc.y"
    {(yyval.tmp)=(yyvsp[(1) - (1)].tmp); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 624 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val+(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = (yyvsp[(1) - (3)].tmp).real_val+(yyvsp[(3) - (3)].tmp).real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			(yyval.tmp).char_val = (yyvsp[(1) - (3)].tmp).char_val+(yyvsp[(3) - (3)].tmp).char_val;
		}
		else
		{
		
			strcpy((yyval.tmp).string_val,strcat((yyvsp[(1) - (3)].tmp).string_val,(yyvsp[(3) - (3)].tmp).string_val));
		}
		
}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 645 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val-(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = (yyvsp[(1) - (3)].tmp).real_val-(yyvsp[(3) - (3)].tmp).real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
			(yyval.tmp).char_val = (yyvsp[(1) - (3)].tmp).char_val-(yyvsp[(3) - (3)].tmp).char_val;
		}
		else
		{
			printf("minus operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 663 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = -1*(yyvsp[(2) - (2)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = -1*(yyvsp[(2) - (2)].tmp).real_val;
		}
		else
		{
			printf("minus operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 677 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(2) - (2)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = (yyvsp[(2) - (2)].tmp).real_val;
		}
		else
		{
			printf("plus operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 694 "yacc.y"
    {(yyval.tmp)=(yyvsp[(1) - (1)].tmp); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 695 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val*(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = (yyvsp[(1) - (3)].tmp).real_val*(yyvsp[(3) - (3)].tmp).real_val;
		}
		else
		{
			printf("multiply operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 709 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val/(yyvsp[(3) - (3)].tmp).int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			(yyval.tmp).real_val = (yyvsp[(1) - (3)].tmp).real_val/(yyvsp[(3) - (3)].tmp).real_val;
		}
		else
		{
			printf("devide operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 723 "yacc.y"
    {
		if(stringcmp(datatp,"int")==1)
		{
			(yyval.tmp).int_val = (yyvsp[(1) - (3)].tmp).int_val%(yyvsp[(3) - (3)].tmp).int_val;
		}
		else
		{
			printf("modules operation not define for %s datatype\n",datatp);
		}
	}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 735 "yacc.y"
    {(yyval.tmp)=(yyvsp[(1) - (1)].tmp);}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 736 "yacc.y"
    {(yyval.tmp)=(yyvsp[(2) - (3)].tmp);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 740 "yacc.y"
    {
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"int");
						}

						if(stringcmp(datatp,"int")==1)
						{
							(yyval.tmp).int_val = (yyvsp[(1) - (1)].int_val);
						}
						else if(stringcmp(datatp,"real")==1)
						{
							(yyval.tmp).real_val=(yyvsp[(1) - (1)].int_val);
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %d is int data type\n",yylineno,datatp,(yyvsp[(1) - (1)].int_val));
						}
}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 759 "yacc.y"
    {
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"real");
						}

						if(stringcmp(datatp,"real")==1)
						{
							(yyval.tmp).real_val = (yyvsp[(1) - (1)].real_val);
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %f is real data type\n",yylineno,datatp,(yyvsp[(1) - (1)].real_val));
						}
}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 774 "yacc.y"
    {
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"char");
						}
						if(stringcmp(datatp,"char")==1)
						{
							(yyval.tmp).char_val = (yyvsp[(1) - (1)].char_val);
						}
						else if(stringcmp(datatp,"string")==1)
						{
							(yyval.tmp).string_val[0]=(yyvsp[(1) - (1)].char_val);
							(yyval.tmp).string_val[1]='\0';
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %c is char data type\n",yylineno,datatp,(yyvsp[(1) - (1)].char_val));
						}
}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 793 "yacc.y"
    {
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"string");
						}
						if(stringcmp(datatp,"string")==1)
						{
							
							int ind=1;
							while((yyvsp[(1) - (1)].id)[ind]!='\0')
							{
								(yyval.tmp).string_val[ind-1]=(yyvsp[(1) - (1)].id)[ind];
								ind++;
							}
							(yyval.tmp).string_val[ind-2]='\0';
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %s is string data type\n",yylineno,datatp,(yyvsp[(1) - (1)].id));
						}
}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 814 "yacc.y"
    {
                    char x[200];
					char y[200];
					if(read_var_type(table,size,(yyvsp[(1) - (1)].id),y)==-1)
					{
						printf("lineNo-%d\tvariable %s is not created\n",yylineno,(yyvsp[(1) - (1)].id));
						
					}
					else 
					{
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,y);
						}
						if(stringcmp(y,datatp)==1||(stringcmp(datatp,"string")==1&&stringcmp(y,"char")==1))
						{

						if(read_table(table,size,(yyvsp[(1) - (1)].id),x)==-1)
						{
							printf("lineNo-%d\tvariable %s is not created\n",yylineno,(yyvsp[(1) - (1)].id));
							//exit(0);
						}
						else
						{
							if(stringcmp(datatp,"int")==1)
							{
								(yyval.tmp).int_val=string_to_int(x);
							}
							else if(stringcmp(datatp,"real")==1)
							{
								(yyval.tmp).real_val=string_to_float(x);
							}
							else if(stringcmp(datatp,"char")==1)
							{
								(yyval.tmp).char_val=x[0];
							}
							else
							{
								if(stringcmp(y,"char")==1)
								{
									x[1]='\0';
								}
								strcpy((yyval.tmp).string_val,x);
							}
						}
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %s is %s data type\n",yylineno,datatp,(yyvsp[(1) - (1)].id),y);
						}
					}

                    
                    
                    }
    break;


/* Line 1792 of yacc.c  */
#line 2614 "yacc.tab.c"
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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


/* Line 2055 of yacc.c  */
#line 871 "yacc.y"


int main(void){		

	

	return yyparse();
}
