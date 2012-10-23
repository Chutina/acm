#include <stdio.h>

int byte_to_int(char *cmd){
    int base = 128,i,r=0;
    for(i=0;i<8;i++){
        r += (cmd[i] - '0')*base;
        base = base >>1;
    }
    return r;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("data_1098.txt","r",stdin);
    #endif
    char cmd[9];
    unsigned int memory[32];
    int i,op,pc,accu,addr;
    while(scanf("%s",&cmd)!=EOF){
        memory[0] = byte_to_int(cmd);
        for(i=1;i<32;i++){
            scanf("%s",&cmd);
            memory[i] = byte_to_int(cmd);
        }
        pc = 0, accu = 0, i = 1;
        while(i){
            op = memory[pc]>>5;
            addr = memory[pc] & 31;
            pc ++; pc %= 32;
            switch(op){
                case 0:
                    memory[addr] = accu;
                    break;
                case 1:
                    accu = memory[addr];
                    break;
                case 2:
                    if(!accu){
                        pc = addr;
                    }
                    break;
                case 3:
                    break;
                case 4:
                    accu = (accu + 255) % 256;
                    break;
                case 5:
                    accu = (accu + 1) % 256;
                    break;
                case 6:
                    pc = addr;
                    break;
                case 7:
                    i = 0;
                    break;
            }
        }
        for (i = 7; i >= 0; i--)
            printf("%d", accu>> i & 1);
        printf("\n");
    }
    return 0;
}
