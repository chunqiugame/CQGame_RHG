#include "general.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char buffer[0x200] = {};

int main() {
    PWNINIT
    read_n(buffer, 0x200);
    for (int i=0; i<0x200; i++) {
        if (buffer[i] && !isprint(buffer[i]) && buffer[i] != 0xa) {
            printf("bad value at %d: %c\n", i, buffer[i]);
            exit(-1);
        }
    }
    asm("mov %0, %%eax;"
	    "call *%%eax"
	    :
	    : "r"(buffer) ); 
}