#include<stdio.h>
main()
{
 float c,f,newf,newc;
 printf("enter temperature in celcious");
 scanf("%f",&c);
 newf=c*1.8+32;
 printf("the temperature in farenheit is %f\n",newf);
 printf("entre temperature in farenheit");
 scanf("%f",&f);
 newc=(f-32)*1.8;
 printf("the temperature in celcious is %f",newc);
 
}
