#include<stdio.h>
int main(){
	int x1,x2,y1,y2,x3,y3;
	printf("enter 1st point");
	scanf("%d%d",&x1,&y1);
	printf("enter 2nd point");
	scanf("%d%d",&x2,&y2);
	printf("enter 3rd point");
	scanf("%d%d",&x3,&y3);
	int m=(x2-x1)/(y2-y1);
	int n=(x3-x2)/(y3-y2);
	if(m==n){
	printf("this is the stright line");	
	}
	else{
		printf("this is not the a stright line");
	}
	
	return 0;
}
