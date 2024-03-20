/* 
while loop:
conditional looping
syntax:

while(exp)
{
   ------
   ------
   [break]
   [continue]
}
*/

/*#include<stdio.h>
void main(){
	int i=1;
	while(i<=5){
		i++;
		printf("%d,",i);
	}
}*/

/*#include<stdio.h>
void main(){
	int i=1;
	while(i<=5)   //if close here like while(i<=5); only cursure blink program will hang
	{
		i++;
		printf("%d,",i);
	}
}*/

/*#include<stdio.h>
void main(){
	int i=1;
	while(i<=5)  // if we don't use curly bracket first semicolon is end of loop.
		
		printf("%d,",i);
	    i++;
}*/

/*#include<stdio.h>
void main(){
	int i=1;
	while(i<=5)   // it will print 6 after finishing the loop.
		i++;
		printf("%d,",i);
	
}*/

/*#include<stdio.h>
void main(){
	int i=1;
	while(i)   // it will print hello only once.
		{
		printf("hello");
		i=0;
    }
}*/
// only 0 means false else 1...kuch bhi +,- sab true.


            //programs of while loop//

//1,3,5,7,9,
/*#include<stdio.h>
void main(){
	int i=1;
	while(i<=9)   
		{
		printf("%d,",i);
		i=i+2;
    }
}*/

// 10000,1000,100,10,1,
/*#include<stdio.h>
void main(){
	int i=10000;
	while(i>=1)   
		{
		printf("%d,",i);
		i=i/10;
    }
}*/

//2,4,6,8,10,12,14,16,20,22,
 /*#include<stdio.h>
void main(){
	int i=2;
	while(i<=22)   
		{
		printf("%d,",i);
		i=i+2;
    }
} 
*/
//table of any no.
/*#include<stdio.h>
void main(){
	int i=1,a,b;
	printf("enter any no.");
	scanf("%d",&a);
	while(i<=10)   
		{
		b=a*i; 	
		printf("%dx%d=%d\n",a,i,b);
		i++;
    }
}*/

//2,4,8,10,14,16,20,22
/*#include<stdio.h>
void main(){
	int i=2;
	while(i<=22)   
		{
		printf("%d,",i);
		i=i+2;
		printf("%d,",i);
		i=i+4;
    }
}*/ 

//1,2,4,8,16,32,64,
#include<stdio.h>
void main(){
	int i=1;
	while(i<=64){
		printf("%d",i);
		i=i*2;
	}
}

//1,1,1,2,4,8,3,9,27,4,16,64,5,25,125
#include<stdio.h>
void main(){
	int i=1,a,b;
	while(i<=5){
	
	printf("%d",i);
	a=i*i;
	printf("%d",a);
	b=i*i*i;
	printf("%d",b);
    }
}

//2,4,8,10,14,16,20,22
#include<stdio.h>
void main(){
	int i=2;
	while(i<22){
		printf("%d",i);
		i=i+2;
		printf("%d",i);
		i=i+4;
	}
}
// print 1,3,5,7,9
#include<stdio.h>
void main(){
	int i=1;
	while(i<10){
		if(i%2==0){
			printf("%d",i);
		}
	}
}

// print 10,9,8,7............0
#include<stdio.h>
void main(){
	int i=10;
	while(i>=0){
		printf("%d",i);
		i=i-1;
	}
}

/*Q8. Print the following sequence:
a)	X*1+x*3+x*5+x*7……n
b)	1,2,4,8,16,32
c)	6,11,8,13,10,15,12
*/
#include<stdio.h>
void main(){
	int x,i=1,n,s;
	printf("enter the value:");
	scanf("%d",&x);
	printf("enter the limit:");
	scanf("%d",&n);
	while(i<=n){
	s=s+(x*i);
	printf("total is %d",s);
    }
}

#include<stdio.h>
void main(){
	int i=1;
	while(i<=32){
		printf("%d",i);
		i=i*2;
	}
}

#include<stdio.h>
void main(){
	int i=6;
	while(i<12){
		printf("%d",i);
		i=i+5;
		prinf("%d",i);
		i=i-3;
		printf("%d",i);
	}
}
//6.	Generate the following series.                                                      
//	i ) 1,3,7,13,21,31         ii )1,2,5,10,17,26    iii ) 2,8,18,32,50

/*#include<stdio.h>
void main(){
	int i=1,j=2;
	while(i<=31){
		printf("%d",i);
		i=i+j;
		j=j+2; 
	}
}

#include<stdio.h>
void main(){
	int i=1,j=1;
	while(i<=26){
		printf("%d",i);
		i=i+j;
		j=j+2;
	}
}

#include<stdio.h>
void main(){
	int i=2,j=6;
	while(i<=50){
		printf("%d",i);
		i=i+j;
		j=j+4;
	}
}*/
