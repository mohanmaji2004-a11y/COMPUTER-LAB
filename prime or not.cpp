#include<stdio.h>
int main(){
	int n,i,a;
	printf("enter a number");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++){
	if(n%i==0){
		printf("the number is not prime");
	}
	else{
		printf("the number is prime");
	}
	break;
	}
	return 0;
}
