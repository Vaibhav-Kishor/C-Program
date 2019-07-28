//program to checking character is digit or capital or small or special symbol
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr;
  printf("\nEnter a Character");
  scanf("%f"&ch);
  if(ch=>48&&ch<=65)
    printf("\nEntered Character is digit");
  else if (ch=>65&&ch<=90)
    printf("\nEntered character is Captial");
  else if (ch=>90&&ch<=122)
    printf("\n Entered Character is Small");
	else
	printf("\nEntered character is Special Symbol");
	getch();
}