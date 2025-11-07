#include <stdio.h>

void printSpiral(int n) {
    int a[n][n];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            a[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                a[bottom][i] = num++;
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }

    printSpiral(n);
    return 0;
}
