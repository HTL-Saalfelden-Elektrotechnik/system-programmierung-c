#include <stdio.h>

#include <errno.h>

int main() {

    FILE *datei = fopen("meinedatei.txt", "r");

    if (datei == NULL) {
          perror("Fehler: Konnte Datei nicht öffnen");
        return 1;
    }

    // fgetc liest einzelne Zeichen aus
    // Wenn das Ende der Datei erreicht wurde, wird EOF ausgegeben

    int zeichen;
    printf("Datei-Inhalt 1: ");
    while ((zeichen = fgetc(datei)) != EOF) {
        fputc(zeichen, stdout);
    }
    // fputc ist das Gegenstück zu fgetc
    fputc('\n', stdout);

    // Setzen wir die Position des Datei-Streams zurück
    fseek(datei, 0L, SEEK_SET);

    // fgets liest die Datei Zeilenweise ein
    // Wenn das Ende der Datei erreicht wurde, oder ein Fehler aufgetreten ist,
    // dann wird ein Null-Pointer zurückgegeben

    char buffer[256];
    printf("Datei-Inhalt 2: ");
    while (fgets(buffer, sizeof(buffer), datei) != NULL) {
        fputs(buffer, stdout);
    }
    fputc('\n', stdout);

    // Mit feof kann überprüft werden, ob das Dateiende erreicht wurde
    if (feof(datei)) {
        printf("Dateiende wurde erreicht\n");
    } else {
        perror("Ein Fehler ist aufgetreten");
    }

    fclose(datei);

    return 0;
}
