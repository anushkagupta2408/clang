#include<stdio.h>
typedef struct student{
	char name[30];
	int roll,p,c,m;
	
}std;
void main(){
	std s;
	char x,g;
	int t,per,R,found=0;
	FILE *p;
	p=fopen("student.db","r");
	if(p==NULL){
		printf("file is not found please insert the record..\n");
	}
	else{
		t=fopen("temp.db","r");
		printf("please enter roll no. of student you want to delete....:");
		scanf("%d",&R);
		
	    printf("\n\n\t\t\t\t\tstudents records\n");
		printf("\t\t-------------------------------------------------------------------------------------\n");
		
	
		    printf(" roll:%d\t\t1]name:%s\t 4]exit\n",s.roll,s.name);
		    printf("which field you want to edit: ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					printf("enter new name");
					fflush(stdin);
					gets(s.name);
				case 2:
				case 3:
				case 4:
					
				default:
					
			}
			printf("record deleted successfully");
			
			found=1;
		}
		else{
			fwrite(&s,sizeof(s),1,p);
		}			
	
	    }
	    if(found==0){
	    	printf("record not found of roll no. %d\n",R);
		}
    }
	printf("press any key to contimue....\n");
	fflush(stdin);
	scanf("%c",&x);
	fclose(t);
	fclose(p);
	remove("student.db");
	rename("temp.db","student.db");
}
