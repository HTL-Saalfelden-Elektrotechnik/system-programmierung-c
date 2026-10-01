//
// Created by gerha on 01.10.2026.
//

#include <stdio.h>
#include <stdlib.h>

// 1. Definition der Struktur
typedef struct {
    int count;
    char name[20];
} SharedData;

int main() {
    // 2. Speicher für die Struktur reservieren (erzeugt einen Pointer)
    SharedData *shared = malloc(sizeof(SharedData));

    // Eine lokale Variable mit dem Wert zuweisen
    int count = 42;

    // 3. Über den Pointer 'shared' wird auf das Element 'count' zugegriffen
    shared->count = count;

    // Test-Ausgabe zur Kontrolle
    printf("Der Wert im Speicher (shared->count) ist: %d\n", shared->count);

    // 4. Speicher wieder freigeben
    free(shared);

    return 0;
}
