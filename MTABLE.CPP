#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,i;
printf("enter number");
scanf("%d",&num);
i=1;
while(i<=10)
{
printf("%d*%d=%d\n",num,i,i*num);
i++;
}
getch();
}
