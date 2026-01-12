#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter a saleing price");
    scanf("%d",&sp);
    printf("enter a cost price");
    scanf("%d",&cp);
    if(sp>=cp){
        printf("profitable after sale product ");

    }
    else{
        printf("loss after sale product");
    }
    return 0;
}
