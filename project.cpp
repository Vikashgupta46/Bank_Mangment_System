#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int ac;
class bank
{
private:
int n,i,d,am,dp,wd;
char nm[10],type;
public:
void newaccount();
void display();
void deposit();
void withdraw();
};
void bank:: newaccount()
{
system("cls");
ofstream outf("mad.dat");
cout<<"\tENTER THE ACCOUNT NUMBER : ";
cin>>ac;
outf<<ac<<"\n";
cout<<"\n\tENTER THE NAME OF ACCOUNT HOLDER : ";
cin>>nm;
outf<<nm<<"\n";
cout<<"\n\tENTER THE TYPE Of ACCOUNT (c/s): ";
cin>>type;
outf<<type<<"\n";
cout<<"\n\tENTER THE ACCOUNT OPENING AMOUNT : ";
cin>>am;
outf<<am<<"\n";
outf.close();
cout<<"\n\tACCOUNT IS CREATED .....";
}
void bank::display()
{
system("cls");
ifstream inf("mad.dat");
inf>>ac;
inf>>nm;
inf>>type;
inf>>am;
cout<<"================================================";
cout<<"\nA/C no.\tNAME\t\tACCOUNT \tBALANCE\n";
cout<<"================================================\n";
cout<<ac<<"\t"<<nm<<"\t";
if(type=='c')
{
cout<<"CURRENT";
}
else
{
cout<<"SAVING";
}
cout<<"\t"<<am;
inf.close();
}
void bank::deposit()
{
ifstream inf("mad.dat");
inf>>ac;
inf>>nm;
inf>>type;
inf>>am;
cout<<"================================================";
cout<<"\nA/C no.\tNAME\t\tACCOUNT \tBALANCE\n";
cout<<"================================================\n";
cout<<ac<<"\t"<<nm<<"\t";
if(type=='c')
{
cout<<"CURRENT";
}
else
{
cout<<"SAVING";
}
cout<<"\t"<<am;
ofstream outf("mad.dat");
cout<<"\nENTER THE DEPOSIT AMOUNT : ";
cin>>dp;
am=am+dp;
outf<<am;
inf>>ac;
inf>>nm;
inf>>type;
inf>>am;
cout<<"\n================================================";
cout<<"\nA/C no.\tNAME\t\tACCOUNT \tBALANCE\n";
cout<<"================================================\n";
cout<<ac<<"\t"<<nm<<"\t";
if(type=='c')
{
cout<<"CURRENT";
}
else
{
cout<<"SAVING";
}
cout<<"\t"<<am;
inf.close();
outf.close();
}
void bank::withdraw()
{
system("cls");
ifstream inf("mad.dat");
inf>>ac;
inf>>nm;
inf>>type;
inf>>am;
cout<<"================================================";
cout<<"\nA/C no.\tNAME\t\tACCOUNT \tBALANCE\n";
cout<<"================================================\n";
cout<<ac<<"\t"<<nm<<"\t";
if(type=='c')
{
cout<<"CURRENT";
}
else
{
cout<<"SAVING";
}
cout<<"\t"<<am;
cout<<"\nENTER THE WITHDRAW AMOUNT : ";
cin>>wd;
am=am-wd;
ofstream outf("mad.dat");
outf<<"\n"<<am;
outf.close();
inf>>ac;
inf>>nm;
inf>>type;
inf>>am;
cout<<"\n================================================";
cout<<"\nA/C no.\tNAME\t\tACCOUNT \tBALANCE\n";
cout<<"================================================\n";
cout<<ac<<"\t"<<nm<<"\t";
if(type=='c')
{
cout<<"CURRENT";
}
else
{
cout<<"SAVING";
}
cout<<"\t"<<am;
inf.close();
}
int main()
{
bank b;
int num,ch;
vi:
system("cls");
cout<<"\t\t..................................................";
cout<<"\n\t\t | WELCOME TO VIKASH BANK SYSTEM | ";
cout<<"\n\t\t..................................................";
cout<<"\n--MAIN MENU-- ";
cout<<"\n*";
cout<<"\n1.OPENING ACCOUNT";
cout<<"\n2.DEPOSIT AMOUNT";
cout<<"\n3.WITHDRAW AMOUNT";
cout<<"\n4.DISPLAY ALL ACCOUNT";
cout<<"\n5.ACCOUNT DETAILS";
cout<<"\n6.CLOSING ACCOUNT";
cout<<"\n7.UPDATE ACCOUNT";
cout<<"\n8.EXIT\n";
cout<<"CHOOSE OPTION\n";
cin>>ch;
switch(ch)
{
case 1:
b.newaccount();
goto vi;
case 2:
system("cls");
cout<<"ENTER ACCOUNT NUMBER : ";
cin>>num;
if(num==ac)
{
b.deposit();
}
goto vi;
case 3:
system("cls");
cout<<"ENTER ACCOUNT NUMBER : ";
cin>>num;
if(num==ac)
{
b.withdraw();
}
goto vi;
case 4:
b.display();
goto vi;
case 5:
system("cls");
cout<<"ENTER ACCOUNT NUMBER : ";
cin>>num;
if(num==ac)
{
}
goto vi;
case 6:
system("cls");
cout<<"ENTER ACCOUNT NUMBER : ";
cin>>num;
if(num==ac)
{
}
goto vi;
case 7:
goto vi;
case 8:
cout<<"THANK YOU FOR COMING ....";
break;
}
return 0;
}