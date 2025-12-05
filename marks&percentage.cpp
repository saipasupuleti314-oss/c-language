//program to print total marks and percentage .
#include <stdio.h>
main()
{
	int i,marks[6],per,sum=0;
	for(i=0;i<=5;i++)
	{
		printf("enter sub %d marks",i+1);
		scanf("%d",&marks[i]);
}
for(i=0;i<=5;i++)
{
	sum=sum+marks[i];
}
per=(sum*100)/600;
printf("the total marks %d",sum);
printf("the percentage is %d",per);
}
