#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("enter matrix A");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter matrix B");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("matrix A is");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("matrix B is");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
printf("matrix B is");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++);
{
printf("%d",b[i][j]);
}
printf("\n");
}
for(i=0;i<=1;i++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("sum of two matrix is");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
getch();
}

