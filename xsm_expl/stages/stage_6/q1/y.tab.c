/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "q1.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include "q1.h"
	#include "q1.c"
	#include "sym_table.c"
	int yylex(void);
	FILE *yyin, *out;
	int reg;

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    STR1 = 259,
    VAR = 260,
    BEG = 261,
    END = 262,
    READ = 263,
    WRITE = 264,
    IF = 265,
    THEN = 266,
    ELSE = 267,
    WHILE = 268,
    DO = 269,
    ENDWHILE = 270,
    ENDIF = 271,
    BREAK = 272,
    CONTINUE = 273,
    REPEAT = 274,
    UNTIL = 275,
    DECL = 276,
    ENDDECL = 277,
    INT = 278,
    STR = 279,
    MAIN = 280,
    RETURN = 281,
    PLUS = 282,
    MINUS = 283,
    MUL = 284,
    DIV = 285,
    MOD = 286,
    LT = 287,
    GT = 288,
    LTE = 289,
    GTE = 290,
    NE = 291,
    EQ = 292,
    AND = 293,
    OR = 294,
    TYPE = 295,
    ENDTYPE = 296,
    NULLTOKEN = 297
  };
#endif
/* Tokens.  */
#define NUM 258
#define STR1 259
#define VAR 260
#define BEG 261
#define END 262
#define READ 263
#define WRITE 264
#define IF 265
#define THEN 266
#define ELSE 267
#define WHILE 268
#define DO 269
#define ENDWHILE 270
#define ENDIF 271
#define BREAK 272
#define CONTINUE 273
#define REPEAT 274
#define UNTIL 275
#define DECL 276
#define ENDDECL 277
#define INT 278
#define STR 279
#define MAIN 280
#define RETURN 281
#define PLUS 282
#define MINUS 283
#define MUL 284
#define DIV 285
#define MOD 286
#define LT 287
#define GT 288
#define LTE 289
#define GTE 290
#define NE 291
#define EQ 292
#define AND 293
#define OR 294
#define TYPE 295
#define ENDTYPE 296
#define NULLTOKEN 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "q1.y" /* yacc.c:355  */

	struct tnode *t;
	struct Param *p;

#line 206 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   532

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,     2,
      49,    50,     2,     2,    46,     2,    52,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    38,    47,    48,    51,    52,    55,    58,
      61,    62,    65,    68,    69,    70,    73,    74,    77,    78,
      81,    84,    85,    88,    89,    90,    91,    92,    95,    97,
     100,   103,   106,   109,   113,   114,   117,   124,   132,   136,
     137,   140,   141,   144,   147,   148,   150,   151,   154,   157,
     160,   163,   168,   169,   170,   173,   174,   175,   176,   177,
     178,   179,   182,   185,   188,   191,   192,   195,   198,   199,
     202,   203,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   229,   230,   233,   234,   237,   238,   249,   260,
     272,   283
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "STR1", "VAR", "BEG", "END",
  "READ", "WRITE", "IF", "THEN", "ELSE", "WHILE", "DO", "ENDWHILE",
  "ENDIF", "BREAK", "CONTINUE", "REPEAT", "UNTIL", "DECL", "ENDDECL",
  "INT", "STR", "MAIN", "RETURN", "PLUS", "MINUS", "MUL", "DIV", "MOD",
  "LT", "GT", "LTE", "GTE", "NE", "EQ", "AND", "OR", "TYPE", "ENDTYPE",
  "NULLTOKEN", "'{'", "'}'", "';'", "','", "'['", "']'", "'('", "')'",
  "'='", "'.'", "'&'", "$accept", "program", "TypeDefBlock", "TypeDefList",
  "TypeDef", "TName", "FieldDeclList", "FieldDecl", "Type", "GDeclBlock",
  "GDeclList", "GDecl", "GVarList", "GVar", "Fname", "ParamDeclList",
  "ParamList", "Param", "FDefBlock", "FDef", "Fname2", "VParamList",
  "LDeclBlock", "LDeclList", "LDecl", "LVarList", "LVar", "Body",
  "RetStmt", "MainBlock", "Main", "Slist", "Stmt", "InStmt", "OutStmt",
  "AsgStmt", "IfStmt", "WhileStmt", "BrkStmt", "DoWhileStmt", "expr",
  "ArgList", "Field", "Variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   123,   125,    59,    44,    91,    93,    40,
      41,    61,    46,    38
};
# endif

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -29

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-29)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,    -2,    42,    26,   -95,     9,   -95,    16,   -95,    91,
      97,   -95,   -95,    91,   -95,   -95,   -95,     8,    75,   -95,
      29,    77,    97,   -95,   -95,     1,   -95,    96,    46,   100,
     -37,   -95,    61,   -95,   -95,   -95,    63,   -95,    73,   -95,
     -95,   -95,   -95,    78,   123,   -95,   -95,     8,    91,    81,
      91,   -95,    79,   -95,   134,    38,   -95,    85,   -95,    99,
      98,   105,   -95,    91,   -95,   126,    91,   113,   154,   -95,
      91,   158,   -95,   126,   117,    23,   139,   -95,   225,   122,
     158,   -95,   -95,   163,   -26,   -95,   -95,   -95,   -45,   120,
     129,   132,   133,   225,   127,   128,   225,   182,   184,   141,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   148,
     -95,   146,   -95,   -95,    23,    58,   198,    11,    58,    58,
      58,   250,   -95,   -95,   166,   -95,   -95,    58,   197,   -95,
      58,   -95,   -95,   -95,   -95,     6,   -95,    58,   398,   -95,
     156,   -95,   159,   254,   278,   302,   161,   162,   442,   -95,
     461,     7,   326,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,   173,   178,   186,   217,
     215,    58,    58,   -95,   -95,   -95,   480,    44,   -95,   176,
     176,    53,    53,    53,   493,   493,   493,   493,   493,   493,
     480,   480,    58,   -95,   -95,   225,   225,   350,   374,    58,
     -95,   420,   124,   183,     3,   187,   480,   -95,   225,   195,
     196,   -95,   -95,   208,   -95,   -95,   200,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    17,     9,     0,     7,     0,     1,     0,
       0,     4,     6,     0,    15,    13,    14,     0,     0,    19,
      13,     0,     0,    35,     3,     0,    11,     0,    23,     0,
       0,    22,     0,    16,    18,    51,     0,    37,     0,    34,
       2,     8,    10,     0,     0,    26,    20,     0,     0,     0,
       0,    12,     0,    21,     0,     0,    30,     0,    38,    32,
       0,    24,    33,     0,    27,    40,     0,     0,     0,    29,
       0,     0,    31,    40,     0,     0,     0,    42,    54,     0,
       0,    25,    46,     0,     0,    45,    39,    41,    97,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
      53,    55,    56,    57,    58,    59,    60,    61,    96,     0,
      50,     0,    47,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,     0,   100,   101,     0,     0,    52,
       0,    36,    44,    86,    88,    97,    91,     0,     0,    87,
      95,    94,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,     0,    49,    64,    89,    93,     0,    85,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    82,    81,
      83,    84,     0,    62,    63,    54,    54,     0,     0,     0,
      90,     0,     0,     0,     0,     0,    92,    99,    54,     0,
       0,    70,    71,     0,    66,    67,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   -95,   241,   -95,   -95,   222,    13,   -95,
     -95,   230,   -95,   202,   -95,   -95,   185,    18,   -95,   228,
     -95,   -95,   179,   -95,   177,   -95,   142,   190,   -95,   235,
     -95,   -92,   -94,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -86,   -95,   149,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,     7,    25,    26,    54,    10,
      18,    19,    30,    31,    32,    55,    58,    59,    22,    23,
      38,    60,    71,    76,    77,    84,    85,    79,   128,    24,
      36,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     138,   177,   108,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,   121,   115,     4,   124,   129,    14,   116,    46,    47,
     133,   134,   135,    28,     4,   109,    88,   196,   109,   113,
     114,   109,    17,    21,    15,    16,    27,   129,    82,     1,
     129,    17,   143,   144,   145,    21,    97,    29,    27,   142,
      97,   148,     8,   109,   150,    41,   109,     9,   211,   136,
      11,   152,    83,   115,    35,   151,   137,   175,   116,    13,
      98,   133,   134,   135,    98,   176,    56,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      14,    69,    37,    75,    63,   197,   198,    97,    64,    75,
     199,   164,   165,    44,   200,   -28,    14,    33,    15,    16,
     136,    43,    14,   202,   203,    45,   201,   137,   129,   129,
      48,    98,    49,   206,    15,    16,   213,   109,   109,   129,
      20,    16,    50,    51,   109,   109,    52,    61,    65,    88,
     109,    57,    89,    90,    91,   109,   208,    92,    93,    62,
     209,    94,    95,    96,    14,    66,    88,    70,    67,    89,
      90,    91,    68,    97,    92,    93,    73,    74,    94,    95,
      96,    86,    15,    16,    78,    81,   110,   127,   112,   117,
      97,    88,   122,   123,    89,    90,    91,    98,   118,    92,
      93,   119,   120,    94,    95,    96,   147,   125,    88,   126,
     131,    89,    90,    91,    98,    97,    92,    93,   210,   130,
      94,    95,    96,   140,   149,   155,   156,   157,   116,   167,
     171,   172,    97,    88,   164,   165,    89,    90,    91,    98,
     192,    92,    93,   193,   216,    94,    95,    96,   195,   196,
      88,   194,   212,    89,    90,    91,    98,    97,    92,    93,
     214,   215,    94,    95,    96,   217,    12,    42,    34,    53,
      39,    72,    80,    87,    97,    88,   132,    40,    89,    90,
      91,    98,     0,   146,    93,   141,     0,    94,    95,    96,
     111,     0,     0,     0,     0,     0,     0,     0,    98,    97,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,   168,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     204,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,     0,     0,     0,     0,     0,     0,     0,   207,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,     0,     0,     0,     0,     0,   173,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,     0,     0,     0,     0,     0,   174,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     153,   154,   155,   156,   157,   -29,   -29,   -29,   -29,   -29,
     -29,   164,   165
};

static const yytype_int16 yycheck[] =
{
      78,    93,    47,     5,    96,    99,     5,    52,    45,    46,
       3,     4,     5,     5,     5,    93,     5,    14,    96,    45,
      46,    99,     9,    10,    23,    24,    13,   121,     5,    40,
     124,    18,   118,   119,   120,    22,    29,    29,    25,   117,
      29,   127,     0,   121,   130,    44,   124,    21,    45,    42,
      41,   137,    29,    47,    25,    49,    49,    50,    52,    43,
      53,     3,     4,     5,    53,   151,    48,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       5,    63,     5,    70,    46,   171,   172,    29,    50,    76,
      46,    38,    39,    47,    50,    49,     5,    22,    23,    24,
      42,     5,     5,   195,   196,     5,   192,    49,   202,   203,
      49,    53,    49,   199,    23,    24,   208,   195,   196,   213,
      23,    24,    49,    45,   202,   203,     3,    48,    43,     5,
     208,    50,     8,     9,    10,   213,    12,    13,    14,     5,
      16,    17,    18,    19,     5,    46,     5,    21,    50,     8,
       9,    10,    47,    29,    13,    14,    43,     3,    17,    18,
      19,    22,    23,    24,     6,    48,    44,    26,     5,    49,
      29,     5,    45,    45,     8,     9,    10,    53,    49,    13,
      14,    49,    49,    17,    18,    19,    20,     5,     5,     5,
      44,     8,     9,    10,    53,    29,    13,    14,    15,    51,
      17,    18,    19,     5,     7,    29,    30,    31,    52,    50,
      49,    49,    29,     5,    38,    39,     8,     9,    10,    53,
      47,    13,    14,    45,    16,    17,    18,    19,    11,    14,
       5,    45,    45,     8,     9,    10,    53,    29,    13,    14,
      45,    45,    17,    18,    19,    45,     5,    25,    18,    47,
      22,    66,    73,    76,    29,     5,   114,    22,     8,     9,
      10,    53,    -1,    13,    14,   116,    -1,    17,    18,    19,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    29,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    50,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    55,    56,     5,    57,    58,    59,     0,    21,
      63,    41,    58,    43,     5,    23,    24,    62,    64,    65,
      23,    62,    72,    73,    83,    60,    61,    62,     5,    29,
      66,    67,    68,    22,    65,    25,    84,     5,    74,    73,
      83,    44,    61,     5,    47,     5,    45,    46,    49,    49,
      49,    45,     3,    67,    62,    69,    71,    50,    70,    71,
      75,    48,     5,    46,    50,    43,    46,    50,    47,    71,
      21,    76,    70,    43,     3,    62,    77,    78,     6,    81,
      76,    48,     5,    29,    79,    80,    22,    78,     5,     8,
       9,    10,    13,    14,    17,    18,    19,    29,    53,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    96,    97,
      44,    81,     5,    45,    46,    47,    52,    49,    49,    49,
      49,    85,    45,    45,    85,     5,     5,    26,    82,    86,
      51,    44,    80,     3,     4,     5,    42,    49,    94,    97,
       5,    96,    97,    94,    94,    94,    13,    20,    94,     7,
      94,    49,    94,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    48,    50,    50,    50,
      50,    49,    49,    45,    45,    50,    94,    95,    50,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    47,    45,    45,    11,    14,    94,    94,    46,
      50,    94,    85,    85,    50,    50,    94,    48,    12,    16,
      15,    45,    45,    85,    45,    45,    16,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    58,    59,
      60,    60,    61,    62,    62,    62,    63,    63,    64,    64,
      65,    66,    66,    67,    67,    67,    67,    67,    68,    69,
      69,    70,    70,    71,    72,    72,    73,    74,    75,    76,
      76,    77,    77,    78,    79,    79,    80,    80,    81,    82,
      83,    84,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    87,    88,    89,    90,    90,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     1,     4,     1,
       2,     1,     3,     1,     1,     1,     3,     0,     2,     1,
       3,     3,     1,     1,     4,     7,     2,     4,     1,     3,
       1,     3,     1,     2,     2,     1,     9,     1,     1,     3,
       0,     2,     1,     3,     3,     1,     1,     2,     4,     3,
       8,     1,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     4,    10,     8,     8,     2,     2,
       7,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       4,     1,     3,     1,     3,     3,     1,     1,     4,     7,
       2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 27 "q1.y" /* yacc.c:1646  */
    {//showTables();
													fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
													fprintf(out, "MOV SP,%d\n",location+1);
													//printf("lol\n");
													codeGen((yyvsp[-1].t), out);
													freeAllReg();
													codeGen((yyvsp[0].t), out);
													fprintf(out,"MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0");
													fprintf(out,"\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
													return;
													}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "q1.y" /* yacc.c:1646  */
    {fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
											fprintf(out, "MOV SP,%d\n",location+1);
											codeGen((yyvsp[0].t), out);
											fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\n");
											fprintf(out, "POP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
											return; 
											}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "q1.y" /* yacc.c:1646  */
    {}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "q1.y" /* yacc.c:1646  */
    {}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "q1.y" /* yacc.c:1646  */
    {}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "q1.y" /* yacc.c:1646  */
    {resetFieldIndex();}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "q1.y" /* yacc.c:1646  */
    {insertType((yyvsp[0].t)->varname); currtype = strdup((yyvsp[0].t)->varname);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 61 "q1.y" /* yacc.c:1646  */
    {}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "q1.y" /* yacc.c:1646  */
    {}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "q1.y" /* yacc.c:1646  */
    {insertField(currtype, (yyvsp[-2].t), (yyvsp[-1].t)->varname);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode("int"); }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 69 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode("str");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode(strdup((yyvsp[0].t)->varname));}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "q1.y" /* yacc.c:1646  */
    {}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "q1.y" /* yacc.c:1646  */
    {}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "q1.y" /* yacc.c:1646  */
    {}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 78 "q1.y" /* yacc.c:1646  */
    {}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "q1.y" /* yacc.c:1646  */
    {assignType((yyvsp[-2].t)->type, (yyvsp[-1].t));}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 85 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 88 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-3].t)->varname, (yyvsp[-1].t)->val, 1); (yyvsp[-3].t)->left=NULL; (yyval.t)=(yyvsp[-3].t);}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-6].t)->varname, (yyvsp[-4].t)->val, (yyvsp[-1].t)->val); (yyvsp[-6].t)->left=NULL; (yyval.t)=(yyvsp[-6].t);}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 91 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 92 "q1.y" /* yacc.c:1646  */
    {insertFunction((yyvsp[-3].t)->varname, (yyvsp[-1].p)); (yyval.t)=(yyvsp[-3].t);}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t); currfunc=strdup((yyvsp[0].t)->varname);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[-2].p),(yyvsp[0].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[0].p)->next=(yyvsp[-2].p); (yyval.p)=(yyvsp[0].p);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[0].p),(yyvsp[-2].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[-2].p)->next=(yyvsp[0].p); (yyval.p)=(yyvsp[-2].p);}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 106 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 109 "q1.y" /* yacc.c:1646  */
    {(yyval.p) = createParam((yyvsp[-1].t)->type, (yyvsp[0].t)->varname);}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left = (yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 117 "q1.y" /* yacc.c:1646  */
    {checkTypeValidity(currfunc, (yyvsp[-8].t)->type); 
																	(yyval.t) = makeFuncNode((yyvsp[-8].t)->type, currfunc, (yyvsp[-1].t));
																	resetLocalSpace();
																	}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "q1.y" /* yacc.c:1646  */
    {struct Gsymbol *entry = gLookup((yyvsp[0].t)->varname);
				if(entry == NULL) {
					printf("Function not declared\n"); exit(0);}
				createLocalTable((yyvsp[0].t)->varname);
				currfunc = strdup((yyvsp[0].t)->varname);
				}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 132 "q1.y" /* yacc.c:1646  */
    {checkAndCreateParam(currfunc, (yyvsp[0].p));}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "q1.y" /* yacc.c:1646  */
    {}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "q1.y" /* yacc.c:1646  */
    {}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 140 "q1.y" /* yacc.c:1646  */
    {}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 141 "q1.y" /* yacc.c:1646  */
    {}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "q1.y" /* yacc.c:1646  */
    {assignLocType((yyvsp[-2].t)->type, (yyvsp[-1].t));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 147 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 151 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 154 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeBodyNode((yyvsp[-2].t), (yyvsp[-1].t));}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 157 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeReturnNode((yyvsp[-1].t), currfunc);}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 160 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeFuncNode(typeLookup("int"), "main", (yyvsp[-1].t));}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 163 "q1.y" /* yacc.c:1646  */
    {insertMain("main", typeLookup("int"));
				createLocalTable("main");
				currfunc = strdup("main");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 168 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONN_, typeLookup("null"), (yyvsp[-1].t),(yyvsp[0].t));}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 169 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 170 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=NULL;}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 173 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 174 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 176 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 182 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(READ_, (yyvsp[-2].t));}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(WRITE_, (yyvsp[-2].t));}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 188 "q1.y" /* yacc.c:1646  */
    {  (yyval.t) = makeAssignNode(ASSIGN_, typeLookup("null"), (yyvsp[-3].t),(yyvsp[-1].t));}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 191 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, typeLookup("bool"), (yyvsp[-7].t), (yyvsp[-4].t), (yyvsp[-2].t));}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 192 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t), NULL);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 195 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(WHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 198 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(BREAK_, typeLookup("null"), NULL, NULL);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 199 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONT_, typeLookup("null"), NULL, NULL);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 202 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 203 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 207 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(PLUS_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 208 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MINUS_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 209 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MUL_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 210 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DIV_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 211 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MOD_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 212 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LT_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 213 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GT_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 214 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LTE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 215 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GTE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 216 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(EQ_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 217 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(NE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 218 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(AND_, typeLookup("bool"), (yyvsp[-2].t), (yyvsp[0].t));}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 219 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(OR_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 220 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[-1].t);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 221 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 222 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 223 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t); }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 224 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeFuncCallNode((yyvsp[-2].t)->varname, NULL);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 225 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeFuncCallNode((yyvsp[-3].t)->varname, (yyvsp[-1].t));}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 226 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeNullNode();}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 229 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->mid=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 230 "q1.y" /* yacc.c:1646  */
    { (yyval.t)=(yyvsp[0].t); (yyvsp[0].t)->mid=NULL;}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 233 "q1.y" /* yacc.c:1646  */
    {(yyvsp[-2].t)->left=(yyvsp[0].t); (yyval.t)=(yyvsp[-2].t);}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 234 "q1.y" /* yacc.c:1646  */
    {(yyvsp[-2].t)->left=(yyvsp[0].t); (yyval.t)=(yyvsp[-2].t);}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 237 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeFieldNode((yyvsp[0].t));}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 238 "q1.y" /* yacc.c:1646  */
    {
	 				 struct TableEntry *temp = lookup((yyvsp[0].t)->varname);
					if(temp == NULL) {
						printf("%s undeclared\n", (yyvsp[0].t)->varname);	exit(0);}
					(yyvsp[0].t)->nodetype = VAR_;
					if(temp->gentry!=NULL)
						(yyvsp[0].t)->type = temp->gentry->type;
					else
						(yyvsp[0].t)->type = temp->locentry->type;
					(yyval.t)=(yyvsp[0].t);
					}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 249 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[-3].t)->varname);
								if(temp==NULL) {
									printf("%s undeclared\n", (yyvsp[-3].t)->varname); exit(0);}
								(yyvsp[-3].t)->left = (yyvsp[-1].t);
								(yyvsp[-3].t)->nodetype = ARR_;
								if(temp->gentry!=NULL)
									(yyvsp[-3].t)->type = temp->gentry->type;
								else
									(yyvsp[-3].t)->type = temp->locentry->type;
								(yyval.t) = (yyvsp[-3].t);
								}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 260 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[-6].t)->varname);
											if(temp==NULL) {
												printf("%s undeclared\n", (yyvsp[-6].t)->varname); exit(0); }
											(yyvsp[-6].t)->left = (yyvsp[-4].t);
											(yyvsp[-6].t)->right = (yyvsp[-1].t);
											(yyvsp[-6].t)->nodetype = DARR_;
											if(temp->gentry!=NULL)
												(yyvsp[-6].t)->type = temp->gentry->type;
											else
												(yyvsp[-6].t)->type = temp->locentry->type;
											(yyval.t) = (yyvsp[-6].t);
											}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 272 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[0].t)->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", (yyvsp[0].t)->varname); exit(0);}
						(yyvsp[0].t)->nodetype = PTR_;
						if(temp->gentry!=NULL)
							(yyvsp[0].t)->type = temp->gentry->type;
						else
							(yyvsp[0].t)->type = temp->locentry->type;
						(yyval.t) = (yyvsp[0].t);

						}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 283 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[0].t)->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", (yyvsp[0].t)->varname); exit(0);}
						(yyvsp[0].t)->nodetype = ADDPTR_;
						if(temp->gentry!=NULL)
							(yyvsp[0].t)->type = temp->gentry->type;
						else
							(yyvsp[0].t)->type = temp->locentry->type;
						(yyval.t) = (yyvsp[0].t);}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2187 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 296 "q1.y" /* yacc.c:1906  */


yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc, char* argv[])
{
	FILE *in = fopen(argv[1], "r");
	if(in)
		yyin = in;

	out = fopen("temp", "w");

	initializeTypeTable();

	yyparse();
	
	return 0;
}
