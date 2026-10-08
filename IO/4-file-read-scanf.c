
#include <stdio.h>
#include <errno.h>

int main() {

    FILE *datei = fopen("meinedatei.txt", "r");

    if (datei == NULL) {
         perror("Fehler: Konnte Datei nicht öffnen");
        return 1;
    }

    // Mit fscanf können wir auch Text aus einer Datei lesen.
    char buffer[256] = {0};
    /**
    Dabei sorgt die Formatierung für einen Schutz vor Pufferüberläufen (Buffer Overflow)
    und liest im Gegensatz zu scanf("%s") auch Leerzeichen mit ein.
    ^ bedeutet "nicht"
     **/
    fscanf(datei, "%255[^\n]", buffer);
    //fscanf(datei, "%s", buffer);

    printf("Datei-Inhalt 1: %s\n", buffer);

    // Wenn wir jetzt wieder versuchen, aus der Datei zu lesen, bekommen wir nichts zurück,
    // da die Position des Dateistreams ganz am Ende steht.
    char buffer2[256] = {0};

    fscanf(datei, "%255[^\n]", buffer2);
    printf("Datei-Inhalt 2: %s\n", buffer2);

    // Setzen wir die Position des Datei-Streams zurück
    fseek(datei, 0L, SEEK_SET);

    // Datei zu lesen liefert jetzt Daten
    char buffer3[256] = {0};
    fscanf(datei, "%255[^\n]", buffer3);
    printf("Datei-Inhalt 3: %s\n", buffer3);

    fclose(datei);

    return 0;
}