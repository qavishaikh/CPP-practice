#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,ch,Add,Sub,Multi,Div;
	cout<<"Enter Two Numbers:....";
	cin>>a>>b;
	cout<<"Enter Choice:....";
	cin>>ch;
	if(ch==1)
	{
		Add=a+b;
		cout<<Add;
	}
	else if(ch==2)
	{
		Sub=a-b;
		cout<<Sub;
	}
	else if(ch==3)
	{
		Multi=a*b;
		cout<<Multi;
	}
	else if(ch==4)
	{
		Div=a/b;
		cout<<Div;
	}
	else
	{
		cout<<"Invalid Task!!";
	}
	return 0;
} 
