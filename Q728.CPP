#include<stdio.h>
#include<conio.h>
void main()
{
float num[5];
int i,pctr=0,nctr=0;
clrscr();
printf("enter number 1 \n");
scanf("%f",&num[0]);
printf("enter number 2 \n");
scanf("%f",&num[1]);
printf("enter number 3 \n");
scanf("%f",&num[2]);
printf("enter number 4 \n");
scanf("%f",&num[3]);
printf("enter number 5 \n");
scanf("%f",&num[4]);
for(i=0;i<5;i++)
{
if(num[i]>0)
{
pctr++;
}
else if (num[i]<0)
{
nctr++;
}
}
printf("total positive number %d\n", pctr);
printf("total negative number %d\n", nctr);
getch();
}

