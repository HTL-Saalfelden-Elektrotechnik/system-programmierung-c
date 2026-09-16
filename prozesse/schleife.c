

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(void){
    int i;

    if (fork())
        for (i=0; i< 5000; i++){
            printf("\n Vater-Prozess: %d", i);
        }
    else
        for (i=0; i< 5000; i++){
            printf("\n Kind-Prozess: %d", i);
        }

}

