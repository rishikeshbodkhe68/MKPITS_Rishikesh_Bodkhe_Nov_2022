#include<stdio.h>
#include<conio.h>
void rev(num)/////////////////argument with no return type
{
int n1,n2,n3,rev;
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
rev=n1*100+n2*10+n3*1;
printf("reverse order = %d",rev);
}
void main()
{
int num,n1,n2,n3;
clrscr();
printf("enter three digit number\n");
scanf("%d",&num);
rev(num);
getch();
}