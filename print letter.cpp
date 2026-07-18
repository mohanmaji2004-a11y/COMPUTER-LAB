#include<stdio.h>
int main(){
	int a,n,i,j,d;
	printf("enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=1;
		d=65+a;
	    char ch= (char)d;
		for(j=1;j<=n;j++){
		printf("%c",ch);	
		d++;
		}
		printf("\n");
	}
	return 0;
}
