#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	printf("enter a number");
	scanf("%d",&c);
	if(a>b && a>c){
	printf("this  num is greeter %d",a);
}
	if(b>a && b>c){
	printf("this  num is greeter %d",b);
		
	}
	else{
		printf("this  num is  gretter %d ",c);
	}
	return 0;
}
