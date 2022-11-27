#include<stdio.h>
#include<conio.h>
struct stud
{
int id;
char name[10];
char addr[100];
}
;
void main()
{
struct stud s[4];
int i;
clrscr();
for(i=0;i<4;i++)
{
printf("enter student %d record\n",i);
printf("enter student id\n");
scanf("%d",&s[i].id);
printf("enter student name\n");
scanf("%s",&s[i].name);
printf("enter student address\n");
scanf("%s",&s[i].addr);
}

for(i=0;i<4;i++)
{
printf(" student %d record\n",i);
printf("\n -------------------------------\n");

printf("\n %d",s[i].id);
printf("\n %s",s[i].name);
printf("\n %s",s[i].addr);
printf("\n---------------------------------\n");
}
getch();
}