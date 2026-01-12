#include<stdio.h>
int main(){
	int n;
	printf("enter a 3 digit number");
	scanf("%d",&n);
	if(n>99 && n<1000){
	printf("this is 3 digit number");
		
	}
	else{
		printf("this is not 3 digit number");
	}
	return 0;
}
