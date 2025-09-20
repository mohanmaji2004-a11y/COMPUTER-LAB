# include <stdio.h>
int main() {
    int toss;
    printf("Enter 0 for head");
    printf("1 for tail:");
    scanf("%d", &toss);

    if (toss == 0)
        printf("Head\n");
    else if (toss == 1)
        printf("Tail\n");
    else
        printf("Invalid input\n");

    return 0;
}
