#include<stdio.h>
#include<conio.h>
void main()    /////////////////no return no argumennt
{
int num,n1,n2,n3,reverse;
clrscr();
printf("enter three digit number\n");
scanf("%d",&num);
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
reverse=n1*100+n2*10+n3*1;
printf("reverse order=%d",reverse);
getch();
}