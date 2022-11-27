#include<stdio.h>
#include<conio.h>
int rev()   ////////////////////return type no argument
{
int num,n1,n2,n3,reverse;
printf("enter three digit number\n");
scanf("%d",&num);
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
reverse=n1*100+n2*10+n3*1;
return reverse;
}
void main()
{
int r;
clrscr();
r=rev();
printf("reverse order =%d",r);
getch();
}