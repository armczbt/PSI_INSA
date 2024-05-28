
%option noyywrap
%option noinput
%option nounput

%{
#include <stdio.h>
#include <stdlib.h>
#include "lex.tab.h"
%}




%%


[0-9]+            { yylval.nb = (int)strtol(yytext,NULL,10);
                    return tNB; }  /* Integer */

0x[0-9A-Fa-f]+    { int dec = (int)strtol(yytext, NULL, 10);
                    yylval.nb = dec;
                    return tNB;} /* Hexadecimal integer */

"if"                { return tIF;}        /* If */  
"else if"           { return tELSIF;}     /* Else if */
"else"              { return tELSE;}      /* Else */
"while"             { return tWHILE;}     /* While */
"print"             { return tPRINT;}     /* Print */
"return"            { return tRETURN;}    /* Return */
"int"               { return tINT;}       /* Int */
"void"              { return tVOID;}      /* Void */


[/][/].*            {}                     /* One line comment */
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/  {}                     /* Multi line comment */

"&"              { return tADDRESS;}    /* Address */
"+"               { return tADD;}    /* Addition */
"-"               { return tSUB;}    /* Subtraction */
"*"               { return tMUL;}    /* Multiplication */
"/"               { return tDIV;}    /* Division */
"<"               { return tLT;}     /* Less Than */
">"               { return tGT;}     /* Greater Than */
"!"               { return tNOT;}    /* Logical NOT */
"=="              { return tEQ;}     /* Equal */
"!="              { return tNE;}     /* Not Equal */
">="              { return tGE;}     /* Greater Than or Equal */
"<="              { return tLE;}     /* Less Than or Equal */
"="               { return tASSIGN;} /* Assign */
"&&"              { return tAND;}    /* Logical AND */
"||"              { return tOR;}     /* Logical OR */
"{"               { return tLBRACE;} /* Left Brace */
"}"               { return tRBRACE;} /* Right Brace */
"("               { return tLPAR;}   /* Left Parenthesis */
")"               { return tRPAR;}   /* Right Parenthesis */
";"               { return tSEMI;}   /* Semicolon */
","               { return tCOMMA;}  /* Comma */

[ \t\n]      {}    /* Ignore whitespace */

[a-zA-Z][a-zA-Z0-9]* { strcpy(yylval.str, yytext); return tID;}  /* Identifier */

.                 { printf("tERROR\n"); return tERROR;}  /* Unkwnown characters */






%%
