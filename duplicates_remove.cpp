//Program to remove duplicates from a string
//Asked by : Microsoft

#include<iostream>
using namespace std;
void f(char a[9]);
int n;
int main()
{   char a[9];
	cout<<"PLEASE ENTER THE LENGTH OF STRING  :";
	cin>>n;	
	cout<<endl<<"PLEASE ENTER A STRING :  ";
	for(int i =0 ; i <n ;i++)
	{
		cin>>a[i];
	}
	
	f(a);
}

void f(char a[9])
{ 
	for(int i=0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				for(j;j<n;j++)
				{
					a[j] = a[j+1];
				}
			}
		}
	}
	cout<<"THE STRING RESULT IS : ";
	for(int i =0 ; i <n ;i++)
	{
		cout<<a[i];
	}
	
}
