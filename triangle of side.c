#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 side of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c || a+c>b || b+c>a){
	printf("this is the 3 side of triangle");
}
	else{
		printf("this is not the 3 side of triangle");
	}
	return 0;
}
