//swaping of two numbers using call by value
#include <stdio.h>
void swap(int,int);
main()
{
	int a,b;
	printf("enter a&b values\n");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("in main function after swapimg a=%d,b=%d\n",a,b);
}
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("in swap function after swaping a=%d,b=%d\n",a,b);
}
