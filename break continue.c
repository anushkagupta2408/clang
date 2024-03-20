/* break statement
-----------------------
use to stop the loop

int i=1;
while(i<=10){
    printf("%d",i);            //output is 12345
    if(i==5){
    break;
    }
}
}

continue statement
----------------------
use to throw the control to while expression
int i=1;
while(i<=10){
    printf("%d",i);
    if(i<=5){
        i=i+1;                 // output is 123456810
        continue;
    }
    i=i+2;
}
}
*/
//1.check no. is prime or not.
/*#include<stdio.h>
void main(){
	int n,i=2;
	printf("enter a no.");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			printf("%d is not prime",n);
			break;
		}
		else{
			i++;
		}
	}
}*/




