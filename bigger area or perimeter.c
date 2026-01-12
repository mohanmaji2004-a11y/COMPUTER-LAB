#include<stdio.h>
int main(){
    int l,b;
    printf("enter a leanth of rectangle");
    scanf("%d",&l);
    printf("enter a cost price");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("area is bigger than perimeter");

    }
    else{
        printf("area is not bigger than perimeter");
    }
    return 0;
}
