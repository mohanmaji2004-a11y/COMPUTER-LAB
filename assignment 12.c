#include <stdio.h>
#include <math.h>

int main() {
    float ci, r, p, t, amount;
    printf("Enter principle value: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);

    amount = p * pow((1 + r/100), t);   // final amount
    ci = amount - p;                    // compound interest

    printf("\nThe compound interest is: %.2f", ci);
    printf("\nThe total amount is: %.2f", amount);

    return 0;
}