
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],b[2][2],i,j;
printf("enter the matrix : \n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&a[i][j]);
}
}
//////////////////////////////
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
b[j][i]=a[i][j];
}
}
////////////////////////////
printf("transpose \n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("  %d",b[i][j]);
}
printf("\n");
}
getch();
}

