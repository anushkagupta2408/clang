   /* s=0
    s=s+<no>
    no.=1,2,3,4,5*/
    
    
// product of 5 no.    
/*#include<stdio.h>
void main(){
	int s=0,i=1;
	xyz:
		s=s+i;
		i=i+1;
		if(i<6){
			goto xyz;
		}
		printf("%d",s);
}*/


//sum of n item according to their prices.
/*#include<stdio.h>
void main(){
	int s=0,i=1,n,p;
	printf("enter limit:");
	scanf("%d",&n);
	xyz:             //level
	    printf("enter price of product %d:",i);
	    scanf("%d",&p);
		s=s+p;
		i=i+1;
		if(i<=n){
			goto xyz;
		}
		printf("%d",s);
}*/
  
// product of n natural no.
/*#include<stdio.h>
void main(){
	double p=1;
	int i=1,n;
	printf("enter limit :");
	scanf("%d",&n);
	abc:
		p=p*i;
		i=i+1;
		if(i<=n){
			goto abc;
		}
		printf("product is :%lf",p);
	}*/
	
// Values divisible by 3 and count 
/*	#include<stdio.h>
	void main(){
		int i=1,count=0,counteven=0,countodd=0;
		abc:
			if(i%3==0){
				printf("%d ,",i);
				count=count+1;
			}
			if(i%2==0){
				counteven=counteven+1;
			}
			else{
				countodd=countodd+1;
			}
		i=i+1;
		if(i<=100){
			goto abc;
		}
		printf("\ntotal values divisible by 3 are %d\n",count);	
		printf("total even values divisible by 2 are %d\n",counteven);	
		printf("total odd values divisible by not 2 are %d",countodd);	
		
	}*/
	
//print 2,4,8,14,22,32,44
/*	#include<stdio.h>
	void main(){
		int i=2,j=2;
	    abc:
	    	printf("%d,",i);
	    	i=i+j;
	    	j=j+2;
	    	if(i<=44){
	    		goto abc;
			}
}*/


//10,20,40,70,110,160
 /*#include<stdio.h>
 void main(){
 	int i=10,j=10;
	    abc:
	    	printf("%d,",i);
	    	i=i+j;
	    	j=j+10;
	    	if(i<=160){
	    		goto abc;
			}
			printf("\b \b");
 }*/
	
