#include<iostream>
#include<string>
using namespace std;
int main()
{ 
     int a,b,c;
     cout<<"Enter the Number A:  ";
     cin>>a;
     cout<<"Enter the Number B :  ";
     cin>>b;
     c = a > b ? a : b;
     cout<<"Large Number is =  "<<c;
	return 0;
}
