import sys

f = sys.argv
if len(f)>2:
    exit(1)

print("----------INTERPRETER----------")

mem = [0]*256

with open(f[1],'r') as file:
    lines = file.readlines()
    asm = [[int(x) for x in l.strip().split()] for l in lines]


ip=0
while ip<len(asm):

    if asm[ip][0]==1: # ADD
        mem[asm[ip][1]]=mem[asm[ip][2]]+mem[asm[ip][3]]
        
    elif asm[ip][0]==2: # MUL
        mem[asm[ip][1]]=mem[asm[ip][2]]*mem[asm[ip][3]]
    
    elif asm[ip][0]==3: # SOU
        mem[asm[ip][1]]=mem[asm[ip][2]]-mem[asm[ip][3]]

    elif asm[ip][0]==4: # DIV (entiere)
        mem[asm[ip][1]]=mem[asm[ip][2]]//mem[asm[ip][3]]

    elif asm[ip][0]==5: # COP
        mem[asm[ip][1]]=mem[asm[ip][2]]

    elif asm[ip][0]==6: #AFC
        mem[asm[ip][1]]=asm[ip][2]

    elif asm[ip][0]==7: # JMP
        ip = asm[ip][1]
        ip -=1 # car on va l'incrémenter à la fin de la boucle

    elif asm[ip][0]==8: # JMF
        if not(mem[asm[ip][2]]):
            ip = asm[ip][1]
            ip -=1 # car on va l'incrémenter à la fin de la boucle

    elif asm[ip][0]==9: # INF
        mem[asm[ip][1]]=(mem[asm[ip][2]]<mem[asm[ip][3]])

    elif asm[ip][0]==10: # SUP
        mem[asm[ip][1]]=(mem[asm[ip][2]]>mem[asm[ip][3]])
    
    elif asm[ip][0]==11: # EQU
        mem[asm[ip][1]]=(mem[asm[ip][2]]==mem[asm[ip][3]])

    elif asm[ip][0]==12: # PRINT
        print(mem[asm[ip][1]])

    elif asm[ip][0]==13: # COP_INDIRECT G
        mem[mem[asm[ip][1]]]=mem[asm[ip][2]]

    elif asm[ip][0]==14: # COP_INDIRECT D
        mem[asm[ip][1]]=mem[mem[asm[ip][2]]]

    ip+=1



# print(mem)
print("----------END-INTERPRETER----------\n")