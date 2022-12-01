#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
float p,r,t,si;
cout<<"enter principle amount \n";
cin>>p;
cout<<"enter roi \n";
cin>>r;
cout<<"enter time period \n";
cin>>t;
si=(p*r*t)/100;
cout<<"simple interest amount \n"<<si;
getch();
}
