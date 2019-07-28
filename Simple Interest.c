#include<stdio.h>
#include<conio.h>
void main()
{  
  float si,p,t,r;
  clrscr();
  printf("\nCalculating Simple Interest\n Enter the principal");
  scanf("%f",p);
  printf("\nEnter the time");
  scanf("%f",&t);
  printf("\nEnter the rate");
  scanf("%f",&r);
  si=(p*t*r)/100;
  printf("\n SI= %f",si);
  getch();  
	
}