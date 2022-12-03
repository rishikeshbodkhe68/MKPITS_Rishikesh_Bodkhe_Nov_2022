#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class student
{
public:
int id;
char name[10],address[10];
void set1()
{
cout<<"enter name\n";
cin>>name;
cout<<"enter address\n";
cin>>address;
cout<<"enter id\n";
cin>>id;
}
void dis1()
{
cout<<name;
cout<<address;
cout<<id;
}
};
class exam: public student
{
public:
int p1,p2;
void set2()
{
cout<<"enter paper1 marks\n";
cin>>p1;
cout<<"enter paper2 marks\n";
cin>>p2;
}
void dis2()
{
cout<<p1;
cout<<p2;
}
};
class sport
{
public:
int s;
void set3()
{
cout<<"enter sports mark\n";
cin>>s;
}
void dis3()
{
cout<<s;
}
};
class result: public exam, public sport
{
public:
int sum;
void set4()
{
sum=p1+p2+s;
}
void dis4()
{
cout<<"=sum"<<sum;
}
};
void main()
{
clrscr();
result ob4;
ob4.set1();
ob4.set2();
ob4.set3();
ob4.set4();
ob4.dis1();
ob4.dis2();
ob4.dis3();
ob4.dis4();
getch();
}