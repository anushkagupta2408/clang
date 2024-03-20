
/*
#include<stdio.h>
void main(){
	int y,m,d;
	printf("enter date:");
	scanf("%d",&d);
	printf("enter month:");
	scanf("%d",&m);
	printf("enter year:");
	scanf("%d",&y);
	if(y>0){
		printf("year is satisfied\t");
		if(m>0&&m<12){
			printf("month os also satisfy\t");
			if((d>0&&d<=29)&&(y%100!=0&&y%4==0||y%400==0)){
				printf("date is also satisfied");
			}
			else if((d>0&&d<=31)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)){
				printf("date is also satisfied\t");
			}
			else if((d>0&&d<=30)&&(m==2||m==4||m==6||m==9||m==11)){
				printf("date is also satisfied\t");
			}
			else if((d>0&&d<=28)&&(m==2)){
				printf("date is also satisfied\t");
			}
			else{
				printf("date is not also satisfied\t");
			}	
		}
		else{
			printf("month is not also satisfied\t");
		}
	}
	else{
	printf("year is not also satisfied\t");
	}
}
*/
//convert into day hour min sec.(1st method)
/*#include<stdio.h>
void main(){
	int h1,h2,m1,m2,s1,s2,h,m,s,H,M,S,min,sec,hour,day;
	printf("enter h1,m1,s1:");
	scanf("%d %d %d",&h1,&m1,&s1);	
	printf("enter h2,m2,s2:");
	scanf("%d %d %d",&h2,&m2,&s2);
	s=s1+s2;
	m=m1+m2;
	h=h1+h2;
	printf("total %d,%d,%d",h,m,s);
	sec=s/60;
	S=s%60;
	m=m+sec;
	min=m/60;
	M=m%60;
	h=h+min;
	day=h/24;
	H=h%24;
	printf(" %dday %dhour %dmin %dsec",day,H,M,S);
}

/* //(2nd method)
#include<stdio.h>
void main(){
	int h1,h2,m1,m2,s1,s2,h,m,s,d;
	printf("enter h1,m1,s1:");
	scanf("%d %d %d",&h1,&m1,&s1);	
	printf("enter h2,m2,s2:");
	scanf("%d %d %d",&h2,&m2,&s2);
	s=s1+s2;
	m=m1+m2;
	h=h1+h2;
	printf("total %d,%d,%d",h,m,s);
	
	m=m+(s/60);
    s=s%60;
    
    h=h+(m/60);
    m=m%60;
    
    d=h/24;
    h=h%24;
    
   	printf(" %dday,%dhour:%dmin:%dsec",d,h,m,s);
}*/

//convert into cm,m,km.
/*#include<stdio.h>
void main(){
	int cm,m,km,cm1,cm2,m1,m2,km1,km2;
	printf("enter cm1,m1,km1:");
	scanf("%d%d%d",&cm1,&m1,&km1);
	printf("enter cm2,m2,km2:");
	scanf("%d%d%d",&cm2,&m2,&km2);
	cm=cm1+cm2;
	m=m1+m2;
	km=km1+km2;
	cm=cm%100;
	m=m+(cm/100);
	m=m%1000;
	km=km+(m/1000);
	printf(" %dkilometer:%dmeter:%dcentimeter",km,m,cm);
}*/

// convert inches,feet,yards,miles,.
/*#include<stdio.h>
void main(){
	int i1,f1,y1,i2,f2,y2,i,f,y,m;
	printf("enter i1,f1,y1:");
	scanf("%d%d%d",&i1,&f1,&y1);
	printf("enter i2,f2,y2:");
	scanf("%d%d%d",&i2,&f2,&y2);
	i=i1+i2;
	f=f1+f2;
	y=y1+y2;
	i=i%12;
	f=f+(i/12);
	f=f%3;
	y=y+(f/3);
	y=y%1760;
	m=y/1760;
	printf("%dmiles:%dyards:%dfeet:%dinches",m,y,f,i);	
}*/
















