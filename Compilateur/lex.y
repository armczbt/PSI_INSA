%{
#include <stdio.h>
#include <stdlib.h>
%}

%code provides {
  int yylex (void);
  void yyerror (const char *);
}

%code requires {
  #include "tab_symbol.h"
  #include "tab_instructions.h"
}

%union { int nb; char str[16]; }

%left tADD tSUB
%left tMUL tDIV

%token <nb> tNB
%token <str> tID
%token <nb> tIF
%token <nb> tWHILE
%token tELSIF tELSE tPRINT tRETURN tINT tVOID tERROR tADDRESS
%token tADD tSUB tMUL tDIV tLT tGT tNOT tEQ tNE tGE tLE tASSIGN tAND tOR tLBRACE tRBRACE tLPAR tRPAR tSEMI tCOMMA 


%%

program:
        | program function_declaration {} 
        ;

function_declaration: tINT tID tLPAR parameter_decla tRPAR tLBRACE statements tRBRACE {} 
                    | tVOID tID tLPAR parameter_decla tRPAR tLBRACE statements tRBRACE {} 
                    ;

function_call: tID tLPAR parameter_call tRPAR {} 
              ;

parameter_decla: 
                | tINT tID {addSymbol($2,false);} 
                | parameter_decla tCOMMA tINT tID {addSymbol($4,false); initVar($4);} 
                | tINT tMUL tID {addSymbol($3,true);} 
                | parameter_decla tCOMMA tINT tMUL tID {addSymbol($5,true);} 
                | tVOID {} 
                ;

parameter_call: expression {} 
                | parameter_call tCOMMA expression {} 
                ;


statements: 
            | statements statement {} 
            ;

statement: assign tSEMI {} 
            | function_call tSEMI {}
            | declaration  {} 
            | if_statement {} 
            | while_statement {} 
            | print_statement {} 
            | tRETURN expression tSEMI {} 
            ;

assign:   tID tASSIGN expression {initVar($1);COP(getVarAddress($1), getLastAddr()-1); freeTmp();}
        | tMUL tID tASSIGN expression {checkInit($2);COP_INDIRECT_G(getVarAddress($2), getLastAddr()-1); freeTmp();}
        ;

declaration: tINT decla tSEMI
            ;

decla:  decla tCOMMA decla
      | tID {addSymbol($1,false);}
      | tID tASSIGN expression {freeTmp(); addSymbol($1,false); initVar($1);}
      | tMUL tID {addSymbol($2,true);}
      ;


expression:   expression tADD expression {
                ADD(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
                }
            
            | expression tSUB expression {
                SOU(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
            }

            | expression tMUL expression {
                MUL(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
            } 

            | expression tDIV expression {
                DIV(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
            } 

            | tLPAR expression tRPAR {} 
            | function_call {} 
            | atom
            ;

atom: tID {
            checkInit($1);
            addTmp();
            COP(getLastAddr()-1, getVarAddress($1));
    } 
    | tNB {
      //printf("Nombre -> %d\n", $1);
      addTmp();
      AFC(getLastAddr() - 1, $1);
    } 
    | tMUL tID {
            checkInit($2);
            addTmp();
            COP_INDIRECT_D(getLastAddr()-1, getVarAddress($2));
    } 
    | tADDRESS tID {
            addTmp();
            AFC(getVarAddress($2), getLastAddr()-1);
    }
    ;


test: expression tEQ expression   {
                EQU(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
                } 
      | expression tGE expression { 
                addTmp();
                // a>=b    -> Adresse de a=last-3 , Adresse de b=last-2 , Adresse de Temp=last-1
                EQU(getLastAddr() - 1, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de EQ au dessus de la pile
                SUP(getLastAddr() - 2, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de SUP a la place de b
                ADD(getLastAddr() - 3, getLastAddr() - 2, getLastAddr() - 1); // On aditione les resultats de EQ et de SUP pour avoir le resultat du GE
                freeTmp(); //  On libere l'adrese -1 qui contenait Tmp puis EQ. 
                freeTmp(); //  On libere l'adrese -2 qui contenait b puis SUP. Ce qui nous laisse en haut de la pile (adresse -1) le resultat du <=.
              } 
      | expression tGT expression {
                SUP(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
              } 
      | expression tLE expression { 
                addTmp();
                // a<=b    -> Adresse de a=last-3 , Adresse de b=last-2 , Adresse de Temp=last-1
                EQU(getLastAddr() - 1, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de EQ au dessus de la pile
                INF(getLastAddr() - 2, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de INF a la place de b
                ADD(getLastAddr() - 3, getLastAddr() - 2, getLastAddr() - 1); // On aditione les resultats de EQ et de INF pour avoir le resultat du GE
                freeTmp(); //  On libere l'adrese -1 qui contenait Tmp puis EQ. 
                freeTmp(); //  On libere l'adrese -2 qui contenait b puis INF. Ce qui nous laisse en haut de la pile (adresse -1) le resultat du <=.
              }  
      | expression tLT expression {
                INF(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
              } 
      ;



if_statement: tIF tLPAR test tRPAR 
              
              { 
                int ligne = JMF(0, getLastAddr()-1);//on recupere la ligne a laquelle on genere une intruction de saut conditionel
                $1 = ligne; // on stocke la ligne dans le token tIF
              }
              
              tLBRACE 

              {
                freeTmp(); // on libère la valeur temporaire test
              }

              statements tRBRACE
               
              {
                int current = get_nb_lines_asm(); // derniere ligne ecrite
                PATCH($1,current+2); // on remplace l'adresse de jump JMF du IF par l'adresse derniere ligne +2 (car adresse derniere ligne +1 ça va etre pour l'instruction JMP du else et donc la +2 sera le debut du else ou si le else est vide la fin du if)
                int ligne = JMP(0); // jump du else
                $1 = ligne;
              } 
              
              else_statement 

              {
                int current = get_nb_lines_asm(); // derniere ligne ecrite
                PATCH($1,current+1); // on remplace l'adresse de jump JMP du ELSE par l'adresse de la dernière ligne +1
              } 
                ;

elsif_statement: 
                | tELSIF tLBRACE statements tRBRACE {} 
                ;


else_statement: 
                | tELSE tLBRACE statements tRBRACE {} 
                ;

while_statement: tWHILE 
                  {
                    $1 = get_nb_lines_asm() +1; // on enregistre la ligne de début du calcul de test   
                  }
                  
                  tLPAR test tRPAR 
                  {
                    int ligne_JMF = JMF(0,getLastAddr()-1); // on génère intruction saut conditionnel
                    $<nb>2 = ligne_JMF; // on save la ligne du JMF dans $2
                    freeTmp(); //libérer la valeur temporaire test
                  }

                  tLBRACE statements 

                  tRBRACE 
                  {
                    int current = get_nb_lines_asm(); // derniere ligne ecrite
                    PATCH($<nb>2, current+2); // on patch le jump conditionel en indiquant de sauter à current+2 (car current+1=JMP et current+2=ligne après le JMP)

                    int _ = JMP($1); // on saute au début des calculs de test
                  } 
                ;

print_statement: tPRINT tLPAR expression tRPAR tSEMI {PRI(getLastAddr() - 1);freeTmp();} 
                ;



%%

void yyerror(const char *msg) {
  fprintf(stderr, "error: %s\n", msg);
  exit(1);
}

int main(void) {
  //yydebug = 1;
  //printf("\n\n");
  yyparse();
  printTI();
  //printTS();
}