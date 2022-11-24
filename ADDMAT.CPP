#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],i,j,sum=0;
clrscr();
printf("enter elements of matrix A : \n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
sum=sum+a[i][j];
}
}
printf("the addition of elements is : \n");
printf("%d",sum);
getch();
}