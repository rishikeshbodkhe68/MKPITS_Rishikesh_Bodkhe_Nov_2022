#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr ();
int r,c;
for(c=1;c<=4;c++)
{
for(r=1;r<=c;r++)
{
printf("%d",c);
}
printf("\n");
}
getch();
}