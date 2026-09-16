#include <unistd.h>
#include <stdio.h>

int main(void){
 for(int i = 0; i < 15; ++i)
  if(!fork()){

      pid_t pid;
      pid = getpid();
      printf ("ab gehts - meine PID = %d \n", pid);
    }

 return 1; //never reached
}




