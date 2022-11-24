#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],i,j;
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf(" enter elements of matrices ");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
if(i==j)
{
a[i][j]=0;
}//if close
}
}

//////////////////////////////////
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf(" %d ",a[i][j]);
}
}
getch();
}

