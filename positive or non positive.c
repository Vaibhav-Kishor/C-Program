#include<stdio.h>
#include<conio.h>
void main()
{
  int x;
  clrscr();
  printf("\n checking which is positive and non positive");
  printf("ENTER YOUR NUMBER =>");
  scanf("%d",&x);
  if(x>0)
  {
	  printf("\n your Entered number is positive");
	 
  }	
  if(x<=0)
  {
	  printf("\n your Entered number is non-positive");
  }
  getch();
}