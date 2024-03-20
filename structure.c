#include<stdio.h>
typedef struct manager{
	int id;
	long salary;
	char name[30];
}mng;

void main(){
  
    /*mng m1,m2,m3;
    
    printf("enter manager1 id ");
  	scanf("%d",&mng1.id);
  	printf("enter manager1 name");
  	fflush(stdin); //clean the keyboard buffer
  	gets(mng1.name);
  	printf("enter the manager1 salary");
  	scanf("%d",mng1.salary);
  	*/
  	mng m[3];
  	int i;
    for(i=0;i<3;i++){
  	printf("enter manager %d id ",i+1);
  	scanf("%d",&m[i].id);
  	printf("enter manager %d name",i+1);
  	fflush(stdin); //clean the keyboard buffer
  	gets(m[i].name);
  	printf("enter the manager %d salary",i+1);
  	scanf("%d",m[i].salary);
    }
	for(i=0;i<3;i++){
	}	
    
  
} 

