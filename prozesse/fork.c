

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(void){

    int pid;
    pid = fork();

    // Fehler abfragen
    if (pid < 0){
        printf("Fehler: fork()-Resultat");
        exit(1);
    }

    // Kind Prozess
    if (pid == 0){
        printf("Kind: PID = %i: Eltern-PID = %i\n",
                getpid(), getppid());
    }

    // Eltern Prozess
    else{
        printf("PID = %i \n",getpid());

    }
}
