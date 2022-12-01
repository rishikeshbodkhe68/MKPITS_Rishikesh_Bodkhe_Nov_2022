#include<stdio.h>
#include<conio.h>
void main()
{
int pass,i=10;
clrscr();
while(i!=0)
{
printf("enter password \n");
scanf("%d",&pass);
if(pass==1234)
{
printf("correct password");
i=0;
}
else
{
printf("wrong password,try again \n");
}
}
getch();
}

