#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
float div_res;
clrscr();
printf("enter two numbers \n");
printf("x \n");
scanf("%d",&x);
printf("y \n");
scanf("%d",&y);
if(y!=0)
{
div_res=x/y;
printf("%.1f \n",div_res);
}
else
{
printf("division not possible \n");
}
getch();
}