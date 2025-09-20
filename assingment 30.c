#include <stdio.h>
int main() {
    int marks;
    int gradeGroup;
    printf("Enter total marks (0–100): ");
    scanf("%d", &marks);
    if (marks >= 95)
        gradeGroup = 1;
    else if (marks >= 90)
        gradeGroup = 2;
    else if (marks >= 80)
        gradeGroup = 3;
    else if (marks >= 70)
        gradeGroup = 4;
    else
        gradeGroup = 5;
    switch (gradeGroup) {
        case 1:
            printf("Grade: A+\n");
            break;
        case 2:
            printf("Grade: A\n");
            break;
        case 3:
            printf("Grade: B\n");
            break;
        case 4:
            printf("Grade: C\n");
            break;
        case 5:
            printf("Grade: F\n");
            break;
        default:
            printf("Invalid marks entered.\n");
    }

    return 0;
}

