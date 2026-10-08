

#include <stdio.h>

struct mystruct {
    int member1;
    float member2;
    char *member3;
};

int main() {

    struct mystruct var1 = {1, 2.3, "Hallo"};

    struct mystruct *ptr1 = &var1;

    // Zum Zugriff dereferenzieren und Punktoperator verwenden
    printf("member1 = %d, member2 = %f, member3 = %s\n", (*ptr1).member1, (*ptr1).member2, (*ptr1).member3);

    // Oder Elementkennzeichnungsoperator verwenden
    printf("member1 = %d, member2 = %f, member3 = %s\n", ptr1->member1, ptr1->member2, ptr1->member3);

    // Man kann auch Pointer auf einzelne Member zeigen lassen
    int *ptr2 = &var1.member1;
    printf("*ptr2 = %d\n", *ptr2);

    return 0;
}
