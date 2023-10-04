#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,ch;
	cout<<"\t\tWELCOME TO IF ELSE CALCULATOR\n";
	cout<<"\tEnter First The Numbers\n";
	cin>>a;
	cout<<"\tEnter The Second Number\n";
	cin>>b;
	cout<<"\tEnter your Choice \n \t1.Addidion +\n\t2.Subtraction -";
	cout<<"\n\t3.Multiplication x\n\t4.Division /\n\t5.Modulos %";
	cin>>ch;
	if (ch == 1)
	{
		c=a+b;
		cout<<"\tc";
	}
      else if (ch == 2)
	{
		c=a-b;
		cout<<"\tc";
	}
	else if(ch == 3)
	{
		c=a*b;
		cout<<"\tc";
	}
	else if(ch == 4)
	{
		c=a/b;
		cout<<"\tc";
	}
	else if(ch == 5)
	{
		c=a%b;
		cout<<"\tc";
	}
	else {
		cout<<"Enter Wrong Choice! \n Please try Again.......  ";
	}
	cout<<"\t\n Muhammad Qavi Sheikh";
	return 0;
 } 
