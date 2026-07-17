#include<stdio.h>
int main(){
	int n,i,a;
	printf("enter a number");
	scanf("%d",&n);
	a=1;
	for(i=1;i<=n;i++){
	printf("%d",a);
	a=a*2;
	}
	return 0;
}
