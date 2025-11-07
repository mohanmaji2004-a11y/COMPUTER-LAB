#include <stdio.h>

int main() {
    int number;
    char choice;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("\nChoose an operation to perform:\n");
    printf("a) Check if the number is a Buzz number\n");
    printf("b) Check if the number is even or odd\n");
    printf("c) Check if the number is positive or negative\n");

    printf("Enter your choice (a/b/c): ");
    scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline

    switch (choice) {
        case 'a':
        case 'A':
            if (number % 7 == 0 || number % 10 == 7)
                printf("%d is a Buzz number\n", number);
            else
                printf("%d is not a Buzz number\n", number);
            break;

        case 'b':
        case 'B':
            if (number % 2 == 0)
                printf("%d is an even number\n", number);
            else
                printf("%d is an odd number\n", number);
            break;

        case 'c':
        case 'C':
            if (number > 0)
                printf("%d is a positive number\n", number);
            else if (number < 0)
                printf("%d is a negative number\n", number);
            else
                printf("The number is zero\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
