//Write a program in C to check enter no is even or odd.

#include<stdio.h>
void main()
{   
    int N;
    printf("My roll no is : 22206 \n");
	printf("Please Enter a number : ");
	scanf("%d",&N);
	if(N%2==0)
	{
		printf("Entered no is Even");
		
	}
	
	else
	{
		printf("No Entered is odd");
	}
	
	getch();
}
