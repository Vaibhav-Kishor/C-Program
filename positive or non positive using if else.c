#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Checking No. is Positive or Non- positive \n Enter a number");
	scanf("%d",&x);
	if(x>0)
	{
		printf("\n Enter no. is Positive");
	}
	else
	{
		printf("\n Enter no. is non-positive");
	}
	getch();
}