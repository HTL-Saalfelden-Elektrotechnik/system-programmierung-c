
#include <stdio.h>

// Bisher haben wir immer struct bei der Variablendeklaration schreiben müssen
// Mit typedef ist das redundant

struct mystruct {
    int member1;
    float member2;
    char *member3;
};

// Hier definieren wir uns einen Aliasnamen für unsere struct
typedef struct mystruct mystruct_t;

int main() {

    // Mit Aliasnamen, kann struct vor dem Typnamen weggelassen werden
    mystruct_t var1 = {1, 2.3, "Hallo"};

    printf("member1 = %d, member2 = %f, member3 = %s\n", var1.member1, var1.member2, var1.member3);

    return 0;
}
