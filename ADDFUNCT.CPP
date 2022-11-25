#include<stdio.h>
#include<conio.h>
void add()
{
int a,b,res;
clrscr();
printf("enter the two numbers for addition \n");
scanf("%d%d",&a,&b);
res=a+b;
printf("the addition of two number = %d",res);
}
void main()
{
add();
getch();
}