#include <stdio.h>
int main(){
    int n, a=0, b=1, S=0, x=0;
    printf ("enter your number:");
    scanf("%d", &n);
    for (int i=1 ; i<=n ;i++){
        printf ("%d",a);
        S=a+S ;
        x=a+b ;
        a=b ;
        b=x ;
    }
    printf ("%d",S) ;
    return 0;
}
