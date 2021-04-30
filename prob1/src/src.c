#include "general.h"

void shell() {
    system("/bin/sh");
}

void overflow_() {
    char buffer[0x80];
    read(0, buffer, 0x100);
    printf("%s\n", buffer);
}

int main() {
    PWNINIT

    while(1)
        overflow_();
}