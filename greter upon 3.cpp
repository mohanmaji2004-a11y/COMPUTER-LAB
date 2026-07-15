#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 number ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d is greater",a);
		}
		else{
			printf("%d is greater",c);
		}
	}
	if(b>a){
		if(b>c){
		printf("%d is greter",b);	
		}
		else{
			printf("%d is greater",c);
		}
		
	}
	return 0;
}
