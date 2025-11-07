#include <stdio.h>
int main() {
    int age;
    int choice;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        choice = 1;
    } else {
        choice = 0;
    }
    switch (choice) {
        case 1:
            printf("You are eligible.\n");
            break;
        case 0:
            printf("You are not eligible.\n");
            break;
        default:
            printf("Invalid input.\n");
            break;
    }
    return 0;
}
