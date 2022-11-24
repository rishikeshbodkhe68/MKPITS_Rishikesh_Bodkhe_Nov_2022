#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char name[10],name2[10];
int st;
printf("enter your name  : ");
scanf("%s",name);
printf("enter name 2 : ");
scanf("%s",name2);
st=strcmp(name,name2);
if(st==0)
{
printf("equal :")
}
ELSW
printf("%s",name);
getch();
}
