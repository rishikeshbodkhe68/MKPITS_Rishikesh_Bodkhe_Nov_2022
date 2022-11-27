#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,n,temp=0;
clrscr();
printf("enter any number\n");
scanf("%d",&n);
for(i=2;i<=(n/2);i++)
{
if(n%i==0)
{
temp = 1;
break;
}
}
if(temp==1)
printf("not a prime number");
else
printf("it is a prime number");
getch();
}

