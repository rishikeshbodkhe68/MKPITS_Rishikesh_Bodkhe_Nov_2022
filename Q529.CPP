#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,temp,k,sum=0;
clrscr();
printf("enter first number\n");
scanf("%d",&i);
printf("enter second number\n");
scanf("%d",&j);
if(i>j)
{
temp=j;
j=i;
i=temp;
}
for(k=i;k<=j;k++)
{
if((k%17)!=0)
{
sum+=k;
}
}
printf("sum %d \n",sum);
getch();
}