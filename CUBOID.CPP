#include<stdio.h>
#include<conio.h>
void main()
{
 int l,w,h,area;
 printf("Enter width and length and height=");
 scanf("%d%d%d",&l,&w,&h);
 area=w*l*h;
 printf("Area of cuboid=%d",area);
 getch();
 }