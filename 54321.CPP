#include<stdio.h>
#include<conio.h>
void main()
{
int a=6,i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=5;j++)
printf("%d",a-j);
printf("\n");
}
getch();
}