#include "general.h"

char black[] = "BINSHbinsh";

void run_shellcode() {
    void (*func)(void);
    char buffer[0x200] = {};
    read_n(buffer, 0x200);
    for (int i=0; i<strlen(black); i++) {
        if(strchr(buffer, black[i]) != NULL) {
            exit(0);
        }
    }
    func = buffer;
    func();
}

int main() {
    PWNINIT
    run_shellcode();   
}