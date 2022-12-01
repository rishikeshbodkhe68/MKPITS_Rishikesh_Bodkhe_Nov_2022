#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,temp,i,sum=0;
clrscr();
printf("enter first and second number for x,y\n");
scanf("%d %d",&x,&y);
if(x>y)
{
temp=y;
y=x;
x=temp;
}
for(i=x+1;i<y;i++)
{
if((i%7)==2||(i%7)==3)
{
printf("%d \n",i);
}
}
getch();
}