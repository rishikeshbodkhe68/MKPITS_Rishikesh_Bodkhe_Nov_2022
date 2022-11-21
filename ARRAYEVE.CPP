#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int a[9],i,count=0,od=0;
printf("enter 10 number\n");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
////////////////////////////////////
for(i=0;i<=9;i++)
{
if(a[i]%2==0)
{
count=count+1;
}else
{
od=od+1;
}
}//for close
printf("toteal even count= %d\n",count);
 ////////////////////////////////////////
getch();
}