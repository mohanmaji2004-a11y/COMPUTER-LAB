#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int isComposite = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a composite number.\n", num);
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isComposite = 1;
                break;
            }
        }

        if (isComposite) {
            printf("%d is a composite number.\n", num);
        } else {
            printf("%d is not a composite number (it is a prime number).\n", num);
        }
    }

    return 0;
}
