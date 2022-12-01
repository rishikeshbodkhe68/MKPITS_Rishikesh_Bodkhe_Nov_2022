#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter coordinate(x,y) \n");
printf("x \n");
scanf("%d",&x);
printf("y \n");
scanf("%d",&y);
if(x>0&&y>0)
{
printf("quadrant-1(+,+) \n");
}
else if(x>0&&y<0)
{
printf("quadrant-2(+,-) \n");
}
else if(x<0&&y<0)
{
printf("quadrant-3(-,-) \n");
}
else if(x<0&&y>0)
{
printf("quadrant-4(-,+) \n");
}
getch();
}