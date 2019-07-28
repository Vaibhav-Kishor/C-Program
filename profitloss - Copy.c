//Program to checking profit and loss
#include<stdio.h>
#include<conio.h>
void main()
{ float cp,sp;
  clrscr();
  printf("\nEnter cost price => ");
  scanf("%f",&cp);
  printf("\nEnter selling price => ");
  scanf("%f",&sp);
  if(cs<sp)
    printf("\nProfit =%.2f",sp-cp);
  else if (sp<cp)
    pritf("\nLoss =%.2f",cp-sp);
  else
	printf("\n No profit and No Loss");
  getch();
}