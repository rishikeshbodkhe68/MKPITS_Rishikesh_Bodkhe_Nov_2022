#include<stdio.h>
#include<conio.h>
void main()
{
int mon;
clrscr();
printf("enter number between 1 to 12 for month name \n");
scanf("%d",&mon);
switch(mon)
{
case 1: printf("jan \n");break;
case 2: printf("feb \n");break;
case 3: printf("mar \n");break;
case 4: printf("apr \n");break;
case 5: printf("may \n");break;
case 6: printf("jun \n");break;
case 7: printf("jul \n");break;
case 8: printf("aug \n");break;
case 9: printf("sep \n");break;
case 10: printf("oct \n");break;
case 11: printf("nov \n");break;
case 12: printf("dec \n");break;
}
getch();
}