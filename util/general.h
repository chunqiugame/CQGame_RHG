#ifndef GENERAL_H
#define GENERAL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int read_n(char *buffer, int buf_size) {
    int i, result;
    for (i = 0; i < buf_size - 1; i++) {
        result = (int) read(STDIN_FILENO, buffer + i, 1);
        if (result != 1) {
            exit(1);
        } else if (buffer[i] == '\n') {
            break;
        }
    }
    buffer[i] = 0;
    return i;
}

int read_size(char *buffer, unsigned int buf_size) {
    unsigned int size = 0;
    read(STDIN_FILENO, &size, 4);
    if(size > buf_size) {
        puts("input size is too long");
        exit(1);
    }
    return (int) read(STDIN_FILENO, buffer, size);
}

int read_int() {
    char buffer[32];
    read_n(buffer, 32);
    return atoi(buffer);
}

void overflow() {
    char buffer[0x20];
    read_n(buffer, 0x100);
}

void init() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
    alarm(300);
}


#define PWNINIT init();
#endif //PROJECT_UNIT_H