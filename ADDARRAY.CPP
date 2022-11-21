#include<stdio.h>
#include<conio.h>
void main ()
{
int a[4],i,add=0;
clrscr();
printf("enter five numbers from keyboard \n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
add=add+a[i];
}
printf("addition of elements is=%d",add);
getch();
}
