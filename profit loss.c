#include<stdio.h>
int main (){
	int sp,cp,n,m;
	printf("enter selling price and cost price  ");
	scanf("%d%d",&sp,&cp);
	if(cp<sp){
		n=sp-cp;
	printf("the bussisen make profit and the profit is %d",n);
		
	}
	else{
			n=sp-cp;
		n=(-1)*n;
		if(sp<cp){
			printf("the bussiness make loss %d",n);
			
		}
	else{
		printf("the bussiness make not make profit nor loss");
	}
}
	return 0;
	
}
