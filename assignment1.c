/*#include<stdio.h>
void main(){
	float num1,num2,sum;
	printf("enter first no.:");
	scanf("%f",&num1);
	printf("enter second no.");
	scanf("%f",&num2);
	sum=num1+num2;
	printf("sum of two no.is: %f",sum);
}*/

/*#include<stdio.h>
void main(){
	float a,b,c,d,e,g;
	int fa,x,y;
	printf("enter first no.:");
	scanf("%f",&a);
	printf("enter second no.:");
	scanf("%f",&b);
	printf("enter first no.:");
	scanf("%d",&x);
	printf("enter second no.:");
	scanf("%d",&y);
	c=a+b;
	d=a-b;
	e=a/b;
	fa=x%y;
	g=a*b;
	printf("the sum of two no.is: %f\n",c);
	printf("the differnce of two no.is: %f\n",d);
	printf("the division of two no.is: %f\n",e);
	printf("the modulus of two no.is: %d\n",fa);
	printf("the product of two no.is: %f\n",g);
}

/*#include<stdio.h>
void main(){
	float l,b,p;
	printf("enter length:");
	scanf("%f",&l);
	printf("enter breadth:");
	scanf("%f",&b);
	p=(l+b)/2;
	printf("the parameter of rectangle is:%f",p);
}*/

/*#include<stdio.h>
void main(){
   float l,b,a;
	printf("enter length:");
	scanf("%f",&l);
	printf("enter breadth:");
	scanf("%f",&b);
    a=l*b;
	printf("the area of rectangle is:%f",a); 	
}*/

/*#include<stdio.h>
void main(){
   float r,d,c,a;
	printf("enter radius:");
	scanf("%f",&r);
    d=2*r;
    printf("the diameter of circle is:%f\n",d); 
    c=2*3.14*r;
    printf("the circumference of circle is:%f\n",c); 
    a=3.14*r*r;
	printf("the area of circle is:%f\n",a); 	
}*/

/*#include<stdio.h>
void main(){
	float l,m,km;
	printf("enter length in cm:");
	scanf("%f",&l);
    m=l/100;
    printf("length convert into cm to m is: %f\n",m);
    km=l*100000;
    printf("length convert into cm to km is: %f\n",km);
}*/

/*#include<stdio.h>
void main(){
	float c,f;
	printf("enter temperature in celsius:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("temperature convert from celcius to farhenheit is: %.1ff\n",f);
}*/

/*#include<stdio.h>
void main(){
	float f,tc;
	printf("enter temperature in farhenheit:");
	scanf("%f",&f);
	tc=5.0/9.0*(f-32);
	printf("temperature convert from  farhenheit to celcius is: %.1ff\n",tc);
}

/*#include <stdio.h>
void main(){
	int d,y,w,dy;
	printf("enter no. of days:");
	scanf("%d",&d);
	y=d/365;
	printf("years are/is: %d\n",y);
	w=(d%365)/7;
	printf("weeks are/is: %d\n",w);
	dy=d-((y*365)+(w*7));
	printf("days are/is: %d",dy);
}*/

/*#include<stdio.h>
void main(){
	int x,y,z;
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	z=pow(x,y);
	printf("value is: %d",z);
}*/

/*#include<stdio.h>
void main(){
 float num;
 printf("enter the number:");
 scanf("%f", &num);
 printf("square of num %f:",num*num);
}*/

/*#include<stdio.h>
void main(){
	int a,b,c;
	printf(" enter first side of triangle:");
	scanf("%d",&a);
	printf(" enter second side of triangle:");
	scanf("%d",&b);
    c=180-a-b;
    printf("the third side of triangke is: %d \n",c);
}*/

/*#include<stdio.h>
#include<math.h>
void main(){
	int b,h,a;
	printf(" enter base of triangle:");
	scanf("%d",&b);
	printf(" enter height of triangle:");
	scanf("%d",&h);
    a=1.0/2.0*(b*h);
    printf("area of triangle is: %d\n",a);
}

/*#include<stdio.h>
void main(){
	float a,A;
	printf(" enter side of equilateral triangle:");
	scanf("%f",&a);
	A=1.73/4.0*a*a;
	printf("area of  equilateral triangle is: %.2f\n",A);
}

/*#include <stdio.h>
void main(){
	float h,m,e,s,c,total,avg,per;
	printf("enter hindi marks:");
	scanf("%f",&h);
	printf("enter math marks:");
	scanf("%f",&m);
	printf("enter english marks:");
	scanf("%f",&e);
	printf("enter scince marks:");
	scanf("%f",&s);
	printf("enter computer marks:");
	scanf("%f",&c);
	total=h+m+e+s+c;
	avg=total/5;
	printf("average marks: %.2f\n",avg);
	per=total/500*100;
	printf("the overall percentage is: %.1f ",per);
}*/
	
/*#include <stdio.h>
void main(){
	float p,r,t,si;
	printf("enter principal:");
	scanf("%f",&p);
	printf("enter rate:");
	scanf("%f",&r);
	printf("enter time:");
	scanf("%f",&t);	
	si =(p*r*t)/100;
	printf("simple interest is: %.1f",si);
}*/
	
	
/*#include <stdio.h>
void main(){
	float p,r,t,amt,ci;
	printf("enter principal:");
	scanf("%f",&p);
	printf("enter rate:");
	scanf("%f",&r);
	printf("enter time:");
	scanf("%f",&t);	
    amt=p*(pow((1+r/100),t));
    ci=amt-p;
	printf("compound interest is: %.2f",ci);
}*/	

/*#include <stdio.h>
#include <math.h>
void main(){
	float a,b;
	printf("enter a no.:");
	scanf("%f",&a);
	b=sqrt(a);
	printf("square root is: %f",b);
}*/
	
/*#include <stdio.h>
void main(){
	int d,y,rd;
	printf("enter days:");
	scanf("%d",&d);
	y=d/365;
	rd=d%365;	
	printf("%d year,%d days",y,rd);
}*/
	
	
	
	
	
		
