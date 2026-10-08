
#include <stdio.h>

// Definition struct
struct mystruct {
    int member1;
    float member2;
    char *member3;
} variable1;

int main() {

    variable1.member1 = 10;
    variable1.member2 = 12.3;
    variable1.member3 = "Hallo Welt";

    printf("member1 = %d, member2 = %f, member3 = %s\n", variable1.member1, variable1.member2, variable1.member3);


    // Beim Deklarieren bzw. Definieren neuer Variablen muss immer das struct keyword angegeben werden
    struct mystruct var2;

    var2.member1 = 20;
    var2.member2 = 23.4;
    var2.member3 = "Hello World";

    printf("member1 = %d, member2 = %f, member3 = %s\n", var2.member1, var2.member2, var2.member3);

    // Bei der Definition kann das struct gleich mit Werten befüllt werden
    struct mystruct var3 = {30, 34.5, "Hallo Leute"};

    printf("member1 = %d, member2 = %f, member3 = %s\n", var3.member1, var3.member2, var3.member3);

    return 0;
}