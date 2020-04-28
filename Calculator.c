// To program a calculator + , -,*,/ using Functions


#include<stdio.h>
#include<string.h>
#include<process.h>
int  check_password();

float addition(float,float);

float substraction(float,float );

float multiplication(float,float);

float division(float,float);





void main()
{
	
	
	int flag_pass=0;
	printf("\n****************** CALCULATOR BY AYUSHMAN RAYAGURU *********************\n\n\n\n");
	printf("My Roll No Is : 22206\n\n");
	
	printf("Please Enter the user name and password \n");
	
	
	flag_pass=check_password();
	
	if(flag_pass==0)
	{
		printf("Invalid user id or password ") ;
		
		exit(1);
	}
	
	int choice;
	
	float value_1,value_2;
	
	float answer;
	
	int driver_flag=0;
	
	
	do{
	
	
	printf("Please Select any option from Menu\n");
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	
	printf("Enter your choice");
	
	
	scanf("%d",&choice);
	
	printf("\nPlease Enter the value 1:");
	scanf("%f",&value_1);	
	
	
	printf("\nPlease Enter the value 2:");
	scanf("%f",&value_2);
	
	

	
	switch (choice)
	{
		case 1:
			{ 
				answer=addition(value_1,value_2);
				break;
			}
		
		case 2:
			{
				answer=substraction(value_1,value_2);
					break;
			}
		
		case 3:
			{
				answer=multiplication(value_1,value_2);
					break;
			}
		
		case 4:
			{
				answer=division(value_1,value_2);
					break;
			}
			
		default :
			{
				
				printf("Invalid Choice !!!!!!");
				printf("Please Retry");
			}
		
		
	}
		
		
		printf("the answeris: %f",answer);
		
	
		printf("\nif you want to exit press 1 else press 0 :");
		scanf("%d",&driver_flag);
	
	
} while(driver_flag!=1);
		
		
}

int  check_password()
	{	char user_name[100],password[100];
	
		printf("Username:  ");
		
		gets(user_name);
		
		int temp_1,temp_2;
		
		printf("\nPassword:  ");
		
		temp_1=strcmp("Ayushman",user_name);
		
		gets(password);
		
		temp_2=strcmp("4321",password);
		
	
		
		
		if(temp_1==0 && temp_2==0)
		{	return 1;
		}
		
		else 
		{	return 0;
		}
		
	}
	
	
	
float addition(float value_1,float value_2)

{	float temp;

	temp=value_1+value_2;
	
	
	return temp;
	
	
}


float substraction(float value_1,float value_2)

{	float temp;

	temp= value_1-value_2;
	
	
	return temp;
	
	
}


float multiplication(float value_1,float value_2)

{	float temp;

	temp= (float)value_1*value_2;
	
	
	return temp;
	
	
}



float division(float value_1,float value_2)

{	float temp;

	temp= (float)value_1/value_2;
	
	
	return temp;
	
	
}

