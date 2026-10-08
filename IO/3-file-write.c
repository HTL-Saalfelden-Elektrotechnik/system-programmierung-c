#include <stdio.h>

// errno.h erlaubt es, den Grund für Fehler herauszufinden (benötigt für perror).
#include <errno.h>

int main() {
    // Zuerst müssen wir eine neue Datei anlegen
    FILE *datei = fopen("meinedatei.txt", "w");

    // überprüfen, ob die Datei auch wirklich angelegt wurde
    // Wenn bei fopen ein Fehler passiert ist, dann wird ein Null-Pointer zurückgegeben
    if (datei == NULL) {
        // perror gibt die übergebene Fehlermeldung auf stderr aus,
        // und hängt zusätzlich noch einen String dran, der die Fehlerursache beschreibt
        perror("Fehler: Konnte Datei nicht anlegen");
        return 1;
    }

    // Mit fprintf können wir auch Text in die Datei schreiben.
    fprintf(datei, "Diesen Text schreiben wir in die Datei\n");

    // Streams sind gebuffert, daher kann es passieren, dass nicht der ganze Text in der Datei landet
    // Mit fflush können wir erzwingen, dass der Buffer geleert wird.
    fflush(datei);

    // IMMER die Datei wieder schließen, wenn sie nicht mehr gebraucht wird.
    fclose(datei);

    return 0;
}