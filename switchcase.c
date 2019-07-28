#include<stdio.h>
#include<conio.h>
 main()
 {
	 int choice,x,y,z;
	 while(1)
     {
	 clrscr();
	 printf("\n Enter Your Choice \n No.1. Sum of two no.\n No.2. Sub of Two no.\n No.3 Greater no. between 2no.\n No.4. Exit =>");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	   case 1:
	          printf("\nEnter First no. = ");
			  scanf("%d",&x);
			  printf("\nEnter Secon no. = ");
			  scanf("%d",&y);
			  z=x+y;
			  printf("\nSum of %d and %d = %d",x,y,z);
			  break;
	   case 2:
              printf("\nEnter First no. = ");
              scanf("%d",&x);
              printf("\nEnter Second no. = ");
              scanf("%d",&y);
              z=x-y;
              printf("\nSub of %d and %d = %d ",x,y,z);
              break;
       case 3:
              printf("\nEnter First no. = ");
              scanf("%d",&x);
              printf("\nEnter Second no. = ");
              scanf("%d",&y);
              if(x>y)
			  {
		        printf("\n%d is Greater than %d",x,y);
		      }
			  else
			  {
				  printf("\n%d is Greater than %d",y,x);
				   }
			  break;
	   case 4:
              exit(0);
       default:
               printf("\nInvalid Choice");
	    }
			getch();
	 }


 }
