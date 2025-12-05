#include<stdio.h>
main()
{
	float u,t,a,d;
	printf("entre u value");
	scanf("%f",&u);
	printf("enter t value");
	scanf("%f",&t);
	printf("enter a value");
	scanf("%f",&a);
	d=u*t+0.5*a*t*t;
	printf("the distance travelled by object is %0.2f",d);
}
