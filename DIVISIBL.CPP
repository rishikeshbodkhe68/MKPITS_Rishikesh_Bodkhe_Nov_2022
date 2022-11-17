#include<stdio.h>
#include<conio.h>
void main()
{
int num,r;
clrscr();
printf("Enter any number from keyboard");
scanf("%d",&num);
r=num%4;
if(r==0)
{
printf("Divisible by 4");
}
if(r!=0)
{
printf("Not divisible by 4");
}
getch();
}

