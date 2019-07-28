//wap to Read marks of a student in five subjects of a college and calculate    his total of marks and also  calculate percentage
#include<stdio.h>
#include<conio.h>
void main()
{
	float s1,s2,s3,s4,s5,total,per;
	clrscr();
	printf("Calculating Total marks and percentage\nEnter marks of first subject");
	scanf("%f",&s1);
	printf("\nEnter marks of second subject");
	scanf("%f",&s2);
	printf("\nEnter marks of third subject");
	scanf("%f",&s3);
	printf("\nEnter marks of fourth subject");
	scanf("%f",&s4);
	printf("\nEnter marks of five subject");
	scanf("%f",&s5);
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("\nTotal marks =%d \n per= %d",total,per);
    getch();	
}