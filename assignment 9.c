#include <stdio.h>

int main() {
    int a = 20, b = 15, c;

    c = a;   // store a in c
    a = b;   // assign b to a
    b = c;   // assign c to b

    printf("The swapped numbers are: a = %d, b = %d\n", a, b);

    return 0;
}