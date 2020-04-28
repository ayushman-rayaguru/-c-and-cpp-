#include<stdio.h>
#include<string.h>
int i,j,loc,p;
/*int SIZE= 5;*/
char name[50];
struct Details
			{   
			    char Acc_Owner[50];
				int Followers;
				int Following;
				int Posts;
				int Acc_Blocked;

			};
void read(struct Details INSTA[],int n);
void display(struct Details INSTA[],int n);
void bubble_sort(struct Details INSTA[],int n);
void L_Search(struct Details INSTA[],int n);
int Delete(struct Details INSTA[],int n);
int append(struct Details INSTA[],int n);
int insert(struct Details INSTA[],int p,int n);
int modify(struct Details INSTA[],int n);
int swap(struct Details*x,struct Details*y);



int main()
{    struct Details INSTA[100]; 
     int  n;
     int choice;
     int option = 1;
     
	  printf("************************ DSA PRACTICAL 4(DATABASE IN C) ************************ \n\n");
	  printf("MY ROLL NO IS 22206\n");
	  printf("OOOOOOOOOOOOOOOOOOOOOOO    INSTAGRAM DATABASE    OOOOOOOOOOOOOOOOOOOOOOO\n\n");
	  
	 printf("ENTER NO OF STUDENTS  : \n");
     scanf("%d",&n);
	  read(INSTA,n);
			//fflush(stdin);
			printf("THE INSTAGRAM DATABASE SUCCESSFULLY CREATED !!\n\n");
			bubble_sort(INSTA,n);
			display(INSTA,n);
	   while (option)
    {
        printf ("__________________________________________\n"); 
        printf ("      1 DELETE               \n");
        printf ("      2 APPEND              \n");
        printf ("      3 INSERT               \n");
        printf ("      4 SEARCH         \n");
        printf ("      5 EXIT         \n");
        printf ("      6 MODIFY       \n");
        printf ("__________________________________________\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("ENTER THE NAME OF ACCOUNT TO BE DELETED:");
		    n=Delete(INSTA,n);
		    display(INSTA,n);
            break;
        case 2:
            printf("ENTER DETAILS FOR ACCOUNT TO BE APPENDED:\n");
		    n=append(INSTA,n);
		    display(INSTA,n);
		    break;
        case 3:
            printf("ENTER DETAILS OF ACCOUNT FOR INSERTION:\n");
		    n=insert(INSTA,p,n);
		    display(INSTA,n);;
            break;
        case 4:
        	printf("ENTER THE NAME OF ACCOUNT TO GET RECORD OF USER :\n");
			L_Search(INSTA,n);
            break;
        case 5:
            return;
        case 6:
        	printf("ENTER THE NAME OF ACCOUNT TO BE MODIFIED:");
		    n=modify(INSTA,n);
		    display(INSTA,n);
		    break;
        	
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 for NO or 1 for YES)?\n");
        scanf    ("%d", &option);
    }
			
	
  return 0;						
}



void read(struct Details INSTA[],int n)
	{ printf("ENTER USER NAME,FOLLOWERS,FOLLOWING,POSTS,ACCOUNTS BLOCKED: \n");
	  
	  for(i=0;i<n;i++)	
		
		{
			scanf("%s %d %d %d %d",&INSTA[i].Acc_Owner,&INSTA[i].Followers,&INSTA[i].Following,&INSTA[i].Posts,&INSTA[i].Acc_Blocked);
		}
		
	}	
	
void display(struct Details INSTA[],int n)
   {
		printf("\t\t *****INSTAGRAM DATABASE***** \n\n");
		printf("-------------------------------------------------------------------\n");
		printf("NAME\t|FOLLOWERS\t|FOLLOWING\t|POST\t|ACCOUNTS BLOCKED\n");
		printf("-------------------------------------------------------------------\n");
		
		for(i=0;i<n;i++)		
		{
			printf("%s\t %d\t\t  %d\t\t %d\t\t %d\t\t",INSTA[i].Acc_Owner,INSTA[i].Followers,INSTA[i].Following,INSTA[i].Posts,INSTA[i].Acc_Blocked);
			printf("\n-------------------------------------------------------------------\n");	
		}
		
   }
   
   
   void bubble_sort(struct Details INSTA[],int n)
{
  long c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)    //d=comparison  and c = pass
  {
  
    for (d = 0 ; d < n - c - 1; d++)
    {
     
      if (INSTA[d].Followers < INSTA[d+1].Followers)
      {
      	
        swap(&INSTA[d],&INSTA[d+1]);
        
  	  } 
    }
   
  }
  printf("No of Comparison= %d and Pass = %d",d,c+1);
  printf(" \n\n");
  }
   
  
  int swap(struct Details*x,struct Details*y)
	{
		struct Details temp;
		temp = *x;
		*x = *y;
		*y = temp;
	}
	
	
void L_Search(struct Details INSTA[],int n)
{	
    scanf("%s",name);
	for(i=0;i<n;i++)
 	{
		if(strcmp(name,INSTA[i].Acc_Owner)==0)
		{   
		    printf("\n-------------------------------------------------------------------\n ");
			printf("%s\t %d\t\t  %d\t\t %d\t\t %d\t\t",INSTA[i].Acc_Owner,INSTA[i].Followers,INSTA[i].Following,INSTA[i].Posts,INSTA[i].Acc_Blocked);
			printf("\n-------------------------------------------------------------------\n ");
	    }
	
    }  
}


int Delete(struct Details INSTA[],int n) 
{  
   scanf("%s",name);
   // Search x in array 
   int k; 
   for (i=0; i<n; i++) 
   {
	   if(strcmp(name,INSTA[i].Acc_Owner)==0) 
	   {
		 for (k=i; k<n; k++) 
	     {
	   
             INSTA[k]=INSTA[k+1];
              /*arr[j] = arr[j+1]; */
         }
       }
   }
	  n=n-1;
   return n;
  /* return n; */
} 

int append(struct Details INSTA[],int n)
{   n=n+1;
	printf("ENTER USER NAME,FOLLOWERS,FOLLOWING,POSTS,ACCOUNTS BLOCKED: \n");
	scanf("%s %d %d %d %d",INSTA[n-1].Acc_Owner,&INSTA[n-1].Followers,&INSTA[n-1].Following,&INSTA[n-1].Posts,&INSTA[n-1].Acc_Blocked);
	return n;
			
}
   
int insert(struct Details INSTA[],int pos,int n) 
{  /*int pos;*/
   printf("ENTER THE POSITION OF INSERTION OF DATA:");
   scanf("%d",&pos);
   // Search x in array 
   int k; 
   for (k=0; k<n; k++) 
   {  
    if(k==pos)  
	{
	 for (j=k; j<n; j++) 
     {
     INSTA[j+1]= INSTA[j];
     /*arr[j] = arr[j+1]; */
    }
   }
  }  
   printf("ENTER THE DETAILS OF CURRENTLY INSERTED RECORD : \n");
  scanf("%s %d %d %d %d",&INSTA[pos-1].Acc_Owner,&INSTA[pos-1].Followers,&INSTA[pos-1].Following,&INSTA[pos-1].Posts,&INSTA[pos-1].Acc_Blocked);
  n=n+1;
  return n;
  /* return n; */
}    
 
int modify(struct Details INSTA[],int n)
{
	scanf("%s",name);
 
   for (i=0; i<n; i++) 
   {
	   if(strcmp(name,INSTA[i].Acc_Owner)==0) 
	   {
	   	printf("ENTER THE NEW NAME FOR ACCOUNT OWNER: ");
	   	
	   	 scanf("%s",&INSTA[i].Acc_Owner);
	   }	   	   	
	
   }
   	 return n;  
}
   



   
   
