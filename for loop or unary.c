/*

unary operations
++  [increment of one]
--  [decrement of one]

-post initializzation
 i++;                  
-pre initialization 
 i--;
 
 ++i pehle incerement bad m(in next step) initialization
 i++ pehle initialization bad m(in next step) increment
 
#include<stdio.h>
void main(){
  int i=1;
  i++;  // ++i;                //output is 2
  printf("%d,\n",i);	
} 

//pre increment
#include<stdio.h>
void main(){
  int i=1;
  printf("%d,\n",++i);    //output is 2
  printf("%d,\n",i);	  // 2
} 

//post incerement
#include<stdio.h>
void main(){
  int i=1;
  printf("%d,\n",i++);    //output is 1
  printf("%d,\n",i);	  // 2
  
} 
 
 binary 2
 unary 1          pehle unary solve hoga
*/

/*#include<stdio.h>
void main(){
  int i=1,c;
  c=i++;                     // output is 2,1
  printf("%d,%d\n",i,c);	
}*/
// if c=++i; hota to output 2,2 
// if c=i++ + i++; hota to output 3,3 
// if c=++i+ ++i; hota to output 3,6
// if c=++i + i++; hota to output 3,5
// if c=i++ + ++i; hota to output is 3,4
// if c=(i++ + i++) + i++ ; hota to output 4,6 
// if c=(++i + ++i) + ++i; hota to putput if 4,10
// if c=(i++ + ++i) + i++) hota to output is 4,7
// if c=(++i + i++) + ++i; hota to output is 4,9
  
/*#include<stdio.h>
void main(){
  int k=99,j=100,c;
  c=j++ + ++k;             // output is 100,101,200
  printf("%d,%d,%d\n",k,j,c);	
}  
*/

/*#include<stdio.h>
void main(){
int i=10,j=20,k;
 k=++i + ++j;             // output is 33,11,22
printf("%d,%d,%d\n",++k,i++,++j);	
} 
*/ 

