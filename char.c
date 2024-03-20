/*input any character throw keyboard and check
whether its in uppercase,lowercase,digits or a special 
chsracter*/
/*#include<stdio.h>
void main(){
	char x;
	printf("enter any chatracter");
	scanf("%c",&x);
	if(x>='a' && x<='z'){
		printf("lowercase");
	}
	elseif(x>='A' && x<='Z'){
		printf("uppercase");           //error
	}
	elseif(x>='0' && x<='9'){
		printf("digit");
	}
	else{
		printf("specialcharacter");
	}
}*/
/*#include<stdio.h>
void main(){
	char x;
	printf("enter any chatracter");
	scanf("%c",&x);
	if(x>='a' && x<='z'|| x>='A'&& x<='Z'){	
		printf("alphabet\n");
	    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'){
	    	printf("it is a vowel");
		}
		else{
			printf("it is a consonent");
		}	
    }
    else{
    	printf("not a alphabet");
	}

}*/

//print all ascii characters
/*#include<stdio.h>
void main(){
	int i;
	for(i=0;i<=255;i++){
		printf("%d-%c  ",i,i);
	}
}*/


//print  5 times ABCDE
/*#include<stdio.h>
void main(){
	int i;
	char j;
	for(i=1;i<=5;i++){
		for(j='A';j<='E';j++){
			printf("%c",j);
		}
		printf("\n");
	}
}*/

//same
/*#include<stdio.h>
void main(){
	char i;
	char j;
	for(i='A';i<='E';i++){
		for(j='A';j<='E';j++){
			printf("%c",j);
		}
		printf("\n");
	}
}
*/
//print half pyranid type 
#include<stdio.h>
void main(){
	char i;
	char j;
	for(i='A';i<='E';i++){
		for(j='A';j<=i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
}



