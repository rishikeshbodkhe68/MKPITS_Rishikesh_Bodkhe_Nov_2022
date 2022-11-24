#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char name[10];
printf("enter your name : ");
scanf("%s",name);
strlwr (name);
printf("%s",name);
getch();
}
