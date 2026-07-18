#include<stdio.h>
int main(){
	int a ,n,i;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0){
	a=n%10;
	i=i+a;
	n=n/10;
	}
		printf("the digit is %d",i);
	
	return 0;
}
