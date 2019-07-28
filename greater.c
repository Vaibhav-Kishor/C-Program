#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y;
 clrscr();
 printf("\nChecking a greater no.\n Enter your first number");
 scanf("%d",&x);
 printf("\nEnter your second number");
 scanf("%d",&y);
 if(x>y)
   printf("\n %d is Greater than %d",x,y);
 else
   printf("\n %d is Greater than %d",y,x);
   getch();
}