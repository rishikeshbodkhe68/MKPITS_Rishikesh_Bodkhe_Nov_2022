#include<stdio.h>
#include<conio.h>
void main ()
{
char eid[10];
int hours;
double amount,salary;
clrscr();
printf(" enter employee id : \n ");
scanf("%s",&eid);
printf(" enter working hours : \n ");
scanf("%d",&hours);
printf(" enter salary amount per hr : \n ");
scanf("%lf",&amount);
salary=amount*hours;
printf(" employee id = %s \n salary = Rs %.2lf \n",eid,salary);
getch();
}
