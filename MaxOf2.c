//Write a program to dislay maxium of 2

#include<stdio.h>
void main()
{   int a,b;

    printf("My roll no is 22206 \n");
    
	printf("Please Enter two no :");
	scanf("%d %d",&a ,&b);
	if(a>b)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}
	getch();
}
