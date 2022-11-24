#include<stdio.h>
#include<conio.h>
void main ()
{
int a[2][2],b[2][2],c[2][2],i,j;
clrscr();
printf("enter A matrix elements");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&a[i][j]);
}//j inner close
}//i outer for
////////////////////////////////
printf("enter  B matix ");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&b[i][j]);
} // j inner close
} // i outer close
/////////////////////////////////////
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
c[i][j]=a[i][j]+b[i][j];
} //j inner close
} //i outer close
printf("addition of 2 matrix A and B is \n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("%d",c[i][j]);
}//j inner close
}// i outer close
getch();
}

