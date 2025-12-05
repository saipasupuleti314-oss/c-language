 #include<stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter integer");
	scanf("%d",&x);
	printf("enter floating point number");
	scanf("%f",&y);
	printf("entre a character");
	scanf("\n");
	scanf("%c",&ch);
    printf("entre a string");
    scanf("%s",s);
    printf("the integer is %d\n",x);
    printf("the floating point numbers is %f\n",y);
    printf("the character is %c\n",ch);
    printf("the string is %s",s);
}
