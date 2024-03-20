/*
  pointer
-----------
pointer is a special variable which store address of some memory location ormemory variable .
int x=100;
print x;
---syntax---
<type> *<variable>;
int *p;

address
------------
1. these are hexa code (16 bit code )
   printf("%x",100);  %x gives the hexa value
2. its size is 8 bytes in 64 bit compiler
3. they represent some memory location
4. always positive in nature(%u)
5. & is used to read an address of some memory block
6. address+ means next address

  *
------


*/
//...address...
#include<stdio.h>
void main(){
	int x=40,*p;
	float y=90.67,*q;
	char z='y',*r;
	printf("%d , %d\n",sizeof(x),sizeof(p));
	printf("%d , %d\n",sizeof(y),sizeof(q));
	printf("%d , %d\n",sizeof(z),sizeof(r));
	printf("%u\n",x); //40
	p=&x; //100
	q=&y;  //200
	
	printf("%u\n",&x);//base address of x 100
	printf("%u\n",&p);//base address of p  722
	printf("%u\n",*(&x));// value at base address 40
	printf("%u\n",*(&p));//   100
	printf("%u\n",**(&p));// 40
	//printf("%u\n",***(&p));// error
	//printf("%u\n",*x);// error
	printf("%d\n",q); //base address of y  =200
	printf("%f\n",*q); // value at its base address 90.67
	printf("%u\n",*(&q)); //200
	printf("%f\n",**(&q)); //90.67
	printf("%.2f\n",*(&y));  //90.67
}
