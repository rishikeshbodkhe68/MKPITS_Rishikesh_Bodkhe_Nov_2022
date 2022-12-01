#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,z,p,a;
clrscr();
printf("enter first number \n");
scanf("%f",&x);
printf("enter second number \n");
scanf("%f",&y);
printf("enter third number \n");
scanf("%f",&z);
if(x<(y+z)&&y<(x+z)&&z<(y+x))
{
p=x+y+z;
printf("perimeter = %.1f \n",p);
}
else
{
printf("not possible to make triangle");
}
getch();
}


