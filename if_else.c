/*1.for learning example.
#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	if(a>b){
		c=a-b;
	}
	else{
		c=a+b;
	}
	printf("answer is: %d",c);
}*/

/*2.input rate,quantity then find amountand print it.
if amount is greater than 1000 then find out discount 10%
on amount otherwise 5% . now calculate net amount after 
discount also print discount and net amount.

#include<stdio.h>
void main(){
	float r,qty,amt,dis,total_amt;
	printf("enter rate:");
	scanf("%f",&r);
	printf("enter quantity:");
	scanf("%f",&qty);
	amt=r*qty;
	printf("amount is: %.2f\n",amt);
	if(amt>10000){
	    printf("10%% discount\n")
		dis=amt*10/100;
	}
	else{
	    printf("5%% discount\n")
	    dis=amt*5/100;
	}
	printf("discount is: %.2f\n",dis);
	total_amt=amt-dis;
	printf("total amount is: %.2f\n",total_amt);
}*/

/*#include<stdio.h>
void main(){
	float cr,pr,total_reading ,total_amt;
	printf("enter current reading:");
	scanf("%f",&cr);
	printf("enter previous reading:");
	scanf("%f",&pr);
	total_reading= cr+pr;
	printf("total reading is: %.2f\n",total_reading);
    if(total_reading>500)
    { printf("charge 9rs per reading\n");
      total_amt=total_reading*9;
      printf("total_amt: %.2f rs",total_amt);
	}
	else{
	  printf("charge 5rs per reading");
      total_amt=total_reading*5;
      printf("total_amt: %.2f rs",total_amt);	
	}
}*/

/*#include<stdio.h>
void main(){
	float slr,ann_slr,tax,dis,total_salary;
	printf("enter salary:");
	scanf("%f",&slr);
	ann_slr=slr*12;
	printf("annual salary is: %.2f\n",ann_slr);
	if(ann_slr>1000000){
	    printf("30%% tax\n");
		tax=ann_slr*30/100;
	}
	else{
	    printf("10%% tax\n");
	    tax=ann_slr*10/100;
	}
	printf("tax is: %.2f\n",tax);
	total_salary=ann_slr-tax;
	printf("total salary per annum is: %.2f\n",total_salary);
}*/
                      
                      
                      
                    //assignment questions//
                    
                    
//1.find max between two numbers.
/*#include<stdio.h>
void main(){
  int a,b;
  printf("enter first no. and second no.:");
  scanf("%d%d",&a,&b);
  if(a>b){
  	printf("%d is greatest",a);
  }
  else{
  	printf("%d is greatest",b);
  }	
}*/

//2.find max between three numbers.
/*#include<stdio.h>
void main(){
  int a,b,c;
  printf("enter first no. and second no. and third no.:");
  scanf("%d%d",&a,&b);
  if(a>b&&a>c){
  	printf("%d is greatest",a);
  }
  else if(b>a&&b>c){
  	printf("%d is greatest",b);
  }
  else{
  	printf("%d is greatest",c);
  }	
}*/

// 3.check whether a no. is even or odd 
/*#include<stdio.h>
void main(){
	int a;
	printf("enter a no.:");
	scanf("%d",&a);
	if(a%2==0){
		printf("%d is even",a);
	}
	else{
		printf("%d is odd",a);
	}
}*/

//4.check whether a year is leap or not.
/*#include<stdio.h>
void main(){
	int year;
	printf("entr a year:");
	scanf("%d",&year);
	if((year%100!=0 && year%4==0)||(year%400==0)){
		printf("%d is leap year",year);
	}
	else{
		printf("%d not a leap year",year);
	}
}*/

//5.check whether a no. is negative ,positive or zero.
/*#include<stdio.h>
void main(){
	int a;
	printf("enter a no.:");
	scanf("%d",&a);
	if(a==0){
		printf("%d is zero",a);
	}
	else if(a<0){
		printf("%d is negative",a);
	}
	else{
		printf("%d is positive",a);
	}
}*/

//6. whether a no. is divisible by 5 and 11 or not.
/*#include<stdio.h>
void main(){
	int x;
	printf("enter a no.:");
	scanf("%d",&x);
	if(x%5==0 && x%11==0){
		printf("%d is divisible by 5 and 11",x);
	}
	else{
		printf("%d is not divisible by 5 and 11",x);
	}
}*/

//7.count total no. of notes in given amount.
/*#include<stdio.h>
void main(){
	int amt,a;
	printf("enter the amount to count notes:");
	scanf("%d",&amt);
	a=amt/2000;
	printf("2000---%d\n",a);
	amt=amt%2000;
	a=amt/500;
	printf("500---%d\n",a);
    amt=amt%500;
    a=amt/200;
	printf("200---%d\n",a);
	amt=amt%200;
	a=amt/100;
	printf("100---%d\n",a);
	amt=amt%100;
	a=amt/50;
	printf("50---%d\n",a);
	amt=amt%50;
    a=amt/20;
	printf("20---%d\n",a);
	amt=amt%20;
	a=amt/10;
	printf("10---%d\n",a);
	amt=amt%10;
	a=amt/5;
	printf("5---%d\n",a);
	amt=amt%5;
	a=amt/2;
	printf("2---%d\n",a);
	amt=amt%2;
	printf("1---%d",amt);
}*/

//8.check whether a character is alphabet or not.


//9.input any alphabet and check whether it is vowel or constant.


//10.input any character and check whether it is alphabet,digit or a special character.


//11.check whether a character in uppercase or lowercase alphabet.


//12.input week no. and print week day.
/*#include<stdio.h>
void main(){
	int a;
	printf("enter a no.from 1 to 7:\n");
	scanf("%d",&a);
	if(a>=1 && a<=7){
		if(a==1){
			printf("sunday");
		}
		else if(a==2){
			printf("monday");
		}
		else if(a==3){
			printf("tuesday");
		}
		else if(a==4){
			printf("wednesday");
		}
		else if(a==5){
			printf("thurday");
		}
		else if(a==6){
			printf("friday");
		}
		else{
			printf("saturday");
		}
	}
	else{
		printf("invalid number for determining week name");
	}
}*/

//13.input month number and print number of days in that days.
/*#include<stdio.h>
void main(){
	int m;
	printf("enter a no.from 1 to 12:\n");
	scanf("%d",&m);
	if(m>=1 && m<=12){
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			printf("no. of days in %d month is 31",m);
		}
		else if(m==4||m==6||m==9||m==11){
			printf("no. of days in %d month is 30",m);
		}
		else{
			printf("no. of days in %d month is 28",m);
		}
	}
	else{
		printf("sorry! please enter valid month");
	}
}*/

//14.input angles of a triangle and check whether atriangle is valid or not.
/*#include<stdio.h>
void main(){
	int A,B,C;
	printf("enter angles of a triangle:");
	scanf("%d%d%d",&A,&B,&C);
	if(A+B+C==180){
		printf("triangle is valid");
	}
	else{
		printf("triangle is not valid");
	}
}*/


//15.input all sides of a triangle and check whether atriangle is valid or not.
/*#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter 3 sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b){
		printf(" triangle is valid");
	}
	else{
		printf("triangle is invalid");
	}
}*/

//16.check whether a triangleis equilateral,isosceles or scalene triangle.
/*#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter 3 angles of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
    if(a==b==c==60&&a+b+c==180){
    	printf("it is equilateral triangle");
	}
	else if((a==b||b==c||c==a) && (a+b+c==180)){
		printf(" it is a isosceles triangle");
	}
	else if ((a!=b!=c) && (a+b+c==180)){
		printf(" it is a scalene triangle");
	}
	else{
		printf("it is not a triangle");
	}
}*/

//17.write a C program to find all roots of a quadratic equation.
/*#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,x,y,dis;
	printf("enter value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis>0){
		x=(-b+sqrt(dis))/(2*a);
	    y=(-b-sqrt(dis))/(2*a);
	    printf("roots are %.1f and %.1f",x,y);	
	}
	else if(dis==0){
		x=-b/(2*a);
		y=-b/(2*a);
		printf("roots are %.1f and %.1f",x,y);
	}
	else{
		printf("roots are imaginary");
	}
}
*/
//18.write a C program to calculate profit or loss.
/*#include<stdio.h>
void main(){
	float sp,cp,loss,pf;
	printf("enter cost price:");
	scanf("%f",&cp);
	printf("enter selling price:");
	scanf("%f",&sp);
	if(sp>cp){
		pf=sp-cp;
		printf("profit = %.2f",pf);
	}
	else if(sp<cp){
		loss=cp-sp;
		printf("loss = %.2f",loss);
	}
	else{
		printf("no profit and loss");
	}
}*/

/*19.input marks of five subjects physics,chemistry,bio,math,comp.
calculate percentage and grade according to following:
Percentage >= 90%: grade A
Percentage >= 80%: grade B
Percentage >= 70%: grade C
Percentage >= 60%: grade D
Percentage >= 50%: grade E
Percentage <= 40%: grade F
*/
/*#include<stdio.h>
void main(){
	float p,c,b,m,cp,t,per;
	printf("enter marks of p,c,b,m,cp:");
	scanf("%f%f%f%f%f",&p,&c,&b,&m,&cp);
	t=p+c+b+m+cp;
	per=t/5;
	printf("total is %.2f \n percentage is %.2f%%",t,per);
	if(per>=90){
		printf("\ngrade A");
	}
	else if(per>=80){
		printf("\ngrade B");
	}
	else if(per>=70){
		printf("\ngrade C");
	}
	else if(per>=60){
		printf("\ngrade D");
	}
	else if(per>=50){
		printf("\ngrade E");
	}
	else{
		printf("\ngrade f");
	}
} 

*/

/*20.input basic salary of an employee and calculate its gross salary
 according to following:
 basic salary>=10000: HRA=20%,DA=80%
 basic salary>=20000: HRA=25%,DA=90%
 basic salary>=30000: HRA=30%,DA=95%
 */
/*#include<stdio.h>
void main(){
	float s,hra,da,gs;
	printf("enter salary:");
	scanf("%f",&s);
	if(s>=30000){
	    hra=s*(0.3);
	    da=s*(0.9);
	    gs=s+hra+da;
	    printf("gross salary is %.2f",gs);
	}
	else if(s>=20000){
	    hra=s*(0.25);
	    da=s*(0.9);
	    gs=s+hra+da;
	    printf("gross salary is %.2f",gs);
	}
	else if(s>=10000){
	    hra=s*(0.2);
	    da=s*(0.8);
	    gs=s+hra+da;
	    printf("gross salary is %.2f",gs);
	}
	else{
		printf("please enter valid salary for our company");
	}
}*/

/*21.input electricity unit charge and calculate total electricity bill
according to the given condition:
for first 50 units rs. 0.50/unit
for next 100 units rs. 0.75/unit
for next 100 units rs. 1.20/unit
for unit above 250 rs. 1.50/unit
an additional surcharge of 20% is added to the bill.
*/

/*#include<stdio.h>
void main(){
	int ch,a,b,c,d,e;
	printf("enter electricity unit charge:");
	scanf("%d",&ch);
	
	if(ch<=50){
		a=ch*0.50;
		printf("total charge is rs.%d",a);
	}
	else if(ch<=150){
		a=50*0.50;
		ch=ch-50;
		b=ch*0.75;
		printf("total charge is rs.%d",a+b);
	}
	else if(ch<=250){
		a=50*0.50;
		ch=ch-50;
		b=100*0.75;
		ch=ch-100;
		c=ch*1.20;
		printf("total charge is rs.%d",a+b+c);
	}
	else{
		a=50*0.50;
		ch=ch-50;
		b=100*0.75;
		ch=ch-100;
		c=ch*1.20;
		ch=ch-100;
		d=ch*1.50;
		e=(a+b+c+d)+((a+b+c+d)*0.2);
		printf("total charge is rs.%d",e);
	}	
}
*/
