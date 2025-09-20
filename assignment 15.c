#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float n,x,y;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    n = (b*b - (4*a*c));
    x = ((-b) + sqrt(n)) / (2*a);
    y = ((-b) - sqrt(n)) / (2*a);
    printf("the square root is: %.2f", x);
    printf(" and: %.2f", y);
    return 0;
}