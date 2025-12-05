#include<stdio.h>
main()
{
	int a,b,c,d;
	float result;
	printf("enter the a,b,c,d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	result=a/b*c-b+a*d/3;
	printf("the result is %f",result);
}
