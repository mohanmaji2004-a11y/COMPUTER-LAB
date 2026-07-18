#include<stdio.h>
int main(){
	int a,n,i,j,d;
	printf("enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			a=(n/2)+1;
			if(j==a||i==a){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
