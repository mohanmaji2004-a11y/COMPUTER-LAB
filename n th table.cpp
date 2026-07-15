#include<stdio.h>
int main(){
	int n,i;
	printf("enter  a number   ");
	scanf("%d",&n);
	for(i=n;i<=10*n;i=i+n){
		printf("%d\n",i);
	}
	return 0;
}
