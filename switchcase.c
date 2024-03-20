
//check whether a alphabet i vowel or consonent
/*#include<stdio.h>
void main(){
	char x;
	printf("enter a character");
	scanf("%c",&x);
	switch(x){
		case 'a':
		case 'A':
	    case 'E':
	    case 'I':
		case 'O':
		case 'U':  
	    	printf("it is a vowel");
			break;
		case 'i':
	    	printf("it is a vowel");
			break;
		case 'o':
	    	printf("it is a vowel");
			break;
		case 'u':
	    	printf("it is a vowel");
			break;				
		default:
			printf("it is a consonent");
	}
}*/

//print day of week name
/*void main(){
	int x;
	printf("enter a day no. of a week");
	scanf("%d",&x);
	switch(x){
		case 1:
	    	printf("sunday");
			break;
		case 2:
	    	printf("monday");
			break;
		case 3:
	    	printf("tuesday");
			break;
		case 4:
	    	printf("wednesday");
			break;
		case 5:
	    	printf("thursday");
	    	break;
	    case 6:
	    	printf("friday");	
			break;	
		case 7:
	    	printf("saturday");				
		default:
			printf("plz put correct no.");
	}
}*/

//print total no. of days in a week
/*void main(){
	int x;
	printf("enter a month  ");
	scanf("%d",&x);
	switch(x){
		case 1:
	    	printf("31 in january");
			break;
		case 2:
	    	printf("28 in feb");
			break;
		case 3:
	    	printf("31 in march");
			break;
		case 4:
	    	printf("30 in april");
			break;
		case 5:
	    	printf("31 in may");
	    	break;
	    case 6:
	    	printf("30 in june");	
			break;	
		case 7:
	    	printf("31 in july");	
			break;		
		case 8:
	    	printf("31 in august");
			break;	
		case 9:
	    	printf("30 in september");
			break;	
		case 10:
	    	printf("31 in october");
			break;	
		case 11:
	    	printf("30 in november");
			break;
		case 12:
	    	printf("31 in december");
			break;							
		default:
			printf("plz put correct no.");
	}
}*/
//max btw two no.
/*void main(){
	int x,y;
	printf("enter two numbers  ");
	scanf("%d %d",&x,&y);
	switch(x>y){
		case 1:
	    	printf("%d is greatest",x);
			break;
		default:
		    printf("%d ir greatest",y);
    }
}*/

//check no is odd or even
/*#include<stdio.h>
void main(){
	int x;
	printf("enter a numbers  ");
	scanf("%d",&x);
	switch(x%2){
		case 1:
	    	printf("%d is odd",x);
			break;
		default:
		    printf("%d is even",x);
    }
}*/

//find roots of a quadratic equation
#include<stdio.h>
void main(){
	float a,b,c,d,r1,r2,img;
	printf("enter the value of a,b,c ");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-4*a*c;
	switch(d>0){
		case 1:
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b+sqrt(d))/(2*a);	
			printf("two distinct and real roots are %f %f",r1,r2);
			break;
		case 0:
			switch(d<0){
				case 1:
					r1=r2 = -b/(2*a);
					img=sqrt(-d)/(2*a);
					printf("two distinct and complex roots are %.2f+i%.2f and %.2f-i%.2f ",r1,img,r2,img);
					break;
				case 0:
					r1=r2 = -b/(2*a);
					printf("two equal and real roots exists are %.2f and %.2f",r1,r2);
					break;
			}	
	}
}


//create a simple calculator.
/*#include<stdio.h>
void main(){
	int x,y,ch;
	printf("enter two numbers");
	scanf("%d %d",&x,&y);
	printf("main menu:\n1.add\n2.subtract\n3.multiply\n4.divide\n");
	printf("enter your choice ");
	scanf("%d",&ch);
	
	switch(ch){
	    case 1:
	    	printf(" %d+%d = %d",x,y,x+y);
			break;
		case 2:
	    	printf("subtract is %d",x-y);
			break;
		case 3:
	    	printf("multiply is %d",x*y);
			break;
		case 4:
	    	printf("divide is %d",x/y);
			break;
		default:
		    printf("choose correct option\n good bye");
    }
}*/

//cube of a no. using function		
/*#include<stdio.h>
void cube(int b){
	int c;
	c=b*b*b;
	printf("cube is %d",c);
}
void main(){
	int a;
	printf("enter a no.");
	scanf("%d",&a);
	cube(a);
}*/
