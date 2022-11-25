#include<stdio.h>
#include<conio.h>
int mul(int,int);
void main()
{
int a=2,b=3,r;
clrscr();
r=mul(a,b);
printf("res=%d",r);
getch();
}
int mul(int x,int y)
{
int c;
c=x*y;
return c;
}
