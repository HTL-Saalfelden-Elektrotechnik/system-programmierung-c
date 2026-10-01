

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Ein Array mit 5 Ganzzahlen
    int *ptr = arr; // Pointer auf das erste Element des Arrays

    // arr ist ein Array, aber in C ist der Name des Arrays
    // auch ein Zeiger auf das erste Element
    printf("Array-Elemente mit Array-Syntax:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // *(ptr + i) greift auf die Array-Elemente zu, genau wie arr[i]
    printf("\nArray-Elemente mit Pointer-Syntax:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    return 0;
}