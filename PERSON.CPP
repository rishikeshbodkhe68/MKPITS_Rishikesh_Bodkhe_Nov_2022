#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num1,num2,num3;
printf("enter the age of person\n");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
{
printf("%d is greater",num1);
}
else if(num2>num1 && num2>num3)
{
printf("%d is greater",num2);
}
else
{
printf("%d is greater",num3);
}
getch();
}