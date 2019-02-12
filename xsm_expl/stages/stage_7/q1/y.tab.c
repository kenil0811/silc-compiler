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
    NULLTOKEN = 297,
    CLASS = 298,
    ENDCLASS = 299,
    SELF = 300,
    NEW = 301
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
#define CLASS 298
#define ENDCLASS 299
#define SELF 300
#define NEW 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "q1.y" /* yacc.c:355  */

	struct tnode *t;
	struct Param *p;

#line 214 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   610

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,     2,
      50,    51,     2,     2,    52,     2,    56,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    55,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    39,    50,    51,    54,    55,    58,    61,
      64,    65,    68,    71,    72,    73,    77,    78,    81,    82,
      85,    88,    91,    92,    95,    98,    99,   102,   105,   106,
     111,   112,   115,   116,   119,   122,   123,   126,   127,   128,
     129,   130,   133,   135,   138,   139,   142,   146,   147,   150,
     157,   173,   175,   178,   179,   182,   183,   186,   187,   190,
     193,   194,   196,   197,   200,   203,   208,   211,   217,   218,
     219,   222,   223,   224,   225,   226,   227,   228,   229,   233,
     236,   239,   242,   243,   246,   249,   250,   253,   254,   257,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   294,   295,   298,   299,   300,   309,   313,   319,   322,
     323,   334,   345,   357,   368
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
  "NULLTOKEN", "CLASS", "ENDCLASS", "SELF", "NEW", "'{'", "'}'", "';'",
  "'('", "')'", "','", "'['", "']'", "'='", "'.'", "'&'", "$accept",
  "program", "TypeDefBlock", "TypeDefList", "TypeDef", "TName",
  "FieldDeclList", "FieldDecl", "Type", "ClassDefBlock", "ClassDefList",
  "ClassDef", "Cname", "CFieldList", "CField", "CMethodDecl", "MethodDecl",
  "CMethodDef", "GDeclBlock", "GDeclList", "GDecl", "GVarList", "GVar",
  "Fname", "ParamDeclList", "Param", "FDefBlock", "FDef", "Fname2",
  "VParamList", "ParamList", "LDeclBlock", "LDeclList", "LDecl",
  "LVarList", "LVar", "Body", "RetStmt", "MainBlock", "Main", "Slist",
  "Stmt", "InStmt", "OutStmt", "AsgStmt", "IfStmt", "WhileStmt", "BrkStmt",
  "DoWhileStmt", "NewStmt", "expr", "ArgList", "Field", "FieldFunction",
  "Variable", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   123,   125,    59,
      40,    41,    44,    91,    93,    61,    46,    38
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -43

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-43)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,     6,    31,    21,  -128,    27,  -128,    49,  -128,   109,
      97,  -128,  -128,    71,  -128,     3,  -128,    76,    71,    75,
    -128,  -128,  -128,    17,  -128,   137,  -128,  -128,   115,     4,
     108,  -128,   136,   151,    75,  -128,  -128,  -128,  -128,   122,
    -128,    39,   169,    70,  -128,   141,  -128,  -128,  -128,   147,
    -128,   150,  -128,  -128,  -128,    71,   201,  -128,  -128,     4,
      71,   174,    71,   215,  -128,   191,  -128,   175,  -128,   221,
      77,  -128,   181,   182,   186,  -128,    29,    71,   238,  -128,
     192,  -128,  -128,    71,   225,    71,   208,  -128,    71,    37,
    -128,   209,   257,  -128,    71,   265,  -128,   225,    95,  -128,
    -128,   223,     5,   194,  -128,   273,   214,   265,   227,  -128,
    -128,   258,   103,  -128,  -128,  -128,   -18,   230,   243,   244,
     247,   273,   240,   261,   273,   283,   249,   301,   193,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,   259,
    -128,   263,  -128,  -128,  -128,     5,   130,   266,     0,    10,
     130,   130,   130,   290,  -128,  -128,   222,  -128,   310,  -128,
     130,   309,  -128,   130,  -128,  -128,  -128,  -128,    34,  -128,
     264,   130,   321,   267,  -128,  -128,   271,   268,  -128,   117,
     274,   362,   387,   412,   272,   276,  -128,   512,  -128,   535,
     112,     9,   312,   437,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   275,   322,   324,
     282,   284,   323,   318,   130,   130,  -128,  -128,  -128,   558,
     125,   -20,   286,  -128,    43,    43,   140,   140,   140,   571,
     571,   571,   571,   571,   571,   558,   558,   130,   287,   288,
    -128,  -128,   273,   273,   462,   487,  -128,   130,   130,   130,
     334,   130,   289,   176,   239,    13,   291,   558,   131,   157,
    -128,   172,  -128,   273,   292,   293,  -128,  -128,  -128,  -128,
    -128,   256,  -128,  -128,   294,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    17,     9,     0,     7,     0,     1,     0,
      31,     4,     6,     0,    21,     0,    19,     0,     0,     0,
      15,    13,    14,     0,    11,     0,    16,    18,     0,     0,
       0,    33,    13,     0,     0,    48,     3,     8,    10,     0,
      23,    37,     0,     0,    36,     0,    30,    32,    67,     0,
      50,     0,    47,     2,    12,     0,     0,    40,    34,     0,
      45,     0,    54,     0,    22,     0,    26,     0,    35,     0,
       0,    44,     0,    53,     0,    51,     0,     0,     0,    25,
      38,    46,    41,     0,    56,    54,     0,    24,    45,     0,
      29,     0,     0,    43,     0,     0,    52,    56,     0,    20,
      28,     0,     0,     0,    58,    70,     0,     0,     0,    39,
      62,     0,     0,    61,    55,    57,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,    69,
      71,    72,    73,    74,    75,    76,    77,    78,   119,     0,
      66,     0,    27,    63,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,   123,     0,   124,
       0,     0,    68,     0,    49,    60,   104,   106,   120,   110,
       0,     0,     0,   119,   107,   105,     0,   114,   113,   120,
       0,     0,     0,     0,     0,     0,   115,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    81,   108,   112,
       0,   114,   115,   103,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   100,    99,   101,   102,     0,     0,     0,
      79,    80,    70,    70,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
     122,     0,    89,    70,     0,     0,    87,    88,   117,   116,
     118,     0,    83,    84,     0,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,  -128,   339,  -128,  -128,   351,    -6,  -128,
    -128,   330,  -128,  -128,  -128,  -128,   281,  -128,  -128,  -128,
     346,  -128,   319,  -128,   295,     8,  -128,   -14,  -128,  -128,
     296,   280,  -128,   277,  -128,   234,   278,  -128,   348,  -128,
    -118,  -127,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
     -94,   -84,  -105,  -128,  -103
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,     7,    23,    24,    69,    10,
      15,    16,    17,    55,    64,    65,    66,    89,    19,    30,
      31,    43,    44,    45,    70,    71,    34,    35,    51,    74,
      75,    95,   103,   104,   112,   113,   106,   161,    36,    49,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     219,   220,   173,   174,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     138,   162,   139,   153,     1,   177,   156,    25,    14,    41,
     110,     4,    29,    33,   221,   179,   138,    25,   139,   138,
      52,   139,    20,   138,    29,   139,   162,   243,    33,   162,
     248,     8,     4,    42,   111,   146,   148,   147,   148,   125,
      21,    22,    20,   178,   138,   126,   180,    26,   138,    63,
     139,   138,   172,   139,   126,   126,   181,   182,   183,    78,
      21,    22,   266,    90,     9,    37,   187,   127,    11,   189,
      73,    33,   196,   197,   198,   100,    20,   193,    87,    88,
      20,   205,   206,    33,   190,    99,   178,   146,   102,   -42,
     191,    93,    56,    73,    21,    22,    13,   102,    32,    22,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,    20,    14,   166,   167,   168,    18,    58,
     244,   245,    59,    28,   253,   254,   162,   162,    82,    83,
      46,    21,    22,   166,   167,   168,    40,   138,   138,   139,
     139,   125,    39,   250,   162,   271,   108,    83,   138,   138,
     139,   139,   144,   257,   169,   145,    50,   170,   138,   125,
     139,    48,   171,   218,   258,   259,   138,   261,   139,   127,
     146,    54,   169,   148,    57,   170,   246,   247,   205,   206,
     171,   116,   268,   247,   117,   118,   119,   127,   263,   120,
     121,    60,   264,   122,   123,   124,    20,    61,   116,    20,
      62,   117,   118,   119,    67,   125,   120,   121,   269,   247,
     122,   123,   124,    77,    21,    22,   114,    21,    22,   160,
      76,   126,   125,   270,   247,    72,    81,   116,    84,    80,
     117,   118,   119,   127,    85,   120,   121,    86,   126,   122,
     123,   124,   185,    91,   116,    92,    94,   117,   118,   119,
     127,   125,   120,   121,   265,    97,   122,   123,   124,    88,
     101,   116,   140,   143,   117,   118,   119,   126,   125,   120,
     121,   105,   274,   122,   123,   124,   142,   109,   116,   127,
     149,   117,   118,   119,   126,   125,   120,   121,   157,   154,
     122,   123,   124,   150,   151,   116,   127,   152,   117,   118,
     119,   126,   125,   184,   121,   158,   159,   122,   123,   124,
     155,   164,   176,   127,   163,   186,   188,   222,   126,   125,
     192,   209,   214,   208,   148,   210,   215,   238,   237,   239,
     127,   240,   243,   241,   242,   126,   249,   251,   262,   252,
     267,   272,   273,   275,    12,    27,    79,   127,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,    38,   207,    47,   107,    68,   165,
     115,    96,    53,    98,     0,   141,     0,     0,   260,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   212,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   213,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   194,   195,
     196,   197,   198,   -43,   -43,   -43,   -43,   -43,   -43,   205,
     206
};

static const yytype_int16 yycheck[] =
{
     105,   128,   105,   121,    40,     5,   124,    13,     5,     5,
       5,     5,    18,    19,     5,     5,   121,    23,   121,   124,
      34,   124,     5,   128,    30,   128,   153,    14,    34,   156,
      50,     0,     5,    29,    29,    53,    56,    55,    56,    29,
      23,    24,     5,   148,   149,    45,   149,    44,   153,    55,
     153,   156,   146,   156,    45,    45,   150,   151,   152,    65,
      23,    24,    49,    77,    43,    48,   160,    57,    41,   163,
      62,    77,    29,    30,    31,    89,     5,   171,    49,    50,
       5,    38,    39,    89,    50,    48,   191,    53,    94,    50,
      56,    83,    53,    85,    23,    24,    47,   103,    23,    24,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,     5,     5,     3,     4,     5,    21,    49,
     214,   215,    52,    47,   242,   243,   253,   254,    51,    52,
      22,    23,    24,     3,     4,     5,    21,   242,   243,   242,
     243,    29,     5,   237,   271,   263,    51,    52,   253,   254,
     253,   254,    49,   247,    42,    52,     5,    45,   263,    29,
     263,    25,    50,    51,   248,   249,   271,   251,   271,    57,
      53,    49,    42,    56,     5,    45,    51,    52,    38,    39,
      50,     5,    51,    52,     8,     9,    10,    57,    12,    13,
      14,    50,    16,    17,    18,    19,     5,    50,     5,     5,
      50,     8,     9,    10,     3,    29,    13,    14,    51,    52,
      17,    18,    19,    22,    23,    24,    22,    23,    24,    26,
       5,    45,    29,    51,    52,    51,     5,     5,    47,    54,
       8,     9,    10,    57,    52,    13,    14,    51,    45,    17,
      18,    19,    20,     5,     5,    53,    21,     8,     9,    10,
      57,    29,    13,    14,    15,    47,    17,    18,    19,    50,
       3,     5,    48,     5,     8,     9,    10,    45,    29,    13,
      14,     6,    16,    17,    18,    19,    49,    54,     5,    57,
      50,     8,     9,    10,    45,    29,    13,    14,     5,    49,
      17,    18,    19,    50,    50,     5,    57,    50,     8,     9,
      10,    45,    29,    13,    14,    56,     5,    17,    18,    19,
      49,    48,    46,    57,    55,     5,     7,     5,    45,    29,
      56,    50,    50,    56,    56,    51,    50,     5,    53,     5,
      57,    49,    14,    49,    11,    45,    50,    50,    49,    51,
      49,    49,    49,    49,     5,    15,    65,    57,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    23,    54,    30,    97,    59,   145,
     103,    85,    34,    88,    -1,   107,    -1,    -1,    54,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    59,    60,     5,    61,    62,    63,     0,    43,
      67,    41,    62,    47,     5,    68,    69,    70,    21,    76,
       5,    23,    24,    64,    65,    66,    44,    69,    47,    66,
      77,    78,    23,    66,    84,    85,    96,    48,    65,     5,
      21,     5,    29,    79,    80,    81,    22,    78,    25,    97,
       5,    86,    85,    96,    49,    71,    53,     5,    49,    52,
      50,    50,    50,    66,    72,    73,    74,     3,    80,    66,
      82,    83,    51,    83,    87,    88,     5,    22,    66,    74,
      54,     5,    51,    52,    47,    52,    51,    49,    50,    75,
      85,     5,    53,    83,    21,    89,    88,    47,    82,    48,
      85,     3,    66,    90,    91,     6,    94,    89,    51,    54,
       5,    29,    92,    93,    22,    91,     5,     8,     9,    10,
      13,    14,    17,    18,    19,    29,    45,    57,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   110,   112,
      48,    94,    49,     5,    49,    52,    53,    55,    56,    50,
      50,    50,    50,    98,    49,    49,    98,     5,    56,     5,
      26,    95,    99,    55,    48,    93,     3,     4,     5,    42,
      45,    50,   108,   110,   111,   112,    46,     5,   110,     5,
     112,   108,   108,   108,    13,    20,     5,   108,     7,   108,
      50,    56,    56,   108,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    54,    56,    50,
      51,    51,    51,    51,    50,    50,    49,    49,    51,   108,
     109,     5,     5,    51,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,    53,     5,     5,
      49,    49,    11,    14,   108,   108,    51,    52,    50,    50,
     108,    50,    51,    98,    98,    51,    51,   108,   109,   109,
      54,   109,    49,    12,    16,    15,    49,    49,    51,    51,
      51,    98,    49,    49,    16,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    61,    61,    62,    63,
      64,    64,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    70,    71,    71,    72,    73,    73,    74,    75,    75,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    83,    84,    84,    85,
      86,    87,    88,    88,    88,    89,    89,    90,    90,    91,
      92,    92,    93,    93,    94,    95,    96,    97,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     101,   102,   103,   103,   104,   105,   105,   106,   106,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   112,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     3,     0,     2,     1,     4,     1,
       2,     1,     3,     1,     1,     1,     3,     0,     2,     1,
       8,     1,     2,     0,     3,     2,     1,     6,     2,     1,
       3,     0,     2,     1,     3,     3,     1,     1,     4,     7,
       2,     4,     1,     3,     1,     0,     2,     2,     1,     9,
       1,     1,     3,     1,     0,     3,     0,     2,     1,     3,
       3,     1,     1,     2,     4,     3,     8,     1,     2,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     4,    10,     8,     8,     2,     2,     7,     7,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     4,
       1,     3,     1,     3,     3,     3,     6,     6,     6,     1,
       1,     4,     7,     2,     2
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
#line 28 "q1.y" /* yacc.c:1646  */
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
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 39 "q1.y" /* yacc.c:1646  */
    {fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
											fprintf(out, "MOV SP,%d\n",location+1);
											codeGen((yyvsp[0].t), out);
											fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\n");
											fprintf(out, "POP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
											return; 
											}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 50 "q1.y" /* yacc.c:1646  */
    {}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 54 "q1.y" /* yacc.c:1646  */
    {}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "q1.y" /* yacc.c:1646  */
    {}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 58 "q1.y" /* yacc.c:1646  */
    {resetFieldIndex();}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "q1.y" /* yacc.c:1646  */
    {insertType((yyvsp[0].t)->varname); currtype = strdup((yyvsp[0].t)->varname);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 64 "q1.y" /* yacc.c:1646  */
    {}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 65 "q1.y" /* yacc.c:1646  */
    {}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 68 "q1.y" /* yacc.c:1646  */
    {insertField(currtype, (yyvsp[-2].t), (yyvsp[-1].t)->varname);}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 71 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode("int"); }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 72 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode("str");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 73 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode(strdup((yyvsp[0].t)->varname));}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 77 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[-1].t); currclassptr = NULL;}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 78 "q1.y" /* yacc.c:1646  */
    {}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 81 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 82 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 85 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[-1].t);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t); currclassptr=insertClass((yyvsp[0].t)->varname, NULL);}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 91 "q1.y" /* yacc.c:1646  */
    {}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 95 "q1.y" /* yacc.c:1646  */
    {insertClassField(currclassptr, (yyvsp[-2].t)->type, (yyvsp[-1].t)->varname);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 98 "q1.y" /* yacc.c:1646  */
    {}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 99 "q1.y" /* yacc.c:1646  */
    {}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 102 "q1.y" /* yacc.c:1646  */
    {insertClassFunction(currclassptr, (yyvsp[-5].t)->type, (yyvsp[-4].t)->varname, (yyvsp[-2].p));}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 106 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 111 "q1.y" /* yacc.c:1646  */
    {}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 112 "q1.y" /* yacc.c:1646  */
    {}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 115 "q1.y" /* yacc.c:1646  */
    {}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "q1.y" /* yacc.c:1646  */
    {}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 119 "q1.y" /* yacc.c:1646  */
    {assignType((yyvsp[-2].t), (yyvsp[-1].t));}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 123 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 126 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-3].t)->varname, (yyvsp[-1].t)->val, 1); (yyvsp[-3].t)->left=NULL; (yyval.t)=(yyvsp[-3].t);}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 128 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-6].t)->varname, (yyvsp[-4].t)->val, (yyvsp[-1].t)->val); (yyvsp[-6].t)->left=NULL; (yyval.t)=(yyvsp[-6].t);}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 129 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 130 "q1.y" /* yacc.c:1646  */
    {insertFunction((yyvsp[-3].t)->varname, (yyvsp[-1].p)); (yyval.t)=(yyvsp[-3].t);}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t); currfunc=strdup((yyvsp[0].t)->varname); printf("lol3\n");}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[-2].p),(yyvsp[0].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[0].p)->next=(yyvsp[-2].p); (yyval.p)=(yyvsp[0].p);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 139 "q1.y" /* yacc.c:1646  */
    {(yyval.p)=NULL;}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 142 "q1.y" /* yacc.c:1646  */
    {(yyval.p) = createParam((yyvsp[-1].t)->type, (yyvsp[0].t)->varname);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left = (yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 147 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 150 "q1.y" /* yacc.c:1646  */
    {checkTypeValidity(currfunc, (yyvsp[-8].t)->type); 
																	(yyval.t) = makeFuncNode((yyvsp[-8].t)->type, currfunc, (yyvsp[-1].t));
																	resetLocalSpace();
																	}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 157 "q1.y" /* yacc.c:1646  */
    {//f(currclassptr);
					if(currclassptr != NULL) {
					struct Memberfunclist *entry = cFuncLookup(currclassptr,(yyvsp[0].t)->varname);
					if(entry == NULL) {
						printf("Function not declared\n"); exit(0);}
				}
				else {
					struct Gsymbol *entry = gLookup((yyvsp[0].t)->varname);
					if(entry == NULL) {
						printf("Function not declared\n"); exit(0);}
				}			
				createLocalTable((yyvsp[0].t)->varname);
				currfunc = strdup((yyvsp[0].t)->varname);
				}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 173 "q1.y" /* yacc.c:1646  */
    {checkAndCreateParam(currfunc, (yyvsp[0].p));}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 175 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[0].p),(yyvsp[-2].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[-2].p)->next=(yyvsp[0].p); (yyval.p)=(yyvsp[-2].p);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 178 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 179 "q1.y" /* yacc.c:1646  */
    {(yyval.p) = NULL;}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 182 "q1.y" /* yacc.c:1646  */
    {}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 183 "q1.y" /* yacc.c:1646  */
    {}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 186 "q1.y" /* yacc.c:1646  */
    {}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 187 "q1.y" /* yacc.c:1646  */
    {}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 190 "q1.y" /* yacc.c:1646  */
    {assignLocType((yyvsp[-2].t)->type, (yyvsp[-1].t));}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 193 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 194 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 196 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 197 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 200 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeBodyNode((yyvsp[-2].t), (yyvsp[-1].t));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 203 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeReturnNode(currclassptr ,(yyvsp[-1].t), currfunc); printf("werty\n");}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeFuncNode(typeLookup("int"), "main", (yyvsp[-1].t));}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 211 "q1.y" /* yacc.c:1646  */
    {insertMain("main", typeLookup("int"));
				createLocalTable("main");
				currfunc = strdup("main");}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONN_, typeLookup("null"), (yyvsp[-1].t),(yyvsp[0].t));}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 218 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 219 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=NULL;}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 222 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 223 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 224 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 225 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 226 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 228 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 229 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 233 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(READ_, (yyvsp[-2].t));}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 236 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(WRITE_, (yyvsp[-2].t));}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "q1.y" /* yacc.c:1646  */
    {  (yyval.t) = makeAssignNode(ASSIGN_, typeLookup("null"), (yyvsp[-3].t),(yyvsp[-1].t));}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 242 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, typeLookup("bool"), (yyvsp[-7].t), (yyvsp[-4].t), (yyvsp[-2].t));}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 243 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t), NULL);}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 246 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(WHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 249 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(BREAK_, typeLookup("null"), NULL, NULL);}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 250 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONT_, typeLookup("null"), NULL, NULL);}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 253 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 254 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 257 "q1.y" /* yacc.c:1646  */
    {struct Gsymbol *gentry = gLookup((yyvsp[-6].t)->varname);
										if(gentry==NULL) {
											printf("%s not declared\n", (yyvsp[-6].t)->varname);
											exit(0); }
										(yyvsp[-6].t)->ctype = gentry->ctype;
										struct Classtable *centry = cLookup((yyvsp[-2].t)->varname);
										if(centry != (yyvsp[-6].t)->ctype) {
											printf("Object %s is not of type %s\n",(yyvsp[-6].t)->varname, (yyvsp[-2].t)->varname);
											exit(0);
										}
										(yyval.t) = makeAssignNode(ASSIGN_, typeLookup("null"),(yyvsp[-6].t), makeFuncCallNode("new", (yyvsp[-2].t)));
										}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 271 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(PLUS_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 272 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MINUS_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 273 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MUL_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 274 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DIV_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 275 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MOD_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 276 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LT_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 277 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GT_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 278 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LTE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 279 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GTE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 280 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(EQ_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 281 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(NE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 282 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(AND_, typeLookup("bool"), (yyvsp[-2].t), (yyvsp[0].t));}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 283 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(OR_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 284 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[-1].t);}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 285 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 286 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 287 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t); }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 288 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 289 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeFuncCallNode((yyvsp[-2].t)->varname, NULL);}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 290 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeFuncCallNode((yyvsp[-3].t)->varname, (yyvsp[-1].t));}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 291 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeNullNode();}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 294 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->mid=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 295 "q1.y" /* yacc.c:1646  */
    { (yyval.t)=(yyvsp[0].t); (yyvsp[0].t)->mid=NULL;}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 298 "q1.y" /* yacc.c:1646  */
    {(yyvsp[-2].t)->left=(yyvsp[0].t); (yyval.t)=(yyvsp[-2].t);}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 299 "q1.y" /* yacc.c:1646  */
    {(yyvsp[-2].t)->left=(yyvsp[0].t); (yyval.t)=(yyvsp[-2].t);}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 300 "q1.y" /* yacc.c:1646  */
    {if(currclassptr == NULL) {
								printf("Use of self outside class not allowed\n"); exit(0); }
							(yyvsp[-2].t) = makeLeafVarNode("self", VAR_);
							(yyvsp[-2].t)->ctype = currclassptr;
							(yyvsp[-2].t)->left = (yyvsp[0].t);
							(yyval.t)=(yyvsp[-2].t);
							}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 309 "q1.y" /* yacc.c:1646  */
    {if(currclassptr == NULL) {
													printf("Use of self outside class not allowed\n"); exit(0); }
												(yyval.t) = makeClassFuncCallNode(currclassptr, (yyvsp[-3].t)->varname, (yyvsp[-1].t));
												}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 313 "q1.y" /* yacc.c:1646  */
    {struct Gsymbol *gentry = gLookup((yyvsp[-5].t)->varname);
												if(gentry == NULL) {
													printf("Object %s not declared\n", (yyvsp[-5].t)->varname); exit(0);
												}
												(yyval.t) = makeClassFuncCallNode(gentry->ctype, (yyvsp[-3].t)->varname, (yyvsp[-1].t));
												}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 319 "q1.y" /* yacc.c:1646  */
    {}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 322 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeFieldNode((yyvsp[0].t));}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 323 "q1.y" /* yacc.c:1646  */
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
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 334 "q1.y" /* yacc.c:1646  */
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
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 345 "q1.y" /* yacc.c:1646  */
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
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 357 "q1.y" /* yacc.c:1646  */
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
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 368 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[0].t)->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", (yyvsp[0].t)->varname); exit(0);}
						(yyvsp[0].t)->nodetype = ADDPTR_;
						if(temp->gentry!=NULL)
							(yyvsp[0].t)->type = temp->gentry->type;
						else
							(yyvsp[0].t)->type = temp->locentry->type;
						(yyval.t) = (yyvsp[0].t);}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2406 "y.tab.c" /* yacc.c:1646  */
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
#line 381 "q1.y" /* yacc.c:1906  */


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
