#include<stdio.h>
#include<conio.h>
void main()
{
long int num1,num2,num3;
clrscr();
printf("enter number1 \n");
scanf("%ld",&num1);
printf("enter number2 \n");
scanf("%ld",&num2);
printf("enter number3 \n");
scanf("%ld",&num3);
if(num1>num2)
{
if(num1>num3)
{
printf("greater number = %ld",num1);
}
else
{
printf("greater number = %ld",num3);
}
}
else
{
if(num2>num3)
{
printf("greater number = %ld",num2);
}
else
{
printf("greater number = %ld",num3);
}
getch();
}
}


