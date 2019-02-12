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
#define YYNSTATES  273

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
       0,    28,    28,    39,    51,    52,    55,    56,    59,    62,
      65,    66,    69,    72,    73,    74,    78,    79,    82,    83,
      86,    89,    92,    93,    96,    99,   100,   103,   106,   107,
     112,   113,   116,   117,   120,   123,   124,   127,   128,   129,
     130,   131,   134,   136,   139,   140,   143,   147,   148,   151,
     158,   174,   176,   179,   180,   183,   184,   187,   188,   191,
     194,   195,   197,   198,   201,   204,   209,   212,   218,   219,
     220,   223,   224,   225,   226,   227,   228,   229,   230,   234,
     237,   240,   243,   244,   247,   250,   251,   254,   255,   258,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     294,   295,   296,   299,   300,   301,   310,   314,   320,   323,
     324,   335,   346,   358,   369
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

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -43

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-43)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,     4,    11,    -7,  -166,     3,  -166,   -13,  -166,    35,
      42,  -166,  -166,    64,  -166,    12,  -166,    25,    64,    91,
    -166,  -166,  -166,     5,  -166,    62,  -166,  -166,    58,    10,
     144,  -166,    67,    97,    91,  -166,  -166,  -166,  -166,    74,
    -166,    54,   150,    57,  -166,   109,  -166,  -166,  -166,   112,
    -166,   114,  -166,  -166,  -166,    64,   179,  -166,  -166,    10,
      64,   157,    64,   207,  -166,   208,  -166,   161,  -166,   216,
     100,  -166,   177,   188,   191,  -166,   108,    64,   241,  -166,
     194,  -166,  -166,    64,   227,    64,   202,  -166,    64,    53,
    -166,   200,   252,  -166,    64,   253,  -166,   227,   146,  -166,
    -166,   206,    32,   234,  -166,   300,   213,   253,   221,  -166,
    -166,   257,    78,  -166,  -166,  -166,    75,   215,   229,   231,
     233,   300,   222,   235,   300,   287,   242,   292,   103,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,   244,
    -166,   254,  -166,  -166,  -166,    32,    28,    19,    17,    28,
      28,    28,   318,  -166,  -166,   209,  -166,   295,  -166,    28,
     294,  -166,     9,  -166,  -166,  -166,  -166,    15,  -166,   247,
      28,   142,   251,  -166,  -166,   255,  -166,   261,   362,   387,
     412,   265,   270,  -166,   512,  -166,   271,   535,    28,    30,
     319,   437,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,   272,   325,   284,   289,   328,
     326,    28,    28,  -166,   336,  -166,   558,   149,   -30,   293,
    -166,   214,   214,   168,   168,   168,   571,   571,   571,   571,
     571,   571,   558,   558,    28,   296,  -166,  -166,   300,   300,
     462,   487,   291,  -166,    28,    28,    28,   349,    28,    81,
     259,    -8,   299,   301,   558,   159,   182,  -166,   185,   300,
     302,   303,  -166,  -166,  -166,  -166,  -166,  -166,   277,  -166,
    -166,   304,  -166
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
      62,     0,     0,    61,    55,    57,   120,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,    69,
      71,    72,    73,    74,    75,    76,    77,    78,   119,     0,
      66,     0,    27,    63,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,   123,     0,   124,     0,
       0,    68,     0,    49,    60,   104,   106,   120,   109,     0,
       0,     0,   119,   107,   105,   114,   113,     0,     0,     0,
       0,     0,     0,   115,     0,    64,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,    65,     0,    81,   111,     0,   114,   115,
     103,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     100,    99,   101,   102,     0,     0,    79,    80,    70,    70,
       0,     0,     0,   108,     0,   112,   112,     0,   112,     0,
       0,     0,     0,     0,   110,     0,     0,   122,     0,    70,
       0,     0,    87,    88,    89,   117,   116,   118,     0,    83,
      84,     0,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,   339,  -166,  -166,   331,   186,  -166,
    -166,   334,  -166,  -166,  -166,  -166,   290,  -166,  -166,  -166,
     329,  -166,   297,  -166,   273,    20,  -166,   -29,  -166,  -166,
     275,   267,  -166,   262,  -166,   217,   260,  -166,   324,  -166,
    -120,  -125,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
      -9,  -165,  -105,  -166,  -103
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,     7,    23,    24,    69,    10,
      15,    16,    17,    55,    64,    65,    66,    89,    19,    30,
      31,    43,    44,    45,    70,    71,    34,    35,    51,    74,
      75,    95,   103,   104,   112,   113,   106,   160,    36,    49,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     216,   217,   172,   173,   174
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     138,   152,   139,   161,   155,    52,   239,     1,     4,     4,
      20,     8,   165,   166,   167,    41,   138,    14,   139,   138,
     245,   139,   116,   138,   175,   139,   147,   161,    21,    22,
     161,   165,   166,   167,    13,   218,     9,   110,   125,    42,
      14,   262,   176,   138,    11,   177,   125,   138,    90,   139,
     138,   168,   139,    37,   169,   186,    26,   125,    20,   170,
     100,   111,   126,    18,   126,   188,   127,    39,   146,    20,
     168,   189,    28,   169,   127,   126,    21,    22,   170,    40,
     255,   256,    73,   258,   176,   127,   116,    21,    22,   117,
     118,   119,    48,   259,   120,   121,    20,   260,   122,   123,
     124,    99,    50,    93,   -42,    73,    58,    56,   116,    59,
     125,   117,   118,   119,    32,    22,   120,   121,   249,   250,
     122,   123,   124,    54,   161,   161,   126,   144,   146,   159,
     145,   147,   125,   138,   138,   139,   139,   171,   127,   268,
     178,   179,   180,   161,   138,   138,   139,   139,   126,    20,
     184,    82,    83,   187,   138,    57,   139,    87,    88,    60,
     127,   191,    61,   138,    62,   139,    46,    21,    22,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,    67,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   205,   108,    83,    25,
     243,   244,   240,   241,    29,    33,   203,   204,    72,    25,
     265,   244,    76,    20,   116,    80,    29,   117,   118,   119,
      33,    81,   120,   121,    84,   247,   122,   123,   124,   182,
      77,    21,    22,   266,   244,   254,   267,   244,   125,    20,
      85,    63,    86,   194,   195,   196,    91,    92,    94,    97,
      88,    78,   203,   204,   126,   101,   114,    21,    22,   105,
     109,   140,   143,    33,   116,   148,   127,   117,   118,   119,
     142,   153,   120,   121,   261,    33,   122,   123,   124,   149,
     102,   150,   116,   151,   154,   117,   118,   119,   125,   102,
     120,   121,   156,   271,   122,   123,   124,   158,   157,   162,
     183,   185,   163,   190,   126,   116,   125,   206,   117,   118,
     119,   147,   207,   120,   121,   211,   127,   122,   123,   124,
     212,   214,   126,   116,   219,   234,   117,   118,   119,   125,
     235,   181,   121,   236,   127,   122,   123,   124,   237,   238,
     239,   242,   253,   246,    12,   126,   248,   125,   263,    27,
     264,   269,   270,   272,    38,    79,    68,   127,    53,    47,
      96,    98,   164,   126,   107,   115,     0,   141,     0,     0,
       0,     0,     0,     0,     0,   127,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,   257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   210,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   251,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   213,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   215,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   192,   193,
     194,   195,   196,   -43,   -43,   -43,   -43,   -43,   -43,   203,
     204
};

static const yytype_int16 yycheck[] =
{
     105,   121,   105,   128,   124,    34,    14,    40,     5,     5,
       5,     0,     3,     4,     5,     5,   121,     5,   121,   124,
      50,   124,     5,   128,     5,   128,    56,   152,    23,    24,
     155,     3,     4,     5,    47,     5,    43,     5,    29,    29,
       5,    49,   147,   148,    41,   148,    29,   152,    77,   152,
     155,    42,   155,    48,    45,    46,    44,    29,     5,    50,
      89,    29,    45,    21,    45,    50,    57,     5,    53,     5,
      42,    56,    47,    45,    57,    45,    23,    24,    50,    21,
     245,   246,    62,   248,   189,    57,     5,    23,    24,     8,
       9,    10,    25,    12,    13,    14,     5,    16,    17,    18,
      19,    48,     5,    83,    50,    85,    49,    53,     5,    52,
      29,     8,     9,    10,    23,    24,    13,    14,   238,   239,
      17,    18,    19,    49,   249,   250,    45,    49,    53,    26,
      52,    56,    29,   238,   239,   238,   239,   146,    57,   259,
     149,   150,   151,   268,   249,   250,   249,   250,    45,     5,
     159,    51,    52,   162,   259,     5,   259,    49,    50,    50,
      57,   170,    50,   268,    50,   268,    22,    23,    24,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     3,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    54,    51,    52,    13,
      51,    52,   211,   212,    18,    19,    38,    39,    51,    23,
      51,    52,     5,     5,     5,    54,    30,     8,     9,    10,
      34,     5,    13,    14,    47,   234,    17,    18,    19,    20,
      22,    23,    24,    51,    52,   244,    51,    52,    29,     5,
      52,    55,    51,    29,    30,    31,     5,    53,    21,    47,
      50,    65,    38,    39,    45,     3,    22,    23,    24,     6,
      54,    48,     5,    77,     5,    50,    57,     8,     9,    10,
      49,    49,    13,    14,    15,    89,    17,    18,    19,    50,
      94,    50,     5,    50,    49,     8,     9,    10,    29,   103,
      13,    14,     5,    16,    17,    18,    19,     5,    56,    55,
       5,     7,    48,    56,    45,     5,    29,    56,     8,     9,
      10,    56,    51,    13,    14,    50,    57,    17,    18,    19,
      50,    50,    45,     5,     5,    53,     8,     9,    10,    29,
       5,    13,    14,    49,    57,    17,    18,    19,    49,    11,
      14,     5,    51,    50,     5,    45,    50,    29,    49,    15,
      49,    49,    49,    49,    23,    65,    59,    57,    34,    30,
      85,    88,   145,    45,    97,   103,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
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
      48,    94,    49,     5,    49,    52,    53,    56,    50,    50,
      50,    50,    98,    49,    49,    98,     5,    56,     5,    26,
      95,    99,    55,    48,    93,     3,     4,     5,    42,    45,
      50,   108,   110,   111,   112,     5,   110,   112,   108,   108,
     108,    13,    20,     5,   108,     7,    46,   108,    50,    56,
      56,   108,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    54,    56,    51,    51,    51,
      51,    50,    50,    49,    50,    49,   108,   109,     5,     5,
      51,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,    53,     5,    49,    49,    11,    14,
     108,   108,     5,    51,    52,    50,    50,   108,    50,    98,
      98,    51,    51,    51,   108,   109,   109,    54,   109,    12,
      16,    15,    49,    49,    49,    51,    51,    51,    98,    49,
      49,    16,    49
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
     109,   109,   109,   110,   110,   110,   111,   111,   111,   112,
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
       3,     3,     3,     3,     1,     1,     1,     1,     4,     1,
       3,     1,     0,     3,     3,     3,     6,     6,     6,     1,
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
    {showTables();
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
    {showTables();
											fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
											fprintf(out, "MOV SP,%d\n",location+1);
											//codeGen($4, out);
											fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\n");
											fprintf(out, "POP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
											return; 
											}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "q1.y" /* yacc.c:1646  */
    {}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "q1.y" /* yacc.c:1646  */
    {}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "q1.y" /* yacc.c:1646  */
    {}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "q1.y" /* yacc.c:1646  */
    {resetFieldIndex();}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "q1.y" /* yacc.c:1646  */
    {insertType((yyvsp[0].t)->varname); currtype = strdup((yyvsp[0].t)->varname);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 65 "q1.y" /* yacc.c:1646  */
    {}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "q1.y" /* yacc.c:1646  */
    {}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 69 "q1.y" /* yacc.c:1646  */
    {insertField(currtype, (yyvsp[-2].t), (yyvsp[-1].t)->varname);}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 72 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode("int"); }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 73 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode("str");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 74 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = createTypeNode(strdup((yyvsp[0].t)->varname));}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[-1].t); currclassptr = NULL;}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 79 "q1.y" /* yacc.c:1646  */
    {}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 86 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[-1].t);}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t); currclassptr=insertClass((yyvsp[0].t)->varname, NULL);}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 92 "q1.y" /* yacc.c:1646  */
    {}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "q1.y" /* yacc.c:1646  */
    {insertClassField(currclassptr, (yyvsp[-2].t)->type, (yyvsp[-1].t)->varname);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 99 "q1.y" /* yacc.c:1646  */
    {}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 100 "q1.y" /* yacc.c:1646  */
    {}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "q1.y" /* yacc.c:1646  */
    {insertClassFunction(currclassptr, (yyvsp[-5].t)->type, (yyvsp[-4].t)->varname, (yyvsp[-2].p));}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 106 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 107 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 112 "q1.y" /* yacc.c:1646  */
    {}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 113 "q1.y" /* yacc.c:1646  */
    {}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "q1.y" /* yacc.c:1646  */
    {}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 117 "q1.y" /* yacc.c:1646  */
    {}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "q1.y" /* yacc.c:1646  */
    {assignType((yyvsp[-2].t), (yyvsp[-1].t));}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 123 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 127 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-3].t)->varname, (yyvsp[-1].t)->val, 1); (yyvsp[-3].t)->left=NULL; (yyval.t)=(yyvsp[-3].t);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[-6].t)->varname, (yyvsp[-4].t)->val, (yyvsp[-1].t)->val); (yyvsp[-6].t)->left=NULL; (yyval.t)=(yyvsp[-6].t);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 130 "q1.y" /* yacc.c:1646  */
    {insertSymbol((yyvsp[0].t)->varname, 1, 1); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "q1.y" /* yacc.c:1646  */
    {insertFunction((yyvsp[-3].t)->varname, (yyvsp[-1].p)); (yyval.t)=(yyvsp[-3].t);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 134 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t); currfunc=strdup((yyvsp[0].t)->varname); printf("lol3\n");}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 136 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[-2].p),(yyvsp[0].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[0].p)->next=(yyvsp[-2].p); (yyval.p)=(yyvsp[0].p);}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 139 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 140 "q1.y" /* yacc.c:1646  */
    {(yyval.p)=NULL;}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 143 "q1.y" /* yacc.c:1646  */
    {(yyval.p) = createParam((yyvsp[-1].t)->type, (yyvsp[0].t)->varname);}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 147 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left = (yyvsp[-1].t); (yyval.t)=(yyvsp[0].t);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 151 "q1.y" /* yacc.c:1646  */
    {checkTypeValidity(currfunc, (yyvsp[-8].t)->type); 
																	(yyval.t) = makeFuncNode((yyvsp[-8].t)->type, currfunc, (yyvsp[-1].t));
																	resetLocalSpace();
																	}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 158 "q1.y" /* yacc.c:1646  */
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
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 174 "q1.y" /* yacc.c:1646  */
    {checkAndCreateParam(currfunc, (yyvsp[0].p));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 176 "q1.y" /* yacc.c:1646  */
    {if(checkParamValidity((yyvsp[0].p),(yyvsp[-2].p))==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					(yyvsp[-2].p)->next=(yyvsp[0].p); (yyval.p)=(yyvsp[-2].p);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 179 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].p)->next=NULL; (yyval.p)=(yyvsp[0].p);}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 180 "q1.y" /* yacc.c:1646  */
    {(yyval.p) = NULL;}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 183 "q1.y" /* yacc.c:1646  */
    {}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 184 "q1.y" /* yacc.c:1646  */
    {}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "q1.y" /* yacc.c:1646  */
    {}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 188 "q1.y" /* yacc.c:1646  */
    {}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 191 "q1.y" /* yacc.c:1646  */
    {assignLocType((yyvsp[-2].t)->type, (yyvsp[-1].t));}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 194 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 195 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 197 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 198 "q1.y" /* yacc.c:1646  */
    {insertLocSymbol((yyvsp[0].t)->varname); (yyvsp[0].t)->left=NULL; (yyval.t)=(yyvsp[0].t);}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 201 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeBodyNode((yyvsp[-2].t), (yyvsp[-1].t));}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 204 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeReturnNode(currclassptr ,(yyvsp[-1].t), currfunc);}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 209 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeFuncNode(typeLookup("int"), "main", (yyvsp[-1].t));}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "q1.y" /* yacc.c:1646  */
    {insertMain("main", typeLookup("int"));
				createLocalTable("main");
				currfunc = strdup("main");}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 218 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONN_, typeLookup("null"), (yyvsp[-1].t),(yyvsp[0].t));}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 219 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 220 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=NULL;}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 223 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 224 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 225 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 226 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 227 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 228 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 229 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 230 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 234 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(READ_, (yyvsp[-2].t));}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIONode(WRITE_, (yyvsp[-2].t));}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 240 "q1.y" /* yacc.c:1646  */
    {  (yyval.t) = makeAssignNode(ASSIGN_, typeLookup("null"), (yyvsp[-3].t),(yyvsp[-1].t));}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 243 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, typeLookup("bool"), (yyvsp[-7].t), (yyvsp[-4].t), (yyvsp[-2].t));}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeIfElseNode(IF_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t), NULL);}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 247 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(WHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 250 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(BREAK_, typeLookup("null"), NULL, NULL);}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 251 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(CONT_, typeLookup("null"), NULL, NULL);}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DOWHILE_, typeLookup("bool"), (yyvsp[-5].t), (yyvsp[-2].t));}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 258 "q1.y" /* yacc.c:1646  */
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
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 272 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(PLUS_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 273 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MINUS_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 274 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MUL_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 275 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(DIV_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 276 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(MOD_, typeLookup("int"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 277 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LT_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 278 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GT_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 279 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(LTE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 280 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(GTE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 281 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(EQ_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 282 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(NE_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 283 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(AND_, typeLookup("bool"), (yyvsp[-2].t), (yyvsp[0].t));}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 284 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeOperatorNode(OR_, typeLookup("bool"), (yyvsp[-2].t),(yyvsp[0].t));}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 285 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[-1].t);}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 286 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 287 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 288 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t); }
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 289 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=(yyvsp[0].t);}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 290 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeFuncCallNode((yyvsp[-3].t)->varname, (yyvsp[-1].t));}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 291 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=makeNullNode();}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 294 "q1.y" /* yacc.c:1646  */
    {(yyvsp[0].t)->mid=(yyvsp[-2].t); (yyval.t)=(yyvsp[0].t);}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 295 "q1.y" /* yacc.c:1646  */
    { (yyval.t)=(yyvsp[0].t); (yyvsp[0].t)->mid=NULL;}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 296 "q1.y" /* yacc.c:1646  */
    {(yyval.t)=NULL;}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 299 "q1.y" /* yacc.c:1646  */
    {(yyvsp[-2].t)->left=(yyvsp[0].t); (yyval.t)=(yyvsp[-2].t);}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 300 "q1.y" /* yacc.c:1646  */
    {(yyvsp[-2].t)->left=(yyvsp[0].t); (yyval.t)=(yyvsp[-2].t);}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 301 "q1.y" /* yacc.c:1646  */
    {if(currclassptr == NULL) {
								printf("Use of self outside class not allowed\n"); exit(0); }
							(yyvsp[-2].t) = makeLeafVarNode("self", VAR_);
							(yyvsp[-2].t)->ctype = currclassptr;
							(yyvsp[-2].t)->left = (yyvsp[0].t);
							(yyval.t)=(yyvsp[-2].t);
							}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 310 "q1.y" /* yacc.c:1646  */
    {if(currclassptr == NULL) {
													printf("Use of self outside class not allowed\n"); exit(0); }
												(yyval.t) = makeClassFuncCallNode(currclassptr, (yyvsp[-3].t)->varname, (yyvsp[-1].t));
												}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 314 "q1.y" /* yacc.c:1646  */
    {struct Gsymbol *gentry = gLookup((yyvsp[-5].t)->varname);
												if(gentry == NULL) {
													printf("Object %s not declared\n", (yyvsp[-5].t)->varname); exit(0);
												}
												(yyval.t) = makeClassFuncCallNode(gentry->ctype, (yyvsp[-3].t)->varname, (yyvsp[-1].t));
												}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 320 "q1.y" /* yacc.c:1646  */
    {}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 323 "q1.y" /* yacc.c:1646  */
    {(yyval.t) = makeFieldNode((yyvsp[0].t));}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 324 "q1.y" /* yacc.c:1646  */
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
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 335 "q1.y" /* yacc.c:1646  */
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
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 346 "q1.y" /* yacc.c:1646  */
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
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 358 "q1.y" /* yacc.c:1646  */
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
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 369 "q1.y" /* yacc.c:1646  */
    {struct TableEntry *temp = lookup((yyvsp[0].t)->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", (yyvsp[0].t)->varname); exit(0);}
						(yyvsp[0].t)->nodetype = ADDPTR_;
						if(temp->gentry!=NULL)
							(yyvsp[0].t)->type = temp->gentry->type;
						else
							(yyvsp[0].t)->type = temp->locentry->type;
						(yyval.t) = (yyvsp[0].t);}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2407 "y.tab.c" /* yacc.c:1646  */
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
#line 382 "q1.y" /* yacc.c:1906  */


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
