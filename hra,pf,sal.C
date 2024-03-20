    #include<stdio.h>
    int main()
	{
	float sal,hra,da,pf,netsal;
	printf("enter salary: ");
	scanf("%f",&sal);
	da=sal*55/100;
	printf("DA is: %.3f\n",da);
	hra=sal*16/100;
	printf("HRA is: %f\n",hra);
	pf=sal*12/100;
	printf("PF is: %f\n",pf);
	netsal=sal+da+hra-pf;
	printf("NET SALARY is: %f\n",netsal);
    }
    
