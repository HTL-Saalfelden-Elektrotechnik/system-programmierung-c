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

/* Kind-Prozess1 */
if (fork() == 0){ 
if ((stream = fopen("my_fifo", "w")) == NULL)
perror("fifo: Can't open FIFO for writing");

else{
fprintf(stream, "Can you hear me 1?\n");
fclose(stream);
}
}

// --------------------------------------------------------------
/* Kind-Prozess2 */
if (fork() == 0){ 
if ((stream = fopen("my_fifo", "w")) == NULL)
perror("fifo: Can't open FIFO for writing");

else{
fprintf(stream, "Can you hear me 2?\n");
fclose(stream);
}
}

// --------------------------------------------------------------
/* Kind-Prozess3 */
if (fork() == 0){ 
if ((stream = fopen("my_fifo", "w")) == NULL)
perror("fifo: Can't open FIFO for writing");

else{
fprintf(stream, "Can you hear me 3?\n");
fclose(stream);
}
}

// ---------------------------------------------------------------------

/* Eltern-Prozess */
if ((stream = fopen("my_fifo", "r")) == NULL)
perror("fifo: Can't open FIFO for reading");

else{
fgets(buffer, 800, stream);
printf("Child process sent: %s", buffer);
fclose(stream);
}

remove("my_fifo");
return(0);
}
