#include<stdio.h>
#define pi:3.14
main()
{
	float r,s,l,b,base,h,cir,sqr,rec,tri;
	printf("enter the value of r,s,l,b,base,h");
	scanf("%f%f%f%f%f%f",&r,&s,&l,&b,&base,&h);
	cir=3.14*r*r;
	printf("area of circle is:%.2f\n",cir);
	sqr=s*s;
	printf("area of squre is:%.2f\n",sqr);
	rec=l*b;
	printf("area of rectangle is:%.2f\n",rec);
	tri=0.5*base*h;
	printf("area of triangle is:%.2f\n",tri);
}
