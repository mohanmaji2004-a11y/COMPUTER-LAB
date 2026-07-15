#include<stdio.h>
int main(){
	int a,n,i;
	printf("enter  a number");
	scanf("%d",&n);
	a=1;
	for(n!=0){
	a=a+1;
	n=n/10;
	}
	printf("%d",a);
	return 0;
}
