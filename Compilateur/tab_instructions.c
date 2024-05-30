#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxTaille 1000



typedef struct {
    int code_instruction;
    int registre1;
    int registre2;
    int registre3;
} t_instr;

int ti_index = 0;

t_instr tableau_instructions[maxTaille];

int get_nb_lines_asm(){ // return last occupied line index
    return ti_index-1;
}

void printTI() {
    for (int i = 0; i < ti_index; i++) {
        printf("%d %d %d %d\n", tableau_instructions[i].code_instruction, tableau_instructions[i].registre1, tableau_instructions[i].registre2, tableau_instructions[i].registre3);
    }
}


// Fonction pour ajouter une instruction dans le tableau d'instructions
void addInstruction(int code, int reg1, int reg2, int reg3) {
    tableau_instructions[ti_index].code_instruction = code;
    tableau_instructions[ti_index].registre1 = reg1;
    tableau_instructions[ti_index].registre2 = reg2;
    tableau_instructions[ti_index].registre3 = reg3;
    ti_index++;
    }



//  ADD
void ADD(int regDest, int regSrc1, int regSrc2) {
    addInstruction(0x01, regDest, regSrc1, regSrc2);
}

//  MUL
void MUL(int regDest, int regSrc1, int regSrc2) {
    addInstruction(0x02, regDest, regSrc1, regSrc2);
}

//  SOU
void SOU(int regDest, int regSrc1, int regSrc2) {
    addInstruction(0x03, regDest, regSrc1, regSrc2);
}

//  DIV
void DIV(int regDest, int regSrc1, int regSrc2) {
    addInstruction(0x04, regDest, regSrc1, regSrc2);
}

//  COP
void COP(int regDest, int regSrc) {
    addInstruction(0x05, regDest, regSrc, 0);
}

//  AFC
void AFC(int regDest, int immediate) {
    addInstruction(0x06, regDest, immediate, 0);
}

//  JMP
int JMP(int address) {
    addInstruction(0x07, address, 0, 0);
    return ti_index-1;
}

//  JMF
int JMF(int regSrc, int address) {
    addInstruction(0x08, regSrc, address, 0);
    return ti_index-1;
}

//  INF
void INF(int regDest, int regSrc1, int regSrc2) {
    addInstruction(0x09, regDest, regSrc1, regSrc2);
}

//  SUP
void SUP(int regDest, int regSrc1, int regSrc2) {
    addInstruction(0x0A, regDest, regSrc1, regSrc2);
}

//  EQU
void EQU(int regDest, int regSrc1, int regSrc2) {
    addInstruction(0x0B, regDest, regSrc1, regSrc2);
}

// PRI
void PRI(int reg){
    addInstruction(0x0C, reg, 0, 0);
}

// COP_INDIRECT G (pointeur a gauche)
void COP_INDIRECT_G(int regDest, int regSrc){
    addInstruction(0xD, regDest, regSrc, 0);
}

// COP_INDIRECT D (pointeur a droite)
void COP_INDIRECT_D(int regDest, int regSrc){
    addInstruction(0xE, regDest, regSrc, 0);
}

// PATCH
void PATCH(int index_tab, int updated_line){ 
    tableau_instructions[index_tab].registre1 = updated_line;
}
