/*
Man kann mit Zeigern Rechnen (addieren und subtrahieren). Beim Rechnen
mit Zeigern wird automatisch die Größe des Grunddatentyps berücksichtigt
(aus diesem Grund funktioniert Pointerarithmetik nur mit typisierten Zeigern).

Pointerarithmetik wird oft im Kontext von Arrays und dynamischen Datenstrukturen verwendet.
Im Kontext von Array wird Pointerarithmetik für den Zugriff auf
einzelne Arrayelemente verwendet. Wenn man z.B. einen Pointer hat, der auf den
Anfang des Arrays zeigt, dann kann man z.B. auf das 3. Element (Element mit Index 2) zugreifen,
indem man 2 zum Pointer dazuaddiert.
*/


#include <stdio.h>

typedef int mytype;

mytype array[5] = {1, 2, 3, 4, 5};

int main() {
    // misst Typ int in Bytes, nicht Länge des Arrays
    printf("sizeof(mytype) = %ld\n", sizeof(mytype));

    // misst Array in Bytes
    printf("sizeof(array) = %ld\n", sizeof(array));

    mytype* ptr1 = array;
    printf("Zeiger ptr1 speichert die Adresse %p und zeigt auf den Wert %d.\n", ptr1, *ptr1);

    mytype* ptr2 = ptr1 + 1;
    printf("Zeiger ptr2 speichert die Adresse %p und zeigt auf den Wert %d.\n", ptr2, *ptr2);

    mytype* ptr3 = ptr2 + 1;
    printf("Zeiger ptr3 speichert die Adresse %p und zeigt auf den Wert %d.\n", ptr3, *ptr3);

    mytype* ptr4 = ptr3 - 2;
    printf("Zeiger ptr4 speichert die Adresse %p und zeigt auf den Wert %d.\n\n", ptr4, *ptr4);

    // Iterieren über die einzelnen Array Elemente mittels Pointerarithmetik
    printf("Addresse direkt hinter dem Array: %p\n", array + 5);
    for (mytype* p = array; p < array + 5; p++) {
        printf("%p: %d\n", p, *p);
    }
}