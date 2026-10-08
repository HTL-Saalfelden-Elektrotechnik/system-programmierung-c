// stdio.h muss eingebunden werden, damit die Standard-Streams angesprochen werden können
#include <stdio.h>

int main() {
    // printf schreibt "Hallo Welt" in stdout.
    printf("Hallo Welt\n");

    // Mit fprintf können wir den Stream angeben, in den geschrieben werden soll.
    // Hier schreiben wir "Hallo Welt" in stdout.
    fprintf(stdout, "Hallo Welt\n");

    // Hier schreiben wir "Das ist eine Fehlermeldung" in stderr.
    fprintf(stderr, "Das ist eine Fehlermeldung\n");

    return 0;
}
