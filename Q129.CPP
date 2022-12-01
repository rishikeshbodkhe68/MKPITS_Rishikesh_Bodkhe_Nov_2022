#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
printf("enter two pair values \n");
scanf("%d %d",&i,&j);
if(i!=j)
{
if(j>i)
{
printf("ascending order \n");
}
else
{
printf("descending order \n");
}
}
getch();
}