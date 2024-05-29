/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LEX_TAB_H_INCLUDED
# define YY_YY_LEX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 11 "lex.y"

  #include "tab_symbol.h"
  #include "tab_instructions.h"

#line 54 "lex.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tNB = 258,                     /* tNB  */
    tID = 259,                     /* tID  */
    tIF = 260,                     /* tIF  */
    tWHILE = 261,                  /* tWHILE  */
    tELSIF = 262,                  /* tELSIF  */
    tELSE = 263,                   /* tELSE  */
    tPRINT = 264,                  /* tPRINT  */
    tRETURN = 265,                 /* tRETURN  */
    tINT = 266,                    /* tINT  */
    tVOID = 267,                   /* tVOID  */
    tERROR = 268,                  /* tERROR  */
    tADDRESS = 269,                /* tADDRESS  */
    tADD = 270,                    /* tADD  */
    tSUB = 271,                    /* tSUB  */
    tMUL = 272,                    /* tMUL  */
    tDIV = 273,                    /* tDIV  */
    tLT = 274,                     /* tLT  */
    tGT = 275,                     /* tGT  */
    tNOT = 276,                    /* tNOT  */
    tEQ = 277,                     /* tEQ  */
    tNE = 278,                     /* tNE  */
    tGE = 279,                     /* tGE  */
    tLE = 280,                     /* tLE  */
    tASSIGN = 281,                 /* tASSIGN  */
    tAND = 282,                    /* tAND  */
    tOR = 283,                     /* tOR  */
    tLBRACE = 284,                 /* tLBRACE  */
    tRBRACE = 285,                 /* tRBRACE  */
    tLPAR = 286,                   /* tLPAR  */
    tRPAR = 287,                   /* tRPAR  */
    tSEMI = 288,                   /* tSEMI  */
    tCOMMA = 289                   /* tCOMMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "lex.y"
 int nb; char str[16]; 

#line 108 "lex.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);

/* "%code provides" blocks.  */
#line 6 "lex.y"

  int yylex (void);
  void yyerror (const char *);

#line 128 "lex.tab.h"

#endif /* !YY_YY_LEX_TAB_H_INCLUDED  */
