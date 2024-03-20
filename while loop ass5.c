//1.print natural no. from 1 to n
#include<stdio.h>
void main(){
	int i=1,n;
	printf("enter a no.");
	scanf("%d",&n);
	while(i<=n){
		printf("%d",i);
		i++;
	}
}
//2.print natural no. from n to 1 (reverse natural no.)
#include<stdio.h>
void main(){
	int n;
	printf("enter a no.");
	scanf("%d",&n);
	while(n>=1){
		printf("%d",n);
		n--;
	}
}
//3.print all alphabet from a to z.

//4.print all even no. between 1 to 100.
#include<stdio.h>
void main(){
	int i=2;
	while(i<=100){
		if(i%2==0){
			printf("%d",i);
		}
	}
}

//5.print all odd no. between 1 to 100.
#include<stdio.h>
void main(){
	int i=1;
	while(i<=100){
		if(i%2!=0){
			printf("%d",i);
		}
	}
}

//6.print sum of all even no. between 1 to n.
#include<stdio.h>
void main(){
	int i=2,n,s=0;
	printf("enter a number:");
	scanf("%d",&n)
	while(i<=n){
		if(i%2==0){
			s=s+i;
		}
		i++;
	}
	printf(" sum of even no. is %d",s);
}

//7.print sum of all odd no. between 1 to n.
#include<stdio.h>
void main(){
	int i=1,n,s=0;
	printf("enter a number:");
	scanf("%d",&n)
	while(i<=n){
		if(i%2!=0){
			s=s+i;
		}
		i++;
	}
	printf(" sum of even no. is %d",s);
}
//8.print table of any no.
#include<stdio.h>
void main(){
	int i=1,n;
	printf("enter a number:");
	scanf("%d",&n)
	while(i<=10){
		printf("%dx%d=%d/n",i,n,i*n);
		i++;
	}
}
//9.enter any no. and calculate sum of all natural no. between 1 to n.
#include<stdio.h>
void main(){
	int i=1,n,s=0;
	printf("enter a no.");
	scanf("%d",&n);
	while(i<=n){
		s=s+i;
	    i++;
	}
	printf(" sum of natural number is %d",s);
}

//10.program to calculate first and last digit of any number.
#include<stdio.h>
void main(){
	int n,l;
	printf("enter a number:");
	scanf("%d",&n);
	l=n%10;
	while(n>10){
		n=n/10;
	}
	printf("first digit is %d",n);
	printf("last digit is %d",l);
}

//11.program to count no. of digits of any number.
#include<stdio.h>
void main(){
	int n,c;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0){
		c++;
		n=n/10;
	}printf("there are %d digit in a number",c);
}

//12.program to calculate sum of digits of any number.
#include<stdio.h>
void main(){
	int r,n,s=0;
	printf("enter a number:");
	scanf("%d",&n)
	while(n){
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("total sum is %d",s);
}

//13.program to calculate product of digits of any number.
#include<stdio.h>
void main(){
	int r,n,p=1;
	printf("enter a number:");
	scanf("%d",&n)
	while(n){
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("product is %d",p);
}
//14.program to swap first and last digit of any number.
#include<stdio.h>
void main(){
	int a,n,l;
	printf("enter a number:");
	scanf("%d",&a);
	n=a;
	l=n%10;
	while(n>10){
		n=n/10;
	}
	printf("first digit is %d",n);
	printf("last digit is %d",l);
	n=n+l;
	l=n-l;
	n=n-l;
	printf("after swap");
	printf("first digit is %d",n);
	printf("last digit is %d",l);
	
}
//14.program to sum of first and last digit of any number.
#include<stdio.h>
void main(){
	int a,n,l;
	printf("enter a number:");
	scanf("%d",&a);
	n=a;
	l=n%10;
	while(n>10){
		n=n/10;
	}
	printf("sum of first and last digit is %d",n+l);
}
//16.program to enter any no. and print its reverse.
#include<stdio.h>
void main(){
	int r,n,s=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n){
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	printf("reverse is %d",s);
}

//17.program to enter any no. and check whether the no. is palindrome or not.
#include<stdio.h>
void main(){
	int n,a;
	printf("enter a number:");
	scanf("%d",&a);
	n=a;
	while(n){
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(n==s){
		printf("%d is palindrome",n);
	}
	else{
		printf("%d is not palindrome",n);
	}
}
//18.program to find frequency of each digit in a given no. or integer.
#include<stdio.h>
void main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	;
	while(n>0){
		r=n%10;
		if(r==0){
			a++;
		}
		else if(r==1){
			b++;
		}
		else if(r==2){
			c++;
		}
		else if(r==3){
			d++;
		}
		else if(r==4){
			e++;
		}
		else if(r==5){
			f++;
		}
		else if(r==6){
			g++;
		}
		else if(r==7){
			h++;
		}
		else if(r==8){
			i++;
		}
		else {
			d++;
		}	
	}
	printf("0 = %d/n1 = %d/n2 = %d/n3 = %d/n4 = %d/n",a,b,c,d,e);
	printf("5 = %d/n6 = %d/n7 = %d/n8 = %d/n9 = %d/n4 = %d/n5 = %d/n",f,g,h,i,j);
}

//19.program to enter any number and print it in words.
#include<stdio.h>
void main(){
	int n;
	printf("enter a no.:");
	scanf("%d",&n);
	
	}
//20.program to print all ASCII character with their values.

//21.program to find power of any number using loop.
#include<stdio.h>
void main(){
	int n,i=2,c=2;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=i){
		i=i*i;
		c=c+2;
		if(i>n){
			i++;
		}
	}
	printf("%d power of %d",c,i);
}
//22.program to enter any no. and print all factors of the no.
#include<stdio.h>
void main(){
	int n,i=2;
	printf("enter a no.:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			printf("%d,"i);
			
		}
		i++;
	}
}

//prime factors. 2,2,2
#include<stdio.h>
void main(){
  int n,r,s=0,i=2;
  printf("enter a no.:");
  scanf("%d",&n);
  while(n>1){
  	if(n%i==0){
  		printf("%d,",i);
  		n=n/i;
	}
	else{
		i++;  
	}
  }  
}
//23.program to enter any no. and calculate its factorial.
#include<stdio.h>
void main(){
	int n,p=1;
	printf("enter a no.:");
	scanf("%d",&n);
	while(n>0){
		p=p*n;
		n--;
	}
	printf("factorial is %d",p);
}

//24.program to enter any no. and finds HCF(GCD) of two numbers.

//25.program to find  lcm of two numbers.
#include<stdio.h>
void main(){
	int a,b,i=2;
	printf("enter two no.:");
	scanf("%d %d",&a,&b);
	while(i<=a or i<=b){
		if(a%i==0 && b%i==0){
			printf("%d,"i);
			a=a/i;
			b=b/i;
		}
		else if(a%i==0 or b%i==0){
			printf("%d,"i);
			if(a%i==0){
				a=a/i;
			}
			if(b%i==0){
				b=b/i;
			}
		}
		i++;
	}
}
//26.program to check whether the no. is prime or not.
#include<stdio.h>
void main(){
	int n,i=2;
	printf("enter a no.:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			printf("%d is not prime",n);
			break;
		}
		i++;
	}
	printf("%d is prime",n);
}

//27.program to check whether the no. is armstrong number or not.
#include<stdio.h>
void main(){
	int a,n,r,s=0;
	printf("enter a number:");
	scanf("%d",&a);
	n=a;
	while(n){
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(a==s){
		printf("%d is armstrong no.",a);
	}
	else{
		printf("%d is not armstrong no.",a);
	}
}
//28.program to check whether the no. is perfect number or not.

//29.program to check whether the no. is strong number or not.

//30.program to print all prime number between 1 to n.
#include<stdio.h>
void main(){
	int n,i=3,
	printf("enter a no.:");
	scanf("%d",&n);
	printf("2,");
	while(n){
		j=2;
		if(j<=i){
			if(i%j==0){
			    if(i==j){
			    	printf("%d,",i);
				}
				else{
			        j++;
		        }
		        j++;
		    }//wrong
		    
		}
		
	}
}

//31.program to print all armstrong number between 1 to n.

//32.program to print all perfect number between 1 to n.

//33.program to print all strong number between 1 to n.

//34.program to enter any number and print its prime factor.

//35.program to find sum of all prime number between 1 to n.

//36. program to print fibonacci series upto n terms.

//37.program to find one's complement of a binary number.

//38.program to find two's complement of a binary number.

//39.program to convert binary to octal number system.

//40.program to convert binary to decimal number system.

//41.program to convert binary to hexadecimal number system.

//42.program to convert octal to binary number system.

//43.program to convert octal to decimal number system.

//44.program to convert octal to hexadecimal number system.

//45.program to convert decimal to binary number system.

//46.program to convert decimal to octal number system.

//47.program to convert decimal to hexadecimal number system.

//48.program to convert hexadecimal to binary number system.

//49.program to convert hexadecimal to octal number system.

//50.program to convert hexadecimal to decimal number system.

//program to print pascal triangle upto n rows.

