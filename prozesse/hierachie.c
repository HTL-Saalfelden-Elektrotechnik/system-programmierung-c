#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){

pid_t pid1, pid2, pid3, pid4;
printf("Parent A of all: %d\n",getpid());

pid1 = fork();

if(pid1 == 0){   // A child Process. Lets say B.
    printf("Child B with id: %d and its Parent id: %d \n", getpid(),getppid());
    pid2 = fork();
    if(pid2 == 0){ // A child process. Lets say D.
        printf("Child D with id: %d and its Parent id: %d \n", getpid(),getppid());
    }
}
if(pid1 > 0){
    pid3 = fork();
    if(pid3 == 0){ // A child process. Lets say C.
        printf("Child C with id: %d and its Parent id: %d \n", getpid(),getppid());
        pid4 = fork();
        if(pid4 == 0){ // A child process. Lets say E.
            printf("Child E with id: %d and its Parent id: %d \n", getpid(),getppid());
        }

    }
}
for(int i=0; i<3; i++) 
  wait(NULL);  
}
