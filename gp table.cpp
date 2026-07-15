#include<stdio.h>
int main(){
	int n,i,a;
	printf("enter a number");
	scanf("%d",&n);
	a=3;
	for(i=1;i<=n;i++){
	printf("%d\n",a);
	a=a*4;
	}
	return 0;
}
