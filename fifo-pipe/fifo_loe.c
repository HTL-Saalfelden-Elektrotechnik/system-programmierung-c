# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>

int main(){
char buffer[80];
FILE *stream;

if (mkfifo("my_fifo", 0600) != 0){
perror("fifo: mkfifo() failed");
return(1);
}

/* Kind-Prozess */
if (fork() == 0){ 
if ((stream = fopen("my_fifo", "w")) == NULL)
perror("fifo: Can't open FIFO for writing");

else{
fprintf(stream, "Can you hear me ?\n");
fclose(stream);
}
}


/* Eltern-Prozess */
if ((stream = fopen("my_fifo", "r")) == NULL)
perror("fifo: Can't open FIFO for reading");

else{
fgets(buffer, 80, stream);
printf("Sent from Child process: %s", buffer);
fclose(stream);
}

remove("my_fifo");
return(0);
}
