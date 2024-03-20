/*#include<stdio.h>
void main(){
	int i=1;
	abc:
		printf("%d,",i);
		i=i*2;
		if(i<=64){
			goto abc;
		}
}*/

//1.	Find out the sum of even and odd no. from 1 to 10 .
/*#include<stdio.h>
void main(){
	int i=1,se=0,so=0;
	xyz:
		if(i%2==0){
			se=se+i;
			i=i+1;
		}
	    else{
		   	so=so+i;
			i=i+1;
		}
		if(i<=10){
		goto xyz;
	   } 
	   printf("sum of even no. is %d \n",se);	
	   printf("sum of odd no. is %d",so);	
}*/

//2.	Find out the total no. of even and odd no. from 1 to 10 . 
/*#include<stdio.h>
void main(){
	int i=1,Ce=0,Co=0;
	xyz:
		if(i%2==0){
			Ce=Ce+1;
			i=i+1;
		}
	    else{
		   	Co=Co+1;
			i=i+1;
		}
		if(i<=10){
		goto xyz;
	   } 
	   printf("number of even no. is %d \n",Ce);	
	   printf("number of odd no. is %d",Co);
}*/

//3.	Convert a temperature reading in degrees fahrenheit to degree 
//celsius,using the formula. C= (5/9)*(f-32)

/*#include<stdio.h>
void main(){
	int temp,c;
	printf("enter temperature in f: ");
	scanf("%d",&temp);
	c=(5.0/9.0)*(temp-32);
	printf("%.2dc",c);	
  
}*/

//4.	Calculate the volume and area of sphere using the formula.
/*#include<stdio.h>
#include<math.h>
void main(){
	float r,a,v;
	printf("enter radius: ");
	scanf("%f",&r);
	a=4*3.14*r*r;
	v=(4.0/3.0)*3.14*r*r*r;
	printf("area of sphere: %f\nvolume of sphere: %f",a,v);
}
*/
//5.	Find out the average of First 10 natural no.
/*#include<stdio.h>
void main(){
	int i=2,s=0,a,count=0;
	abc:
		if(i%2==0){
			s=s+i;
			i=i+2;
		    count=count+1;
		}
		if(count<10){
			goto abc;
		}
		a=s/count;
		printf("average of first 10 natural no. is %d",a);
}*/

//6.	Generate the following series.                                                      
//	i ) 1,3,7,13,21,31         ii )1,2,5,10,17,26    iii ) 2,8,18,32,50

/*#include<stdio.h>
void main(){
	int i=1,j=2;
	abc:
		printf("%d,",i);
		i=(i+j);
		j=j+2;
		if(i<=31){
			goto abc;
		}
}

#include<stdio.h>
void main(){
	int i=1,j=1;
	abc:
		printf("%d,",i);
		i=(i+j);
		j=j+2;
		if(i<=31){
			goto abc;
		}
}

#include<stdio.h>
void main(){
	int i=2,j=6;
	abc:
		printf("%d,",i);
		i=(i+j);
		j=j+4;
		if(i<=50){
			goto abc;
		}
}

Q8. Print the following sequence:
a)	X*1+x*3+x*5+x*7……n
b)	1,2,4,8,16,32
c)	6,11,8,13,10,15,12
*/

/*#include<stdio.h>
void main(){
	int i=1,x,n,s;
	printf("enter the value of x : ");
	scanf("%d",&x);
	printf("enter the value of limit n: ");
	scanf("%d",&n);
	abc:
		s=s+(x*i);
		i=i+2;
		if(i<=n){
			goto abc;
		}
		printf("sum= %d",s);
}*/

/*#include<stdio.h>
void main(){
	int i=1;
	abc:
		printf("%d,",i);
		i=i*2;
		if(i<=32){
			goto abc;
		}
}*/

/*#include<stdio.h>
void main(){
	int i=6,j;
	abc:
		printf("%d,",i);
		i=i+5;
		printf("%d,",i);
		i=i-3;
		if(i<=12){
			goto abc;
		}
}

Q9. Input two no thru keyboard and swap their values without 
using third variable?*/

/*#include<stdio.h>
void main(){
	int a,b;
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a is %d\n",a);
	printf("the value of b is %d",b);
}

Q10. Convert  Temperature F h. to Cel. Vice versa
  F=c*9/5+32
  C=(f-32)*5/9 */

/*#include<stdio.h>
void main(){
	int f,F,c,C;
	printf("enter temperature in celcius: ");
	scanf("%d",&c);
	F=c*(9.0/5.0)+32;
	printf("%.2df",F);
	printf("\nenter temperature in f: ");
	scanf("%d",&f);
	C=(f-32)*(5.0/9.0);
	printf("%.2dc",C);	
}*/

// Input Miles Thru key Board and convert it into inches, feet & yard?

/*#include <stdio.h>
void main(){
	int miles,i,f,y;
	printf(" enter miles:");
	scanf("%d",&miles);
	i=miles*63360;
	f=miles*5280;
	y=miles*1760;
	printf("%d inches\n%d feet\n %d yards in %d miles ",i,f,y,miles);
}*/

/*7.	Input English , Hindi , Science  Marks and print the following format.
MARKSHEET
		--------------------------------------------------------------
			Subject			Marks
		--------------------------------------------------------------
			English
			Maths
			Science
		--------------------------------------------------------------
			%tage				Total
		--------------------------------------------------------------
*/
#include<stdio.h>
void main(){
	float e,h,s,t,per;
	printf("enter your english,hindi,science marks:");
	scanf("%f %f %f",&e,&h,&s);
	printf("\t\tMARKSHEET");
	printf("\n------------------------------------------------");
	printf("\n  subject\t\t\tmarks");
	printf("\n------------------------------------------------");
	printf("\n  english\t\t\t%.1f",e);
	printf("\n  hindi\t\t\t\t%.1f",h);
	printf("\n  science\t\t\t%.1f",s);
	printf("\n------------------------------------------------");
	t=e+h+s;
	per=t/3;
	printf("\n  %.2f%%tage\t\t  total=%.2f",per,t);
	printf("\n------------------------------------------------");
}






