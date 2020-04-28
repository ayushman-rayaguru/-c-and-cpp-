#include<stdio.h>
int n=3,i;
struct Details
			{
				int Roll_No;
				char Student_Name[50];
				int Marks;
				float Student_Percentage;

				
			};
void read(struct Details STU[],int n );
void display(struct Details STU[],int n );
void bubble_sort(struct Details STU[],int n);
void L_Search(struct Details STU[],int );
int swap(struct Details*x,struct Details*y);

main()

{    struct Details STU[100]; 
     /*printf("ENTER NO OF STUDENTS  : \n");
     scanf("%d",&n); */
	  printf("************************ DSA PRACTICAL 3(DATABASE IN C) ************************ \n\n");
	  printf("MY ROLL NO IS 22206\n");
	  printf("OOOOOOOOOOOOOOOOOOOOOOO    STUDENT RECORDS DATABASE    OOOOOOOOOOOOOOOOOOOOOOO\n\n");
			read(STU,n );
			//fflush(stdin);
			printf("THE STUDENT DATABASE SUCCESSFULLY CREATED !!\n");
			bubble_sort(STU,n);
			display(STU,n);
			printf("ENTER THE ROLL NO TO GET RECORD OF A STUDENT :");
			L_Search(STU,n);
						
}


void read(struct Details STU[],int n )
	{ printf("ENTER STUDENTS ROLL NO,NAME,MARKS,PERCENTAGE: \n");
	  
	  for(i=0;i<n;i++)	
		
		{
			scanf("%d %s %d %f",&STU[i].Roll_No,&STU[i].Student_Name,&STU[i].Marks,&STU[i].Student_Percentage);
		}
		
	}	
	
void display(struct Details STU[],int n )
   {
		printf("\t\t *****STUDENT DATABASE***** \n\n");
		printf("-----------------------------------------\n");
		printf("ROLL NO\t|NAME\t|MARKS\t|PERCENTAGE\t|\n");
		printf("-----------------------------------------\n");
		for(i=0;i<n;i++)	
		
		
		{
			printf("%-2d\t %-6s\t %-2d\t %0.2f\t",STU[i].Roll_No,STU[i].Student_Name,STU[i].Marks,STU[i].Student_Percentage);
			printf("\n-----------------------------------------\n");	
		}
		
   }
   
   
   void bubble_sort(struct Details STU[],int n)
{
  long c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)    //d=comparison  and c = pass
  {
  /*printf(" \n========================================\n pass %d : ", c+1 );*/
  
    for (d = 0 ; d < n - c - 1; d++)
    {
    /* printf(" \n No of Comparison %d : ", d );*/
     
      if (STU[d].Student_Percentage < STU[d+1].Student_Percentage)
      {
      	
        swap(&STU[d],&STU[d+1]);
        
		/* Swapping 
        
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;*/
      }
      /*display(array,n);*/ 
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
	
	void L_Search(struct Details STU[],int n )
{
	int R_No;
	scanf("%d",&R_No);
	
	for(i=0;i<n;i++)
	{
		if(R_No==STU[i].Roll_No)
		{   
		    printf("\n-----------------------------------------\n ");
			printf("%-2d\t %-6s\t %-2d\t %0.2f\t",STU[i].Roll_No,STU[i].Student_Name,STU[i].Marks,STU[i].Student_Percentage);
			printf("\n-----------------------------------------\n ");
	    }
	
    }  
}

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   /* -------------------------------------------------------------------------
      _________________________________________________________________________*/
   
