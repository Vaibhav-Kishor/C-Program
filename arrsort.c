#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,n,a[20],flag=0;
	clrscr();
	printf("\n Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the data you want to delete");
	scanf("%d",&n);
	m=10;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(n==a[j])
			{
				for(k=j;k<m-1;k++)
				{
					a[k]=a[k+1];
				}
				flag++;
				m--;
			}
		}
	}
	if(flag==0)
		printf("\n Entered number is not found");
	printf("\n FINAL ARRAY");
	for(i=0;i<m;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
}