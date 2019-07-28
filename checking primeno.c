#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,status=0;
	clrscr();
	printf("\nChecking a Prime number\nEnter a number");
    scanf("%d",&x);	
	for(i=2;i<=num/2;i++)
	  { if(num%i==0)
        status==0;
         break();	
	  }		
	  if(status==0)
		 printf("\n %d is Prime number",num); 
	  else
		 printf("\n%d is not a Prime number",num);
	  getch();
	}