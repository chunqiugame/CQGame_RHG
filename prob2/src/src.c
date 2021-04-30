#include "general.h"


int main() {
    PWNINIT

    char *buffer = malloc(0x30);
    read_n(buffer, 0x30);

    if (strncmp(buffer + 3, "HackYou", 7)) {
        return 0;
    }

    if (atol(buffer+0x10) == 0xdeadbeef) {
        system("/bin/sh");
    }
    return 1;
}
