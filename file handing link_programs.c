#include<stdio.h>
#include<stdlib.h>
void main(){
	int ch;
	do{
		system("cls");
		printf("main menu\n");
		printf("1: add employee\n2. display all records\n3. searching\n4. exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		system("cls");
		switch(ch){
			case 1:
				system("insert_record.exe");  //run dos command
			    break;	
			case 2: 
			    system("read_record.exe");   //run dos command
				break;
			case 3:
			    system("search_record.exe");   //run dos command
				break;
			case 4:
			    printf("good bye");
				break;
			default:
				printf("wrong option");
				break;		    
		}while(ch!=4);
	}
}
