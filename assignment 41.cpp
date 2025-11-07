#include <stdio.h>
#include <math.h>

int isAutomorphic(int num) {
    long long square = (long long)num * num;
    int temp = num;
    while (temp > 0) {
        if (temp % 10 != square % 10)
            return 0;
        temp /= 10;
        square /= 10;
    }
    return 1;
}

int isNarcissistic(int num) {
    int temp = num, digits = 0, sum = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }
    return (sum == num);
}

int main() {
    int choice, num;
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Check Automorphic Number\n");
        printf("2. Check Narcissistic Number\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Exiting program...\n");
            break;
        }

        if (choice == 1 || choice == 2) {
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num <= 0) {
                printf("Please enter a positive number.\n");
                continue;
            }
        }

        switch (choice) {
            case 1:
                if (isAutomorphic(num))
                    printf("%d is an Automorphic number.\n", num);
                else
                    printf("%d is not an Automorphic number.\n", num);
                break;
            case 2:
                if (isNarcissistic(num))
                    printf("%d is a Narcissistic number.\n", num);
                else
                    printf("%d is not a Narcissistic number.\n", num);
                break;
            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
                break;
        }
    }
    return 0;
}

