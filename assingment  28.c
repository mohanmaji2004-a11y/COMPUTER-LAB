#include <stdio.h>

int main() {
    float basic, hra, ta, da, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    hra = 0.20 * basic;  // HRA = 20% of basic
    ta  = 0.10 * basic;  // TA  = 10% of basic
    da  = 0.05 * basic;  // DA  = 5% of basic
    gross = basic + hra + ta + da;
    printf("\nSalary Breakdown:\n");
    printf("Basic Salary = %.2f\n", basic);
    printf("HRA (20%%)     = %.2f\n", hra);
    printf("TA (10%%)      = %.2f\n", ta);
    printf("DA (5%%)       = %.2f\n", da);
    printf("Gross Salary  = %.2f\n", gross);

    return 0;
}
