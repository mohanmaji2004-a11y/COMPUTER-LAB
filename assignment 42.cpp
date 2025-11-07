#include <stdio.h>

int main() {
    int totalCookies;
    int cookiesPerBox;
    int boxesPerContainer;
    int totalBoxes;
    int totalContainers;
    int remainingCookies;
    int remainingBoxes;

    printf("Enter total number of cookies: ");
    scanf("%d", &totalCookies);

    printf("Enter number of cookies in each box: ");
    scanf("%d", &cookiesPerBox);

    printf("Enter number of boxes in each container: ");
    scanf("%d", &boxesPerContainer);

    totalBoxes = totalCookies / cookiesPerBox;
    remainingCookies = totalCookies % cookiesPerBox;

    totalContainers = totalBoxes / boxesPerContainer;
    remainingBoxes = totalBoxes % boxesPerContainer;

    printf("\n--- Packaging Results ---\n");
    printf("Number of full boxes: %d\n", totalBoxes);
    printf("Number of remaining cookies: %d\n", remainingCookies);
    printf("Number of full containers: %d\n", totalContainers);
    printf("Number of remaining boxes: %d\n", remainingBoxes);

    return 0;
}
