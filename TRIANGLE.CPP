#include<stdio.h>
#include<conio.h>
void main ()
{
int h,b,area;
clrscr();
printf("Enter height and base=");
scanf("%d%d",&h,&b);
area=0.5*h*b;
printf("Area of traingle=%d",area);
getch();
}