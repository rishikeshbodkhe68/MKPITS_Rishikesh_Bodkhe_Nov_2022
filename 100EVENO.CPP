#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
i=1;
while(i<=100)
{
if(i%2==0)
{
printf(" even numbers: %d ",i);
}
if(i%2!=0)
{
printf(" odd numbers: %d ",i);
}
i=i++;
}
getch();
}

