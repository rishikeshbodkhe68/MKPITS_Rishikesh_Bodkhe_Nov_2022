#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int s;
char name[10],backup[10];
printf("enter the name : ");
scanf("%s",name);
strcpy(backup,name);
strrev(name);
s=strcmp(backup,name);
if(s==0)
printf("the name is palindrome");
else
{
printf("the name is not palindrome");
}
getch();
}
