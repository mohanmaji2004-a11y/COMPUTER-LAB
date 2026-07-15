#include<stdio.h>
int main(){
	int a,n,i,j,d;
	printf("enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		d=65;
		for(j=1;j<=n;j++){
		char ch= (char)d;
		printf("%c",ch);	
	d++;
		}
		printf("\n");
	}
	return 0;
}
