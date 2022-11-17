#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num,r;
 printf("enter any number from keyboard");
 scanf("%d",&r);
 if(r%4==0)
 {
 printf("number divisible by 4");
 }
 else
 {
 printf("number not divisible by 4");
 }
 getch();
}
