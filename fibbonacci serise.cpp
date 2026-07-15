#include<stdio.h>
int main(){
	int a,b,sum,i,n;
	printf("enter a number");
	scanf("%d",&n);
	a=1;b=1;sum=1;
			printf(" 1\n 1\n");
	for(i=1;i<=n-2;i++){
		sum=a+b;
		a=b;
		b=sum;
		printf(" %d\n",sum);
		
	}
	return 0;
}
