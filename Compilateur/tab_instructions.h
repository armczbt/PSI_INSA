#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

int get_nb_lines_asm();
void addInstruction(int code, int reg1, int reg2, int reg3, int index);
void PRI(int reg);
void ADD(int regDest, int regSrc1, int regSrc2);
void MUL(int regDest, int regSrc1, int regSrc2);
void SOU(int regDest, int regSrc1, int regSrc2);
void DIV(int regDest, int regSrc1, int regSrc2);
void COP(int regDest, int regSrc);
void AFC(int regDest, int immediate);
void EQU(int regDest, int regSrc1, int regSrc2);
void INF(int regDest, int regSrc1, int regSrc2);
void SUP(int regDest, int regSrc1, int regSrc2);
int JMP(int address);
int JMF(int address, int regSrc);
void COP_INDIRECT_G(int regDest, int regSrc);
void COP_INDIRECT_D(int regDest, int regSrc);


void printTI();

void PATCH(int index_tab, int updated_line);
#endif 
