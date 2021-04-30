#include "general.h"

void shell() {
    system("/bin/sh");
}

int is_root = 0;

void work() {
    int idx = read_int();

    switch (idx)
    {
    case 0:
        printf("input your passwd:\n");
        char passwd[0x10];
        read_n(passwd, 0x10);

        // check passwd
        if (!strcmp(passwd, &passwd)) {
            is_root = 1;
        }
        break;
    case 1:
        printf("logging out...\n");
        is_root = ~is_root;
        break;

    case 2:
        if (is_root)
            shell();
        else
            printf("please log in\n");
    default:
        break;
    }
}

int main() {
    PWNINIT

    while (1)
        work();
}