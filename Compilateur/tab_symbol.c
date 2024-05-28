#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define maxTaille 128

/* 
ERREURS:

    1 -> Erreur dans la declaration de symbole, le symbole existe deja 
    2 -> Erreur variable non trouvee getVarAddress
    3 -> Erreur tableau de symboles plein
    4 -> Erreur variable non init
*/



typedef struct {
    char id[16];
    //enum type {INT,FLOAT,BOOL,CHAR};
    //int adresse;
    bool init;
    //int scope;
    bool is_pointer; // est un pointeur oui/non
} t_symbol;


t_symbol tableau_symboles[maxTaille];
int ts_index = 0;

int addTmp() {

    if (ts_index>=maxTaille-1){
        fprintf(stderr,"\nErreur 3 : Tableau de Symboles plein\n\n");
        exit(3); // Tableau de Symboles plein
    }

    
    tableau_symboles[ts_index].id[0] = '@';
    tableau_symboles[ts_index].id[1] = '\0';
    tableau_symboles[ts_index].init = true;
    ts_index++;
    //printf("Ajout variable temporaire -> %d\n", ts_index);
}

int getVarAddress(char* identif) {
    // On cherche la variable dans le tableau et retourne son addrese
    for (int i = 0; i < ts_index; i++) {
        if (strcmp(tableau_symboles[i].id, identif) == 0) { // Variable trouvee
            return i;
        }
    }
    fprintf(stderr,"\nErreur 2 : Variable '%s' non trouvée\n\n", identif);
    exit(2); // Variable pas trouvee
}

int getLastAddr() {
    return ts_index;
}
int freeTmp() {
    ts_index--;
}

int addSymbol(char *identif, bool pointer) {

    if (ts_index>=maxTaille-1){
        fprintf(stderr,"\nErreur 3 : Tableau de Symboles plein\n\n");
        exit(3); // Tableau de Symboles plein
    }

    // Vérifier si le symbole existe dans la table
    for (int i = 0; i < ts_index; i++) {
        if (strcmp(tableau_symboles[i].id, identif) == 0) {
            fprintf(stderr,"\nErreur 1 : Symbole '%s' existe déjà\n\n", identif);
            exit(1); // Symbole déjà présent dans la table
        }
    }
    
    strcpy(tableau_symboles[ts_index].id, identif); // Copie de id dans le tableau
    tableau_symboles[ts_index].init = false;
    tableau_symboles[ts_index].is_pointer = pointer; // est ou n'est pas un pointeur
    ts_index++;

}

int checkInit(char *identif){
    // On cherche la variable dans le tableau et leve erreur si pas init
    for (int i = 0; i < ts_index; i++) {
        if (strcmp(tableau_symboles[i].id, identif) == 0) { // Variable trouvee
            if (tableau_symboles[i].init==false){ // var non init
                fprintf(stderr, "\nErreur 4 : Variable '%s' non initialisée\n\n", identif);
                exit(4);
            }
        }
    }
    return 0;
};


int initVar(char *identif){
    // On cherche la variable dans le tableau et l'initialise
    for (int i = 0; i < ts_index; i++) {
        if (strcmp(tableau_symboles[i].id, identif) == 0) { // Variable trouvee
            tableau_symboles[i].init = true;
            return 0;
        }
    }
    fprintf(stderr,"\nErreur 2 : Variable '%s' non trouvée\n\n", identif);
    exit(2); // Variable pas trouvee
};



int isPointer(char *identif){
    // On cherche le pointeur identif dans le tableau 
    for (int i = 0; i < ts_index; i++) {
        if (strcmp(tableau_symboles[i].id, identif) == 0) { // Variable trouvee
            if (tableau_symboles[i].init==false){ // var non init
                fprintf(stderr, "\nErreur 4 : Variable '%s' non initialisée\n\n", identif);
                exit(4);
            }
            if (tableau_symboles[i].is_pointer){ // la var est un pointeur
                return 1;
            }
            return 0;
        }
    }
}


void printTS(){
    for (int i = 0; i < ts_index; i++) {
        printf("Tableau des symboles : %s\n", tableau_symboles[i].id);
    }
}

