#include<stdio.h>
int main(){
	int a=1,n,i,j,d;
	printf("enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int a=1;
	 if(i%2==0){
	 	d=65 ;
		for(j=1;j<=i;j++){
		char ch= (char)d;
		printf("%c",ch);	
	d++;
		}}
		else{
			for(j=1;j<=i;j++){
			printf("%d",a);
			a++;	
			}
		}
		printf("\n");
	}
	return 0;
}
