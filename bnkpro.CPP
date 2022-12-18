#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<string.h>
int i=0;
void creatacc();
void with();
void balance();
void dep();
void disall();
void dissingle();
void menu();

struct bank
{
int accno;
float bal;
char tyac[20],name[20];
}s[100];
void mainscreen()
{
int choice;
while(1)
{
cout<<"press 1 for aacount creation\n"<<endl;
cout<<"press 2 for widrawal\n"<<endl;
cout<<"press 3 for deposite\n"<<endl;
cout<<"press 4 for balance\n"<<endl;
cout<<"press 5 for display all record\n"<<endl;
cout<<"press 6 for display single record\n"<<endl;
cout<<"press 7 for exit\n"<<endl;
cout<<"press 8 for menu\n"<<endl;
cout<<"enter your choice\n"<<endl;
cin>>choice;
if(choice==1)
creatacc();
if(choice==2)
with();
if(choice==3)
dep();
if(choice==4)
balance();
if(choice==5)
disall();
if(choice==6)
dissingle();
if(choice==7)
exit(0);
if(choice==8)
menu();
if(choice!=choice)
cout<<"invalid choice";
}
}
void creatacc()
{
cout<<"\nenter account number";
cin>>s[i].accno;
cout<<"\nenter name";
cin>>s[i].name;
cout<<"\ntype of account";
cin>>s[i].tyac;
cout<<"\ninitial balance";
cin>>s[i].bal;
i++;
}
void with()
{
int j,id,rupees;
cout<<"\nenter the account number to widraw money";
cin>>id;
cout<<"\nenter amount to widraw";
cin>>rupees;
for(j=0;j<=i;j++)
{
if(s[j].accno==id)
{
s[j].bal=s[j].bal-rupees;
cout<<"available balance"<<s[j].bal<<endl;
}
}
}
void dep()
{
int j,id,rupees;
cout<<"\nenter the account number to deposite money";
cin>>id;
cout<<"\nenter amount to deposite";
cin>>rupees;
for(j=0;j<=i;j++)
{
if(s[j].accno==id)
{
s[j].bal=s[j].bal+rupees;
cout<<"available balance"<<s[j].bal<<endl;
}
}
}
void balance()
{
int j,id;
cout<<"\nenter the id to check balance";
cin>>id;
cout<<"\nno. of account"<<i<<endl;
for(j=0;j<=i;j++)
{
if(s[j].accno==id)
{
cout<<"available balance"<<s[j].bal<<endl;
}
}
}
void disall()
{
int j;
cout<<"\ndisplay of all records"<<endl;
cout<<"srno"<<"\tacno"<<"\tname"<<"\ttyacc"<<"\tbalance"<<endl;
for(j=0;j<i;j++)
{
cout<<j+1<<"\t"<<s[j].accno<<"\t"<<s[j].name<<"\t"<<s[j].tyac<<"\t"<<s[j].bal<<endl;
}
}
void dissingle()
{
int j,id;
cout<<"\nenter id to display records";
cin>>id;
cout<<"srno"<<"\tacno"<<"\tname"<<"\ttyacc"<<"\tbalance"<<endl;
for(j=0;j<i;j++)
{
cout<<j+1<<"\t"<<s[j].accno<<"\t"<<s[j].name<<"\t"<<s[j].tyac<<"\t"<<s[j].bal<<endl;
}
}
void menu()
{
cout<<"menu"<<endl;
}
void main()
{
int c1,c2,i=0;
char ch,user[15]={"rishi"},pass[15]={"rishi"},userk[15],passk[15];
clrscr();
cout<<"enter user name \n";
cin>>userk;
cout<<"enter password\n";
do
{
ch=getch();
passk[i]=ch;
cout<<"*";
i++;
}
while(ch!='\r');
passk[i-1]='\0';
cout<<passk;
c1=strcmp(user,userk);
c2=strcmp(pass,passk);
clrscr();
if(c1==0&&c2==0)
{
cout<<"welcome to abc bank\n";
mainscreen();
}
else
{
cout<<"invalid";
}
getch();
}
