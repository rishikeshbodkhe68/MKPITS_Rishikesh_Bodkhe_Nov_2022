#include<stdio.h>
#include<conio.h>
void main()
{
int i,num[5],total=0;
clrscr();
printf("enter the five numbers \n");
scanf("%d %d %d %d %d ",&num[0],&num[1],&num[2],&num[3],&num[4]);
for(i=0;i<5;i++)
{
if((num[i]%2)!=0)
{
total += num[i];
}
}
printf("sum of all odd number %d \n",total);
getch();
}
