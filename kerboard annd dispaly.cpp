//program to enter marks from keyboard and dispaly
#include<stdio.h>
main()
{
	int i,marks[6];
	for(i=0;i<=5;i++)
	{
		printf("enter subject %d marks",i+1n);
		scanf("%d",&marks[i]);
	}
	printf("the marks are");
	for(i=0;i<=5;i++)
	{
		printf("%d\t",marks[i]);
	}
}
