#include<stdio.h>
typedef struct student{
    	char name[30];
	int roll,p,c,m;

}std;
void main(){
	std s;
	char x,g;
	int t,per;
	FILE *p;
	p=fopen("student.db","r");
	if(p==NULL){
		printf("file is not found please insert the record..\n");
	}
	else{
	    printf("\n\n\t\t\t\t\tstudents records\n");
		printf("\t\t-------------------------------------------------------------------------------------\n");
		printf("\t\troll no.\tname\tphysics\t  chemistry\tmath\ttotal\tpercentage\tgrade\n");
		printf("\t\t-------------------------------------------------------------------------------------\n");
		
		while(!feof(p)){
			fread(&s,sizeof(s),1,p);
			if(feof(p)){
				break;
			}
			t=s.p+s.c+s.m;
			per=t/3;
			if(per<=100&&per>=60){
				g='A';
			}
			else if(per<=59&&per>=48){
				g='B';
			}
			else if(per<=47&&per>=33){
				g='C';
			}
			else{
				g='D';
			}
			 printf("\t\t  %d\t\t%s\t %d\t   %d\t\t%d\t%d\t%d%%\t\t%c\n",s.roll,s.name,s.p,s.c,s.m,t,per,g);  
		}	
	}
	printf("press any key to contimue....");
	scanf("%c",&x);
	fclose(p);
}
