#include <stdbool.h>
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H



int addSymbol(char *identif, bool pointer);
int addTmp();
int freeTmp();
int getVarAddress(char* identif);
int getLastAddr();
int checkInit(char *identif);
int initVar(char *identif);
int isPointer(char *identif);
void printTS();
#endif 


/* 
ERREURS:

    1 -> Erreur dans la declaration de symbole, le symbole existe deja
    2 -> Erreur variable non trouvee getVarAddress
    3 -> Erreur tableau de symboles plein
    4 -> Erreur variable non init
    5 -> Erreur variable n'est pas un pointeur
*/