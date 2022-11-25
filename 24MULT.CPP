#include<stdio.h>
#include<conio.h>
void div(int,int);
void main()
{
int a=2,b=3;
clrscr();
div(a,b);
}
void div(int x,int y)
{
int c;
c=x/y;
printf("%d",c);
getch();
}
