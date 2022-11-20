#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int n,arms=0,r,c;
printf("enter three digit number:");
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
arms=(r*r*r)+arms;
n=n/10;
}
if(c==arms)
printf("it is armstrong number");
else
printf("it is not armstrong number");
getch();
}

