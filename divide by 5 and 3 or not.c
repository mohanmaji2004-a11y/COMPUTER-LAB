#include<stdio.h>
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n%3==0 && n%5==0){
	printf("this  num is divided by 5 and 3");
		
	}
	else{
		printf("this  num is not divided by 5 and 3");
	}
	return 0;
}
