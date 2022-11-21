#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int a[4],i;
printf("enter five array\n");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
printf("%d",a[i]);
}
getch();
}
