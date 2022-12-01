#include<stdio.h>
#include<conio.h>
void main()
{
int marks[99],m,i,a=0,total=0;
float f;
clrscr();
printf("enter marks \n");
for(i=0;i<=99;i++)
{
scanf("%d",&marks[i]);
if(marks[i]<=0)
{
break;
}
a++;
total+=marks[i];
}
f=(float)total/(float)a;
printf("avg marks in maths %.2f \n",f);
getch();
}