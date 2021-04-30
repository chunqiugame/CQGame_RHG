#include "general.h"

void shell() {
    system("/bin/sh");
}

void work() {
    char buffer[0x80];
    read_n(buffer, 0x80);
    printf(buffer);
}

int main() {
    PWNINIT
    while (1)
        work();
}
