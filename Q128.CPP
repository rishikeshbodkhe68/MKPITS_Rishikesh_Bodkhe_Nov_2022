#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("enter integer ");
scanf("%d",&x);
if(x>=0 && x<=20)
{
printf("range [0,20])");
}
else if(x>=21&&x<=40)
{
printf("range[21,40]");
}
else if(x>=41&&x<=60)
{
printf("range[41,60]");
}
else if(x>=61&&x<=80)
{
printf("range[61,80]");
}
else
{
printf("out of range");
}
getch();
}