#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("\nMultiplication of two number\n Enter first number ");
	scanf("%d",&x);
	printf("\nEnter second number");
	scanf("%d",&y);
	z=x*y;
	printf("\n%d * %d =",z);
	getch();
}