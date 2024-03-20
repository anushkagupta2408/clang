#include "my.h"
BEGIN
int a,b,c;
PF("enter 1st value");
SF(INT,&a);
PF("enter 2nd value");
SF(INT,&b);
c=a+b;
PF(INT,c);
END


