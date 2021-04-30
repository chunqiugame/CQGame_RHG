#include "general.h"

void overflow_() {
    char buffer[0x40];
    read(0, buffer, 0x100);
    printf("%s\n", buffer);
}

int main() {
    PWNINIT

    overflow_();
}
