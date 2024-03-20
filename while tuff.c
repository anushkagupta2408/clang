//input a number and reverse it.

/*#include<stdio.h>
void main(){
	int b,r;
	printf("enter a no.:");
	scanf("%d",&b);
	while(b>0){   //we can write inplace of b>0 only b.
		r=b%10;
	    printf("%d",r);
	    b=b/10;
	}	
}*/
//binding the digits

/*#include<stdio.h>
void main(){
	int b,r,s;
	printf("enter a no.:");
	scanf("%d",&b);
	while(b>0){   //we can write inplace of b>0 only b.
		r=b%10; 
		s=(s*10)+r;
	    printf("%d,",r);
	    b=b/10;
	}
	printf("\n%d,",s);	
}*/

//input a no. anf find out sum of its each digit.
// whose sum and products of digits are equal.

/*#include<stdio.h>
void main(){
	int b,r,s=0,p=1;
	printf("enter a no.:");
	scanf("%d",&b);
	int a=b;
	while(a>0){
		r=a%10;
		s=s+r;
		p=p*r; 
	    a=a/10;   
	}
	
	if(p==s){
		printf("%d is a perfect number",b);
	}
	else{
		printf("%d is not a perfect number",b);
	}
}*/

//input a no. and find its factor
/*#include<stdio.h>
void main(){
	int a,i=1;
	printf("enter a no.:");
	scanf("%d",&a);
	while(i<=a){
		if(a%i==0){
			printf("%d,",i);
		}
		i++;
	}
}*/

//22.program to enter any no. and print all factors of the no.
/*#include<stdio.h>
void main(){
	int n,i=2;
	printf("enter a no.:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			printf("%d,",i);
		}
		i++;
	}
}*/
//armstorng no.
/*#include<stdio.h>
void main(){
  int n,a,s=0,r;
  printf("enter a no.:");
  scanf("%d",&n);
  a=n;
  while(a>0){
  r=a%10;
  s=s+(r*r*r);
  a=a/10;
  }
  if(s==n){
	printf("%d is armstrong",n);
  }
  else{
	printf("not armstrong");
  }
 	
}*/

//palindrome or not
/*#include<stdio.h>
void main(){
  int n,a,r,s=0;
  printf("enter a no.:");
  scanf("%d",&n);
  a=n;
  while(a){
  r=a%10;
  s=(s*10)+r;
  a=a/10;
  }
  if(s==n){
  	printf("%d is palindrome",n);
  }
  else{
  	printf("%d is not palindrome",n);
  }
}*/
  
//adding of 1st and last digit of a no. like 3456 3+6=9 
 /*#include<stdio.h>
void main(){
  int n,r,s=0;
  printf("enter a no.:");
  scanf("%d",&n);
  r=n/10;
  while(n>10){
  	n=n/10;
  }
  s=n+r; 
  printf("%d",s);
}*/
  
//prime factors
/*#include<stdio.h>
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
}*/
  
  
  
  
  
  
  
  
  
  





















