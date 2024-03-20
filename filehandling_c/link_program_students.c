#include<stdio.h>
#include<stdlib.h>
void main(){
	int ch;
	do{
		system("cls");
		printf("main menu\n");
		printf("1: add student record\n2. display all records\n3. searching student details\n4. exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		system("cls");
		switch(ch){
			case 1:
				system("insert_records_student.exe");  //run dos command
			    break;	
			case 2: 
			    system("read_records_student.exe");   //run dos command
				break;
			case 3:
			    system("search_record_student.exe");   //run dos command
				break;
			case 5:
				system("delete_record_student.exe");   //run dos command
				break;
			case 4:
			    printf("good bye");
				break;
			default:
				system("cls");
				printf("wrong option");
				printf("wrong");
				break;
	   }
	}while(ch!=4);	
}
