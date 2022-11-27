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
struct stud s1={1,"rb","ng"};
clrscr();
printf("student id = %d\n",s1.id);
printf("student name = %s\n",s1.name);
printf("student address = %s\n",s1.addr);
struct stud s2={2,"rg","mn"};
printf("student id =%d\n",s2.id);
printf("student name =%s\n",s2.name);
printf("student addr =%s\n",s2.addr);
getch();
}