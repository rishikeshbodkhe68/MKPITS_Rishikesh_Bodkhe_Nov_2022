#include<stdio.h>
#include<conio.h>
void main()
{
int i,num[5],total=0;
clrscr();
printf("enter first number \n");
scanf("%d",&num[0]);
printf("enter second number \n");
scanf("%d",&num[1]);
printf("enter third number \n");
scanf("%d",&num[2]);
printf("enter fourth number \n");
scanf("%d",&num[3]);
printf("enter fifth number \n");
scanf("%d",&num[4]);
for(i=0;i<5;i++)
{
if((num[i]%2)!=0)
{
total+=num[i];
}
}
printf("sum of all odd number : %d \n", total);
getch();
}
