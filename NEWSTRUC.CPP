#include<stdio.h>
#include<conio.h>
struct stud
{
int id;
char name[10];
char addr[100];
}
s1;
void main()
{
struct stud s1;
clrscr();
printf("enter student id \n");
scanf("%d",&s1.id);
printf("enter student name \n");
scanf("%s",&s1.name);
printf("enter student address \n");
scanf("%s",&s1.addr);
printf("student id = %d\n",s1.id);
printf("student name = %s\n",s1.name);
printf("student address = %s\n",s1.addr);
getch();
}