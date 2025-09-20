#include <stdio.h>

int main() {
    int num, i, j;

    printf("Enter a number: ");
    scanf("%d", &num);  // This line was missing

    for (i = 1; i <= num; i++) {
        printf("\nTable of %d\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}

