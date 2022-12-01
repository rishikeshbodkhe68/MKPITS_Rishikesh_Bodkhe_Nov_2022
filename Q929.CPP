#include<stdio.h>
#include<conio.h>
void main()
{
int p,q,i,j,l;
clrscr();
printf("enter number of lines\n");
scanf("%d",&p);
printf("numbers in line\n");
scanf("%d",&q);
for(i=1,l=1;i<=p;i++)
{
for(j=1;j<=q;j++)
{
printf("%d ",l);
l++;
}
printf("\n");
}
getch();
}