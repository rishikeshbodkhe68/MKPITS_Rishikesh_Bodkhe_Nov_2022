#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add()
{
int a,b,res;
clrscr();
printf("enter the two numbers for addition \n");
scanf("%d%d",&a,&b);
res=a+b;
printf("the addition of two number = %d",res);
}
void sub()
{
int a,b,res;
clrscr();
printf("enter the two number for subtraction \n");
scanf("%d%d",&a,&b);
res=a-b;
printf("the subtraction of two number =%d",res);
}
void mul()
{
int a,b,res;
clrscr();
printf("enter the two number for multiplication \n");
scanf("%d%d",&a,&b);
res=a*b;
printf("the multiplication of two numbers =%d",res);
}
void div()
{
int a,b,res;
clrscr();
printf("enter the two number for division \n");
scanf("%d%d",&a,&b);
res=a/b;
printf("the division of two numbers =%d",res);
}
void main()
{
int choice;
while(1)
{
printf("\npress 1 for addition \n");
printf("press 2 for subtraction \n");
printf("press 3 for multiplication \n");
printf("press 4 for division \n");
printf("enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
add();
break;
case 2:
sub();
break;
case 3:
mul();
break;
case 4:
div();
break;
case 5:
exit(0);
default:
printf("invalid choice");
}//switch close
}//while close
getch();
clrscr();
}

