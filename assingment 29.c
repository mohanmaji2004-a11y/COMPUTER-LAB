#include <stdio.h>

int main() {
    int units;
    float bill;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    switch (units <= 100 ? 1 : units <= 200 ? 2 : 3) {
        case 1:
            bill = units * 5;
            break;
        case 2:
            bill = (100 * 5) + ((units - 100) * 7);
            break;
        case 3:
            bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
            break;
        default:
            bill = 0;
    }
    printf("Total Electricity Bill = ?%.2f\n", bill);

    return 0;
}

