/*syntax of goto
unconditional looping

<label>:
	 statement like printf,if,scanf etc;
	goto <label>;
	
	ex:  void main(){
		xyz:
			printf("hello");
		 goto xyz;
	}



/* print 2,4,6,8*/
/*#include <stdio.h>
void main(){
	int i=2;
	abc:
		printf("%d\n",i);
		i=i+2;
		if(i<=10){
			goto abc;
		}
}  */

/* print 10,9,8,7............0
#include<stdio.h>
void main(){
	int i= 10;
	xyz:
		printf("%d\n",i);
		i=i-1;
		if(i>0){
			goto xyz;
		}
}

/* print 1,3,5,7,9
#include<stdio.h>
void main(){
	int i=1;
	aaa:
		printf("%d\n",i);
		i=i+2;
		if(i<10){
		goto aaa;
		}
}*/


//2,4,8,10,16,20,22
/* #include<stdio.h>
void main(){
	int i=2;
	abc:
		printf("%d"\n,i);
		i=i+2;
		printf("%d"\n,i);
		i=i+4;
		if(i<=22){
			goto abc;
		}
}*/

//1,1,1,2,4,8,3,9,27,4,16,64,5,25,125
/*#include<stdio.h>
void main(){
	int i=1,s,c;
	abc:
		printf("%d," ,i);
	    s=i*i;
	    printf("%d," ,s);
	    c=i*i*i;
	    printf("%d," ,c);
	    i=i+1;
	    if(i<=5){
	    	goto abc;
		}
}*/

//1,2,4,8,16,32,64,
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



