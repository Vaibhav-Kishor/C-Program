// wap to print of Ascii code of Character
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("\nEnter any Character");
  scanf("%c",&ch);
  printf("\nASCII code of %c is %d",ch,ch);
  getch();
}