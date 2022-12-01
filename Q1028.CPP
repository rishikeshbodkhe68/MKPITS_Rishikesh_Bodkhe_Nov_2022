#include<stdio.h>
#include<conio.h>
void main()
{
int x,i;
clrscr();
printf("enter number \n");
scanf("%d",&x);
printf("list of square of each of even values from 1 to a %d \n",x);
for(i=2;i<=x;i++)
{
if((i%2)==0)
{
printf("%d^2=%d \n",i,i*i);
}
}
getch();
}
