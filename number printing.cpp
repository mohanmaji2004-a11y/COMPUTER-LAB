#include<stdio.h>
int main (){
	int n,m,i,j;
	printf("enter a number of row ");
	scanf("%d",&n);
		printf("enter a number of colume ");
	scanf("%d",&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		printf("%d",j);	
		}
		printf("\n");
	}
	return 0;
}
