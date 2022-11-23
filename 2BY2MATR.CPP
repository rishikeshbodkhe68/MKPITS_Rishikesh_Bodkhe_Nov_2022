#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],i,j,k;
printf("enter 2 by 2 matrix");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("mat[%d][%d]=  ",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("mat[%d][%d]=%d",i,j,a[i][j]);
}
printf("\n");
}
getch();
}