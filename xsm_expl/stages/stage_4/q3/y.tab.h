/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    VAR = 259,
    BEG = 260,
    END = 261,
    READ = 262,
    WRITE = 263,
    IF = 264,
    THEN = 265,
    ELSE = 266,
    WHILE = 267,
    DO = 268,
    ENDWHILE = 269,
    ENDIF = 270,
    BREAK = 271,
    CONTINUE = 272,
    REPEAT = 273,
    UNTIL = 274,
    DECL = 275,
    ENDDECL = 276,
    INT = 277,
    STR = 278,
    PLUS = 279,
    MINUS = 280,
    MUL = 281,
    DIV = 282,
    LT = 283,
    GT = 284,
    LTE = 285,
    GTE = 286,
    NE = 287,
    EQ = 288
  };
#endif
/* Tokens.  */
#define NUM 258
#define VAR 259
#define BEG 260
#define END 261
#define READ 262
#define WRITE 263
#define IF 264
#define THEN 265
#define ELSE 266
#define WHILE 267
#define DO 268
#define ENDWHILE 269
#define ENDIF 270
#define BREAK 271
#define CONTINUE 272
#define REPEAT 273
#define UNTIL 274
#define DECL 275
#define ENDDECL 276
#define INT 277
#define STR 278
#define PLUS 279
#define MINUS 280
#define MUL 281
#define DIV 282
#define LT 283
#define GT 284
#define LTE 285
#define GTE 286
#define NE 287
#define EQ 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "q3.y" /* yacc.c:1909  */
struct tnode *t;

#line 123 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
