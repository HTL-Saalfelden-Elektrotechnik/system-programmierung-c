# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void main (void){

pid_t pid;
pid = getpid();
printf ("Meine PID = %d \n", pid);

pid = getppid();
printf ("Meine Eltern-PID = %d \n", pid);
}


