#include <stdio.h>
void main(){
	int wh;
	int a=1500,lwh,mwh,b,c,d,e,lp,mp;
    printf("enter the working hours");
    scanf("%d",wh);
	if(wh==8){
		printf("your payment is: %d",a);
	}
	else if(wh<8){
		lwh=8-wh;
		printf("lwh is: %d",lwh);
		b=a*(5/100);
		c=b*(1/60);
		lp=wh*c;
		printf("your payment is: %d",lp);
	}
	else if(wh>8){
		mwh=8+wh;
		printf("mwh is: %d",mwh);
		d=a*(5/100);
		e=d*(1/60);
		mp=wh*e;
		printf("your payment is: %d",mp);
	}
	else{
		print("invalid hrs");
	}	
}
