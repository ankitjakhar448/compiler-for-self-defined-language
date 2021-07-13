/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2058 of yacc.c  */
#line 30 "yacc.y"
int int_val;float real_val;char char_val;  char* id;

struct temp{
	int int_val;
	float real_val;
	char char_val;
	char string_val[200];
} tmp;





/* Line 2058 of yacc.c  */
#line 126 "yacc.tab.h"
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
