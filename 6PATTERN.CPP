#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int i,j,k;
for(i=1;i<=4;i++)
{
for(j=1;j<i;j++)
{
printf(" ");
}
for(k=i;k<=4;k++)
{
printf("*");
}
printf("\n");
}
getch();
}