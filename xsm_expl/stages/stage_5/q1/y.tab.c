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
    OR = 294
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "q1.y" /* yacc.c:355  */

	struct tnode *t;
	struct Param *p;

#line 200 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 217 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,     2,
      44,    45,     2,     2,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    37,    45,    46,    49,    50,    53,    56,
      57,    60,    61,    62,    63,    64,    67,    69,    72,    75,
      78,    81,    85,    86,    89,    95,   103,   107,   108,   111,
     112,   115,   118,   119,   121,   122,   125,   128,   131,   134,
     138,   139,   143,   144,   145,   148,   149,   150,   151,   152,
     153,   154,   157,   160,   163,   166,   167,   170,   173,   174,
     177,   178,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   203,   204,   207,   217,   228,   240,   251
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
  "LT", "GT", "LTE", "GTE", "NE", "EQ", "AND", "OR", "';'", "','", "'['",
  "']'", "'('", "')'", "'{'", "'}'", "'='", "'&'", "$accept", "program",
  "GDeclBlock", "GDeclList", "GDecl", "GVarList", "GVar", "Fname",
  "ParamDeclList", "ParamList", "Param", "FDefBlock", "FDef", "Fname2",
  "VParamList", "LDeclBlock", "LDeclList", "LDecl", "LVarList", "LVar",
  "Body", "RetStmt", "MainBlock", "Main", "Type", "Slist", "Stmt",
  "InStmt", "OutStmt", "AsgStmt", "IfStmt", "WhileStmt", "BrkStmt",
  "DoWhileStmt", "expr", "ArgList", "Variable", YY_NULLPTR
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
      59,    44,    91,    93,    40,    41,   123,   125,    61,    38
};
# endif

#define YYPACT_NINF -78

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define YYTABLE_NINF -17

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-17)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    -1,    45,    19,   -78,   -78,    42,   -78,    -2,   -78,
      -6,    19,   -78,   -78,    44,   -78,   -78,   -10,    63,    13,
     -78,    25,   -78,    32,   -78,   -78,   -78,    33,    75,   -78,
     -78,    -2,    -1,    34,    -1,    52,   -78,   -31,   -78,    88,
      55,    66,   -78,    51,    67,    -1,   -78,   -78,    87,    -1,
      68,   112,   -78,    -1,   110,   -78,    87,    77,    50,   -78,
       7,   223,    74,   110,   -78,   -78,   -78,   -78,   117,    16,
     -78,    81,    82,    83,    89,    90,   223,    85,    91,   223,
     127,   131,   147,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,    93,   -78,   104,   -78,   -78,     7,   101,    -3,   101,
     101,   101,   240,   -78,   -78,   172,   -78,   -78,   101,   146,
     -78,   101,   -78,   -78,   -78,   -78,   101,   360,   114,    92,
     246,   265,   284,   118,   119,   394,   -78,   408,   303,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   125,    26,   128,   129,   143,   156,   101,   101,
     -78,   -78,   -78,     9,     9,    22,    22,    22,   422,   422,
     422,   422,   422,   422,   435,   435,   101,   -78,   435,   -28,
     -78,   -78,   223,   223,   322,   341,   377,   101,   -78,   130,
     189,    -7,   132,   -78,   435,   223,   134,   135,   -78,   -78,
     206,   -78,   -78,   138,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,    40,    41,     0,     7,     0,     1,
      40,     0,    23,     3,     0,     4,     6,    11,     0,     0,
      10,     0,    39,     0,    22,     2,    25,     0,     0,    14,
       8,     0,     0,     0,     0,     0,     9,     0,    18,     0,
       0,    26,    20,     0,    12,     0,    15,    21,    28,     0,
       0,     0,    17,     0,     0,    19,    28,     0,     0,    30,
       0,    44,     0,     0,    13,    27,    29,    34,     0,     0,
      33,    83,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,    43,    45,    46,    47,    48,    49,    50,
      51,     0,    38,     0,    35,    31,     0,     0,     0,     0,
       0,     0,     0,    58,    59,     0,    86,    87,     0,     0,
      42,     0,    24,    32,    76,    78,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      37,    54,    75,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    72,    71,    73,    74,     0,    79,    82,     0,
      52,    53,    44,    44,     0,     0,     0,     0,    80,     0,
       0,     0,     0,    85,    81,    44,     0,     0,    60,    61,
       0,    56,    57,     0,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,   -78,   165,   -78,   152,   -78,   -78,   -78,
     -25,   -78,   173,   -78,   -78,   137,   -78,   142,   -78,    99,
     124,   -78,   177,   -78,     5,   -75,   -77,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -49,   -78,   -61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    19,    20,    21,    37,    41,
      38,    11,    12,    27,    43,    54,    58,    59,    69,    70,
      62,   109,    13,    23,    39,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   117,   169,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   102,    71,    17,   105,   110,     8,   173,    14,    42,
      45,     8,    67,   177,    46,    91,    14,   178,    91,    22,
      52,    91,     4,     5,    55,   110,    80,    18,   110,   114,
     115,    71,    28,   188,   -16,     1,    68,   119,   131,   132,
     133,    91,    10,     5,    91,     9,    81,   140,   141,    26,
     120,   121,   122,    30,    31,    80,    95,    96,    60,   125,
     140,   141,   127,    60,    15,     4,     5,   128,    29,    32,
     116,   167,    65,     4,     5,    81,    33,    34,    35,    40,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,    47,   168,    44,    50,   179,   180,   174,
     175,    48,   110,   110,   114,   115,    71,    49,    53,    51,
     190,    91,    91,   110,    56,    57,    61,   176,    91,    91,
      64,    92,    94,    97,    91,   103,    98,    99,   184,    91,
      80,   104,   106,   100,   101,    71,   107,   144,    72,    73,
      74,   111,   185,    75,    76,   116,   186,    77,    78,    79,
      81,   112,    71,   126,   172,    72,    73,    74,   143,    80,
      75,    76,   148,   149,    77,    78,    79,   166,   170,   171,
     173,    16,   189,   108,   191,   192,    80,    71,   194,    81,
      72,    73,    74,    36,    24,    75,    76,    93,    25,    77,
      78,    79,   124,    63,    71,   113,    81,    72,    73,    74,
      66,    80,    75,    76,   187,     0,    77,    78,    79,     0,
       0,    71,     0,     0,    72,    73,    74,     0,    80,    75,
      76,    81,   193,    77,    78,    79,     0,     0,    71,     0,
       0,    72,    73,    74,     0,    80,    75,    76,    81,     0,
      77,    78,    79,     0,     0,    71,     0,     0,    72,    73,
      74,     0,    80,   123,    76,    81,     0,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     0,     0,     0,    81,
       0,   145,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,     0,     0,     0,     0,     0,
     146,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,     0,     0,     0,     0,   147,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     0,     0,     0,     0,     0,   152,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     0,     0,     0,     0,     0,   181,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     0,     0,     0,     0,     0,   182,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,     0,     0,   142,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,     0,     0,
     183,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   150,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   151,   129,
     130,   131,   132,   133,   -17,   -17,   -17,   -17,   -17,   -17,
     140,   141,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141
};

static const yytype_int16 yycheck[] =
{
      61,    76,     5,     5,    79,    82,     1,    14,     3,    34,
      41,     6,     5,    41,    45,    76,    11,    45,    79,    25,
      45,    82,    23,    24,    49,   102,    29,    29,   105,     3,
       4,     5,    42,    40,    44,    21,    29,    98,    29,    30,
      31,   102,    23,    24,   105,     0,    49,    38,    39,     5,
      99,   100,   101,    40,    41,    29,    40,    41,    53,   108,
      38,    39,   111,    58,    22,    23,    24,   116,     5,    44,
      44,    45,    22,    23,    24,    49,    44,    44,     3,    45,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     5,   143,    43,    45,   172,   173,   148,
     149,    46,   179,   180,     3,     4,     5,    41,    21,    42,
     185,   172,   173,   190,    46,     3,     6,   166,   179,   180,
      43,    47,     5,    42,   185,    40,    44,    44,   177,   190,
      29,    40,     5,    44,    44,     5,     5,    45,     8,     9,
      10,    48,    12,    13,    14,    44,    16,    17,    18,    19,
      49,    47,     5,     7,    11,     8,     9,    10,    44,    29,
      13,    14,    44,    44,    17,    18,    19,    42,    40,    40,
      14,     6,    40,    26,    40,    40,    29,     5,    40,    49,
       8,     9,    10,    31,    11,    13,    14,    63,    11,    17,
      18,    19,    20,    56,     5,    96,    49,     8,     9,    10,
      58,    29,    13,    14,    15,    -1,    17,    18,    19,    -1,
      -1,     5,    -1,    -1,     8,     9,    10,    -1,    29,    13,
      14,    49,    16,    17,    18,    19,    -1,    -1,     5,    -1,
      -1,     8,     9,    10,    -1,    29,    13,    14,    49,    -1,
      17,    18,    19,    -1,    -1,     5,    -1,    -1,     8,     9,
      10,    -1,    29,    13,    14,    49,    -1,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    49,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    49,
      -1,    45,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      43,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    51,    52,    23,    24,    53,    54,    74,     0,
      23,    61,    62,    72,    74,    22,    54,     5,    29,    55,
      56,    57,    25,    73,    62,    72,     5,    63,    42,     5,
      40,    41,    44,    44,    44,     3,    56,    58,    60,    74,
      45,    59,    60,    64,    43,    41,    45,     5,    46,    41,
      45,    42,    60,    21,    65,    60,    46,     3,    66,    67,
      74,     6,    70,    65,    43,    22,    67,     5,    29,    68,
      69,     5,     8,     9,    10,    13,    14,    17,    18,    19,
      29,    49,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    86,    47,    70,     5,    40,    41,    42,    44,    44,
      44,    44,    75,    40,    40,    75,     5,     5,    26,    71,
      76,    48,    47,    69,     3,     4,    44,    84,    86,    86,
      84,    84,    84,    13,    20,    84,     7,    84,    84,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    43,    44,    45,    45,    45,    45,    44,    44,
      40,    40,    45,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    42,    45,    84,    85,
      40,    40,    11,    14,    84,    84,    84,    41,    45,    75,
      75,    45,    45,    43,    84,    12,    16,    15,    40,    40,
      75,    40,    40,    16,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    56,    56,    56,    57,    58,    58,    59,
      59,    60,    61,    61,    62,    63,    64,    65,    65,    66,
      66,    67,    68,    68,    69,    69,    70,    71,    72,    73,
      74,    74,    75,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    77,    78,    79,    80,    80,    81,    82,    82,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    86,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     0,     2,     1,     3,     3,
       1,     1,     4,     7,     2,     4,     1,     3,     1,     3,
       1,     2,     2,     1,     9,     1,     1,     3,     0,     2,
       1,     3,     3,     1,     1,     2,     4,     3,     8,     1,
       1,     1,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     4,    10,     8,     8,     2,     2,
       7,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       4,     3,     1,     1,     4,     7,     2,     2
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
    {showTables();
										fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
										fprintf(out, "MOV SP,%d\n",location+1);
										//printf("lol\n");
										codeGen((yyvsp[-1].t), out);
										freeAllReg();
										codeGen((yyvsp[0].t), out);
										fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
										return;
										}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "q1.y" /* yacc.c:1646  */
    {fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
								fprintf(out, "MOV SP,%d\n",location+1);
								codeGen((yyvsp[0].t), out);
								fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
								return; 
								}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "q1.y" /* yacc.c:1646  */
    {}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "q1.y" /* yacc.c:1646  */
    {}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "q1.y" /* yacc.c:1646  */
    {}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "q1.y" /* yacc.c:1646  */
    {}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 53 "q1.y" /* yacc.c:1646  */
    {assignType((yyvsp[-2].t)->type, (yyvsp[-1].t));}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 56 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 60 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 61 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-3].t)->varname, (yyvsp[-1].t)->val, 1); (yyvsp[-3].t)->left=NULL; (yyval.t)=(yyvsp[-3].t);}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 62 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-6].t)->varname, (yyvsp[-4].t)->val, (yyvsp[-1].t)->val); (yyvsp[-6].t)->left=NULL; (yyval.t)=(yyvsp[-6].t);}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 63 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "q1.y" /* yacc.c:1646  */
    {insertFunction((yyvsp[-3].t)->varname, (yyvsp[-1].p)); (yyval.t)=(yyvsp[-3].t);}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t); currfunc=strdup((yyvsp[0].t)->varname);}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[-2].p),(yyvsp[0].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[0].p)->next=(yyvsp[-2].p); (yyval.p)=(yyvsp[0].p);}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[-2].p),(yyvsp[0].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[-2].p)->next=(yyvsp[0].p); (yyval.p)=(yyvsp[-2].p);}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "q1.y" /* yacc.c:1646  */
    {(yyval.p) = createParam((yyvsp[-1].t)->type, (yyvsp[0].t)->varname);}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 85 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left = (yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "q1.y" /* yacc.c:1646  */
    {checkTypeValidity(currfunc, (yyvsp[-8].t)->type); 
																	(yyval.t) = makeFuncNode((yyvsp[-8].t)->type, currfunc, (yyvsp[-1].t));
																	resetLocalSpace();
																	}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 95 "q1.y" /* yacc.c:1646  */
    {struct Gsymbol *entry = gLookup((yyvsp[0].t)->varname);
				if(entry == NULL) {
					printf("Function not declared\n"); exit(0);}
				createLocalTable((yyvsp[0].t)->varname);
				currfunc = strdup((yyvsp[0].t)->varname);
				}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 103 "q1.y" /* yacc.c:1646  */
    {checkAndCreateParam(currfunc, (yyvsp[0].p));}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "q1.y" /* yacc.c:1646  */
    {}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "q1.y" /* yacc.c:1646  */
    {}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 111 "q1.y" /* yacc.c:1646  */
    {}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 112 "q1.y" /* yacc.c:1646  */
    {}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "q1.y" /* yacc.c:1646  */
    {assignLocType((yyvsp[-2].t)->type, (yyvsp[-1].t));}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeBodyNode((yyvsp[-2].t), (yyvsp[-1].t));}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 128 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeReturnNode((yyvsp[-1].t), currfunc);}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 131 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeFuncNode(INTTYPE, "main", (yyvsp[-1].t));}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 134 "q1.y" /* yacc.c:1646  */
    {insertMain("main", INTTYPE);
				createLocalTable("main");
				currfunc = strdup("main");}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 138 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode(INTTYPE);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 139 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode(STRTYPE);}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 143 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONN_, NOTYPE_, (yyvsp[-1].t),(yyvsp[0].t));}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 145 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=NULL;}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(READ_, (yyvsp[-2].t));}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(WRITE_, (yyvsp[-2].t));}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "q1.y" /* yacc.c:1646  */
    {  (yyval.t) = makeAssignNode(ASSIGN_, NOTYPE_, (yyvsp[-3].t),(yyvsp[-1].t));}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 166 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, BOOLTYPE, (yyvsp[-7].t), (yyvsp[-4].t), (yyvsp[-2].t));}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 167 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, BOOLTYPE, (yyvsp[-5].t), (yyvsp[-2].t), NULL);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 170 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(WHILE_, BOOLTYPE, (yyvsp[-5].t), (yyvsp[-2].t));}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 173 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(BREAK_, NOTYPE_, NULL, NULL);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 174 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONT_, NOTYPE_, NULL, NULL);}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 177 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, BOOLTYPE, (yyvsp[-5].t), (yyvsp[-2].t));}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 178 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, BOOLTYPE, (yyvsp[-5].t), (yyvsp[-2].t));}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 182 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(PLUS_, INTTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 183 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MINUS_, INTTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 184 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MUL_, INTTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 185 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DIV_, INTTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 186 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MOD_, INTTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 187 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LT_, BOOLTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 188 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GT_, BOOLTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 189 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LTE_, BOOLTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 190 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GTE_, BOOLTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 191 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(EQ_, BOOLTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 192 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(NE_, BOOLTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 193 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(AND_, BOOLTYPE, (yyvsp[-2].t), (yyvsp[0].t));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 194 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(OR_, BOOLTYPE, (yyvsp[-2].t),(yyvsp[0].t));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 195 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[-1].t);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 196 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 197 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 198 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t); }
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 199 "q1.y" /* yacc.c:1646  */
    {}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 200 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeFuncCallNode((yyvsp[-3].t)->varname, (yyvsp[-1].t));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 203 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->mid=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 204 "q1.y" /* yacc.c:1646  */
    { (yyval.t)=(yyvsp[0].t); (yyvsp[0].t)->mid=NULL;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 207 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[0].t)->varname);
					if(temp == NULL) {
						printf("%s undeclared\n", (yyvsp[0].t)->varname);	exit(0);}
					(yyvsp[0].t)->nodetype = VAR_;
					if(temp->gentry!=NULL)
						(yyvsp[0].t)->type = temp->gentry->type;
					else
						(yyvsp[0].t)->type = temp->locentry->type;
					(yyval.t)=(yyvsp[0].t);
					}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 217 "q1.y" /* yacc.c:1646  */
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
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 228 "q1.y" /* yacc.c:1646  */
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
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 240 "q1.y" /* yacc.c:1646  */
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
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 251 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[0].t)->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", (yyvsp[0].t)->varname); exit(0);}
						(yyvsp[0].t)->nodetype = ADDPTR_;
						if(temp->gentry!=NULL)
							(yyvsp[0].t)->type = temp->gentry->type;
						else
							(yyvsp[0].t)->type = temp->locentry->type;
						(yyval.t) = (yyvsp[0].t);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2071 "y.tab.c" /* yacc.c:1646  */
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
#line 264 "q1.y" /* yacc.c:1906  */


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

	yyparse();
	
	return 0;
}
