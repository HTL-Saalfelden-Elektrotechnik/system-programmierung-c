#include <stdio.h>

/*
Der Adressoperator & gibt die Speicheradresse einer Variablen zurück.
Der Dereferenzierungsoperator * ermöglicht den Zugriff auf den Wert, auf den der Pointer zeigt.
 */
int main() {
    int x = 10;
    int *ptr = &x; // Pointer speichert die Adresse von x

    printf("Wert von x: %d\n", x);
    printf("Adresse von x: %p\n", &x);
    printf("Pointer ptr zeigt auf Adresse: %p\n", ptr);
    printf("Wert, auf den ptr zeigt: %d\n", *ptr);

    return 0;
}