#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a=2,b=3,r;
clrscr();
r=add(a,b);
printf("res=%d",r);
getch();
}
int add(int x,int y)
{
int c;
c=x+y;
return c;
}
