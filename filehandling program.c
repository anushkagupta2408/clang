#include<stdio.h>
typedef struct manager{
	int id;
	long salary;
	char name[30];
}mng;

void main(){
  
    mng m;
    char ch;
    FILE *p;
    p=fopen("mng.db","r"); 
    
    if(p==NULL){
      p=fopen("mng.db","w");	
	}
	else{
		p=fopen("mng.db","a");
	}
	
	do{
    printf("enter manager1 id ");
  	scanf("%d",&m.id);
  	printf("enter manager1 name");
  	fflush(stdin); //clean the keyboard buffer
  	gets(m.name);
  	printf("enter the manager1 salary");
  	scanf("%d",&m.salary);
  	fwrite(&m,sizeof(m),1,p);               //p is address of given file
  	printf("add more manager(y/s)?");
  	fflush(stdin);
  	scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
    
    fclose(p);
}
