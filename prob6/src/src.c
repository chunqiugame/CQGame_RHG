#include "general.h"

#include <pthread.h>


char buffer[0x100];

void (*func)(char *buffer);

void read_shellcode() {
    read_n(buffer, 0x100);
    func = buffer;
}

void run_shellcode() {
    func = puts;
    // usleep(8000);
    sleep(0.5);
    if (buffer[0])
        func(buffer);
}

int main() {
    PWNINIT
    while (1) {
        int idx = read_int();
        switch (idx)
        {
        case 0:
            read_shellcode();
            break;
        
        case 1: {
            pthread_t pid;
            pthread_create(&pid, NULL, run_shellcode, NULL);
            // pthread_join(pid, NULL);
            break;
        }
        
        default:
            exit(1);
        }
    }
}