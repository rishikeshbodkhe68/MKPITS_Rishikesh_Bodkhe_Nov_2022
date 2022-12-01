#include<stdio.h>
#include<conio.h>
void main()
{
float num[5],total=0,avg;
int i,pctr=0;
clrscr();
printf("enter 5 numbers \n");
scanf("%f %f %f %f %f",&num[0],&num[1],&num[2],&num[3],&num[4]);
for(i=0;i<5;i++)
{
if(num[i]>0)
{
pctr++;
total += num[i];
}
}
avg=total/pctr;
printf("total positive number %d \n",pctr);
printf("average value of positive numbers %.2f \n",avg);
getch();
}

