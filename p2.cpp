#include<stdio.h>
main()
{
	int p,q;
	float a,b;
	printf("enter two integers");
	scanf("%d%d",&p,&q); 
	printf("enter two floating point numbers");
	scanf("%f%f",&a,&b);
	printf("the sum of 2integers is %d\n",p+q);
	printf("the difference of 2integers is %d\n",p-q);
	printf("the sum of 2floats is %f\n",a+b);
	printf("the difference of 2floats is %f\n",a-b);
}
