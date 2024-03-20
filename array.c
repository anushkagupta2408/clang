/*
arrays
--------------
-collection of homogenous data
-use to store more than one value in a single variable
-values in array can read/write throw subscript or index
- there are two types of arrays
  -single dimension
  -multi dimension
  
--single dimension 
syntax
    <type> var[size];
ex-- 
 int x[5];          => 0,1,2,3,4 index x[0]also c/d lower bound	
 x[2]=100;
 x[0]=x[2]+50;
 printf("%d",x[0]);

ex-- int x[0]; wrong
     int n=5;
	 int x[n]; correct
     int x[];  incorrect
     
ex-- int x[]={3,56,7,61,9};
     initialize an array
	 
	int x[2]={4,6,7,6}; wrong
	int x[10]={4,5,6,7,8,9}; correct  
	
*/

//printing element of array.
/*#include<stdio.h>
void main(){
	int x[]={3,6,8,9,1,0};
	int i;
	for(i==0;i<=7;i++){
		printf("%d,",x[i]);
	}
}
*/	
//sum of array elements
/*#include<stdio.h>
void main(){
	int x[]={3,6,8,9,1,0};
	int i,sum=0;
	for(i=0;i<=5;i++){
		printf("%d,",x[i]);
		sum=sum+x[i];
	}
	printf("\n%d",sum);
} 
*/


//take input and sum it.
/*#include<stdio.h>
void main(){
	int x[5];
	int i,sum=0;
	for(i=0;i<=5;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=5;i++){
		printf("%d,",x[i]);
		sum=sum+x[i];
	}
	printf("\n%d",sum);
}   
*/

//take input and sum its even no..
/*#include<stdio.h>
void main(){
	int x[11];
	int i,sum=0;
	for(i=0;i<=10;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=10;i++){
		printf("%d,",x[i]);
		if(x[i]%2==0){
			sum=sum+x[i];
		}
    }
    printf("\nsum of even no. is %d",sum);
}*/
//take input in anarray and find out the position of specified element
/*#include<stdio.h>
void main(){
	int x[11];
	int i,key;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	printf("input a number");
	scanf("%d",&key);
	for(i=0;i<=9;i++){
		if(x[i]==key){
			printf("\nposition of %d is %d",key,i);
		}
		if(x[i]!=key){
			printf("not found");
		}
    }
}
*/
//take input and print occurance of a no.
/*#include<stdio.h>
void main(){
	int x[10];
	int i,key,c=0;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	printf("input a number");
	scanf("%d",&key);
	for(i=0;i<=9;i++){
		if(x[i]==key){
			c++;
		}
    }
    printf("occurance is %d",c);
}*/

//take 10 input from keyboard
/*#include<stdio.h>
void main(){
	int x[10];
	int i,ta=0,tb=0,tc=0,td=0;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++){
		if(x[i]>=60 && x[i]<=100]){
			ta++;
		}
		else if(x[i]>=48&& x[i]<=59]){
			tb++;
		}
		else if(x[i]>=35&& x[i]<=47]){
			tc++;
		}
		else{
			td++;
		}
    }
    printf("\ntotal students that took grade A is %d",ta);
    printf("\ntotal students that took grade B is %d",tb);
    printf("\ntotal students that took grade C is %d",tc);
    printf("\ntotal students that took grade D is %d",td);
}*/

//input 10 elements anc count the no. which is divisible by 7 or 9
/*#include<stdio.h>
void main(){
	int x[10];
	int i,c=0;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++){
		if(x[i]%7==0 || x[i]%9==0){
			c++;
		}
		printf("%d,",x[i]);
	}
	printf("\n%d",c);
}*/

//copy one array to another
/*#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++){
		y[i]=x[i];
	}
	printf("elements if y array");
	for(i=0;i<=9;i++){
		printf("%d,",y[i]);
	}
}*/

//reverse the array
/*#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	int j=9;
	for(i=9;i>=0;i--){
		y[i]=x[j-i];      //9-i
	}
	for(i=0;i<=9;i++){
	   printf("%d,",y[i]);
    }
}*/

//add x[10] and y[10] and print and put in another array
/*#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int z[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array x and y at %d index: ",i);
		scanf("%d %d",&x[i],&y[i]);
	}
    for(i=0;i<=9;i++){
		z[i]=x[i]+y[i];
	}
	printf("elements of z array");
	for(i=0;i<=9;i++){
		printf("%d,",z[i]);
	}
}*/
 
//find maximum 
/*#include<stdio.h>
void main(){
	int x[5];
	int i,max=0;
	for(i=0;i<=5;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=5;i++){
		if(x[i]>x[i+1]){                  //  max=x[0];
			max=x[i];                     //  for(i=0;i<=5;i++){
		}                                 //    if(x[i]>max){
		else{                             //      max=x[i];
			max=x[i+1];                   //    }
		}                                 //  }
	}                                     //  printf("%d",max);
	printf("%d",max);                     //}
}*/

//merge two array in third array
/*#include<stdio.h>
void main(){
	int x[5],y[3],z[8];
	int i,j=0;
	for(i=0;i<=4;i++){
		printf("enter the values of array X at %d index: ",i);
		scanf("%d",&x[i]);
		z[j]=x[i];
		j++;
	}
	for(i=0;i<=2;i++){
		printf("enter the values of array Y at %d index: ",i);
		scanf("%d",&y[i]);
		z[j]=y[i];
		j++;
	}
	printf("elenemts in new Z array----");
	for(i=0;i<=7;i++){
	    printf("%d,",z[i]);
	}
}*/

//inserting an element in array
/*#include<stdio.h>
void main(){
	int x[10];
	int i,p,v;
	for(i=0;i<=8;i++){
		printf("enter the values of array X at %d index: ",i);
		scanf("%d",&x[i]);	
	}
	printf("enter position :");
	scanf("%d",&p);
	printf("enter value :");
	scanf("%d",&v);
	for(i=9;i>=p;i--){
		x[i]=x[i-1];
	}
	x[p]=v;
	printf("array after insertion");
	for(i=0;i<=9;i++){
	    printf("%d,",x[i]);
	}
}*/

//deletion an element
/*#include<stdio.h>
void main(){
	int x[10];
	int i,p,v;
	for(i=0;i<=9;i++){
		printf("enter the values of array X at %d index: ",i);
		scanf("%d",&x[i]);	
	}
	printf("enter position");
	scanf("%d",&p);
    for(i=p;i<=8;i++){
		x[i]=x[i+1];
	}
	printf("array after deletion");
	for(i=0;i<=8;i++){
	    printf("%d,",x[i]);
	}
}*/
/*multidimensions array
-----------------------
int x[5];
syntax
<type> <var>[row][column]

int x[3][5];
initialise any element of 2d array 
  int x[2][3]=4;
  int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
  for( 

//sum of diagonal elements.
/*#include<stdio.h>
void main(){
	int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
	int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){               //s+=x[i][i]
			if(i==j){
				s+=x[i][j];
			}
		}
	}
	printf("%d ",s);
}*/

//multiply two matrixes;
/*#include<stdio.h>
void main(){
	int x[3][3],y[3][3];
	int z[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int i,j,k,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter [%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter [%d][%d] = ",i,j);
			scanf("%d",&y[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s=0;
			for(k=0;k<3;k++){
				s+=(x[i][k]*y[k][j]);
			}
			z[i][j]=s;
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",z[i][j]);
		}
		printf("\n");
	}
}*/
//check whether two matrices are equal or not.



//add two matrices

//subtract two matrices

//perform scalar matrix multiplication.

//find sum of minor diagonal elements of a matrix.

//sum of each row and column of a matrix.

//interchange diagonal of a matrix.

//find upper triangular matrix.

//finf lower triangular matrix.

//find sum of upper triangular matrix.

//find transpose of a matrix.

//check identity matrix.

//check sparse matrix.

//check symmetric matrix.
