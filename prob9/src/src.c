#include "general.h"

struct note {
    size_t size;
    void (*print)(char *buffer);
    char *buffer;
};

struct note* note[0x10];
unsigned int i=0;

void shell() {
    system("/bin/sh");
}

void work() {
    int idx = read_int();

    while(idx >= 0) {
        switch (idx)
        {
        case 0: {
            size_t size = read_int();
            if (size > 0x100) {
                printf("too large\n");
                exit(-1);
            }

            struct note *n;
            n = malloc(sizeof(*n));
            n->size = size;
            n->print = puts;
            n->buffer = malloc(size);
            read(0, n->buffer, size);
            note[i++] = n;
            break;
        }
        case 1: {
            int index = read_int();
            if (index > i || index < 0)
                exit(-1);
            free(note[index]->buffer);
            free(note[index]);
            break;
        }
        case 2: {
            int index = read_int();
            if (index > i || index < 0)
                exit(-1);
            struct note *n;
            n = note[index];
            n->print(n->buffer);
            break;
        }
        
        default:
            exit(-1);
        }
        idx = read_int();
    }
}

int main() {
    PWNINIT
    work();
}
