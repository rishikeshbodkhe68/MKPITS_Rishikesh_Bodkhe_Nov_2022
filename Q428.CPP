#include<stdio.h>
#include<conio.h>
void main()
{
unsigned short int x,y,mul;
clrscr();
printf("enter two integer \n");
scanf("%hd %hd",&x,&y);
if(x>y)
{
mul=x%y;
if(mul==0)
{
printf("multiplies \n");
}
else
{
printf("not multiplies \n");
}
}
else
{
mul=y%x;
if(mul==0)
{
printf("multiplies \n");
}
else
{
printf("not multiplies \n");
}
}
getch();
}