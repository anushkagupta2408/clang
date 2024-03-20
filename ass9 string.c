//copy a string
/*#include<stdio.h>
void main(){
	int i;
	char a[25];
	char b[25];
	printf("enter a string");
	gets(a);
	/*for(i=0;a[i];i=i+2){
		t=a[i];
		a[i+1]=a[i];
		a[i+1]=t;*/
	//}
	/*for(i=0;a[i];i++){
		b[i]=a[i];
	}
	b[i]=0;
	printf("%s",b);
}*/
//reverse a string;
/*#include<stdio.h>
void main(){
	int i,c=0,j;
	char a[25];
	char b[25];
	printf("enter a string");
	gets(a);  //anushka
	
	for(i=0;a[i];i++);
	
	for(i=i-1;i>=0;i--){
		b[j++]=a[i];		
	}
	b[j]=0;
	printf("%s",b);
}*/

//	
/*#include<stdio.h>
void main(){
	int i,j;
	char a[25];
	char b[25],c[50];
	printf("enter first string");
	gets(a);//ravi	
	printf("enter second string");
	gets(b);//kumar
	for(i=0;a[i];i++){
		c[i]=a[i];
	}
	c[i]=32;
	i++;
	for(j=0;b[j];j++){
		c[i+j]=b[j];
	}
	c[i]=0;
	printf("%s",c);
}*/
//
/*#include<stdio.h>
void main(){
	int i,t;
	char a[25];
	char b[25];
	printf("enter a string");
	gets(a);
	for(i=0;a[i];i=i+2){
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	a[i-1]=0;
	printf("%s",a);		
}*/
	
//	ram kumar sharma===r.k.sharma
#include<stdio.h>
void main(){
	int i,j;
	char a[25];
	char b[25];
	printf("enter a string");
	gets(a);	
	for(i=0;a[i];i=i+2){
		b[j]=a[i];
		b[j+1]='@';
	}
	printf("%s",b);
}
	
//this is a test	
//inplace of t or any character put any character	
