#include<stdio.h>
#include<conio.h>
void main ()
{
int num,i,count=0;
clrscr();
printf("enter any number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
printf("it is prime number");
else
printf("it is not prime number");
getch();

}