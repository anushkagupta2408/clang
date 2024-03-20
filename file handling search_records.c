#include<stdio.h>
typedef struct manager{
	int id;
	long salary;
	char name[30];
}mng;

void main(){
  
    mng m;
    int da,hra,ns,id,found=0,x;
    FILE *p;
    p=fopen("mng.db","r"); 
    
    if(p==NULL){
       printf("file not found pls insert record in afile");
	}
	else{
		printf("enter employee id you want to reach");
		scanf("%d",&x);
		printf("\n\n\t\t\t\t\t\t\tmanager records\n");
		printf("\t\t\t--------------------------------------------------------------------------------------\n");
		printf("\t\t\tid\t  name\t\tsalary\t\tDA[40%%]\t\tHRS[16%%]\tns\ttotal\n");
		printf("\t\t\t-------------------------------------------------------------------------------------\n");
		
		while(!feof(p)){
			fread(&m,sizeof(m),1,p);
			if(feof(p)){
				break;
			}
			if(id=m.id){
			da=m.salary*40/100;
			hra=m.salary*16/100;
			ns=m.salary+da+hra;
			printf("\t\t\t%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n",m.id,m.name,m.salary,da,hra,ns);
			found=1;
			break;
		    }
	    }
	    if(found==0){
	     	printf("\t\t\tmanager record not found %d\n\n\n",x);
	    }
    }
    fclose(p);
}
