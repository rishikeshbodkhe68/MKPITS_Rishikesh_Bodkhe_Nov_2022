#include<stdio.h>
#include<conio.h>
void main ()
{
int i,n,flag=0;
clrscr();
printf("enter number");
scanf("%d",&n);
for(i=1;i<=4;i++)
{
if(i==4)
{
printf("4 is present");
}
else
{
flag=0;
printf("4 is not present");
}
getch();
}
}