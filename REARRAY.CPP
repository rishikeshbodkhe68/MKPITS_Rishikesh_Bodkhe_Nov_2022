#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int a[4],i;
printf("enter 5 array element\n");
for(i=0;i<=4;i++)
{
scanf("\n %d",&a[i]);
}
for(i=4;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}