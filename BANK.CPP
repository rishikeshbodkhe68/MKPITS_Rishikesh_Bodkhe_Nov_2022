#include<stdio.h>
#include<conio.h>
void main()
{
int amount,total;
clrscr();
printf("enter amount \n");
scanf("%d",&amount);
total=amount/100;
printf("there are");
printf("\n%d note of 100",total);
amount=amount-(total*100);
total=amount/50;
printf("\n%d note of 50",total);
amount=amount-(total*50);
total=amount/10;
printf("\n%d note of 10",total);
amount=amount-(total*10);
getch();
}


