#include <stdio.h>

int main() {
    int num1, num2, num3, greatest;

    printf("Enter three integers (positive or negative): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3) {
        printf("Result: All three numbers are equal\n");
    } 
    else {
        greatest = num1;
        if (num2 > greatest)
            greatest = num2;
        if (num3 > greatest)
            greatest = num3;

        printf("Result: The greatest number is %d\n", greatest);

        if (num1 > 0 && num2 > 0 && num3 > 0)
            printf("Classification: All +ve numbers\n");
        else if (num1 < 0 && num2 < 0 && num3 < 0)
            printf("Classification: All -ve numbers\n");
        else
            printf("Classification: Mixed numbers\n");
    }

    return 0;
}
