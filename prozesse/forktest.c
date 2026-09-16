

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>

int main(){

    pid_t pid;

    printf("Hallo fork()\n");

    switch (pid = fork())
    {
        case -1: printf("Fehler bei fork().....\n"); exit(0);
        case  0: printf("Ich bin das Kind\n"); break;
        default: printf("Ich bin der Elternprozess\n"); break;
    }
    exit(0);
}
