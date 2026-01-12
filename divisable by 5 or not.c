#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%5==0){
        printf("this number divisable by 5");

    }
    else{
        printf("this number is not divisable by 5");
    }
    return 0;
}
