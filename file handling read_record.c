#include<stdio.h>
typedef struct manager{
	int id;
	long salary;
	char name[30];
}mng;

void main(){
  
    mng m;
    int da,hra,ns;
    FILE *p;
    p=fopen("mng.db","r"); 
    
    if(p==NULL){
       printf("file not found pls insert record in afile")
	}
	else{
		printf("\n\n\t\t\t\tmanager records");
		printf("\t\t\t-----------------------------------------------------");
		printf("\t\t\tid\tname\tsalary\t\tDA[40%%]\t\tHRS[16%%]\t\ttotal\n");
		printf("\t\t\t-----------------------------------------------------");
		
		while(!feof(p)){
			fread(&m,sizeof(m),1,p);
			if(feof(p)){
				break;
			}
			da=m.salary*40/100;
			hra=m.salary*16\100;
			ns=m.salary+da+hra;
			printf("\t\t\t%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n",m.id,m.name,m.salary,da,hra,ns);
		}
	}
	printf("press any key to contimue....");
	scanf("%c",&x);
	fclose(p);
}
	
