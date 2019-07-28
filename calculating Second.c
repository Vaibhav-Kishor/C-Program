#include<stdio.h>
#include<conio.h>
void main()
{
	int h,m,s,total sec;
	clrscr();
	printf("\nCalculating Second\nEnter Hour => ");
	scanf("%d",&h);
	printf("\nEnter minute => ");
	scanf("%d",&m);
	printf("\nEnter Second =>");
	scanf("%d",&s);
    total sec= (h*3600)+(m*60)+ s;
    printf("\n Total Second =%d ",total sec);	
	getch();
}