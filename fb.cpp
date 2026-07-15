#include<stdio.h>
int main(){
	int a,b,c,d;
	printf ("enter the divident ans divisor");
	scanf("%d %d",&a,&b);
	c=a/b;
	d=a-(b*c);
	printf("the reminder is %d",d);
	return 0;
}
