/*
do while
-----------
post condition
int i=1;
do{
printf("%d",i);
i++;
}while(i>=5);
}


*/
//table of any no.
#include<stdio.h>
void main(){
	int i,n,t,ch;
	do{
		printf("enter a no.");
	    scanf("%d",&n);
	    i=1;
	    while(i<=10){
	    	t=n*i;
	    	printf("%d,",t);
	    	i++;
		}
		printf("\n\nmore table press 1 for yes and 0 for no:");
		scanf("%d",&ch);
	}while(ch);
}
