#include "general.h"

void shell() {
    system("/bin/sh");
}

void work() {
    char buffer[0x30];
    int size = read_int();
    if (size > 0x30) {
        printf("To large!!!\n");
    } else {
        read(0, buffer, size);
    }
}

int main() {
    PWNINIT
    work();
}