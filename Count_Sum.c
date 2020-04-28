//Program to count the no digits of a given number and add them.


#include<stdio.h>

void main()
{  

    printf("My Roll no is 22206:\n\n");	
	int N,sum=0,i,count=0,temp;
	printf("Enter the number:  \n");
	scanf("%d",&N);
	
	
	
	for(i=0;N>0; )
	{
		temp=N%10;
		N=N/10;
		sum+=temp;  //For Sum of all Digits
		    
		count++;  //For Count of Digits
		
	}
	
	printf("The number of digits of the code are %d \n",count);
	
	printf("The sum of the digits entered is %d ",sum);
	getch();
	
}
