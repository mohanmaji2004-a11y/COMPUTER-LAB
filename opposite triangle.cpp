#include<stdio.h>
int main (){
	int n,m,i,j;
	printf("enter a number of row ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
		printf("*");	
		}
		printf("\n");
	}
	return 0;
}
