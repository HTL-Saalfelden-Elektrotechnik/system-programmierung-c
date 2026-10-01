/**
Zeiger speichern Hauptspeicheradressen. Man kann mittels Zeigern indirekt auf
Werte zugreifen. Man nennt dieses Prinzip Indirection. Mit Levels of
Indirection wird bezeichnet, wieviele Zeigerebenen im Spiel sind
(z.b. im unteren Beispiel hat Zeiger ptr2 mehr Levels of Indirection
als ptr1, und ptr3 hat mehr als ptr2).

Motivation: zweidimensionale Arrays, Komplexe Datenstrukturen (z. B. Pointer in verketteten Listen),

**/

#include <stdio.h>

int main() {
    int var1 = 42;
    int* ptr1 = &var1;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    printf("Content var1 = %d\n", var1);
    printf("Address var1: %p\n\n", &var1);

    printf("Content ptr1: %p\n", ptr1);
    printf("Address ptr1: %p\n", &ptr1);
    printf("Value ptr1 directly points to: %d\n\n", *ptr1);

    printf("Content ptr2: %p\n", ptr2);
    printf("Address ptr2: %p\n", &ptr2);
    printf("Value ptr2 directly points to: %p\n", *ptr2);
    printf("Value ptr2 indirectly points to: %d\n\n", **ptr2);

    printf("Content ptr3: %p\n", ptr3);
    printf("Address ptr3: %p\n", &ptr3);
    printf("Value ptr3 directly points to: %p\n", *ptr3);
    printf("Value ptr3 indirectly points to: %p\n", **ptr3);
    printf("Value ptr3 after three dereference operations: %d\n\n", ***ptr3);
}