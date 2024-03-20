#include<stdio.h>
typedef struct student{
	char name[30];
	int roll,p,c,m;
	
}std;
void main(){
	std s;
	char ch;
	FILE *p;
	p=fopen("student.db","r");
	if(p==NULL){
		p=fopen("student.db","w");
	}
	else{
	    p=fopen("student.db","a");	
	}
	do{
		printf("enter the roll no.");
		scanf("%d",&s.roll);
		printf("enter the name");
		fflush(stdin);
		gets(s.name);
		printf("enter the physics marks");
		scanf("%d",&s.p);
		printf("enter the chemistry marks");
		scanf("%d",&s.c);
		printf("enter the maths marks");
		scanf("%d",&s.m);
		fwrite(&s,sizeof(s),1,p);
		printf("do you want to add more student details(y/n) ?");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	fclose(p);
}
