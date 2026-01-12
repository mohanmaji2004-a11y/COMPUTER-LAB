#include<stdio.h>
int main(){
	int x,y;
	printf("enter a 2d point");
	scanf("%d%d",&x,&y);
	if(x==0 && y==0){
	printf("this point is lie on center");	
	}
	else{
		if(x>0 && y==0){
		printf("this point is lie on x axis");	
		}
		else{
			if(x==0 && y>0){
				printf("this point lie on y axis");
			}
			else{
				printf("thispoint lie on xy plane");
			}
		}
		
	}
	return 0;
}
