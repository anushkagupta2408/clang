#include<stdio.h>
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
}
