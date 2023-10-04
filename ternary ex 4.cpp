#include<iostream>
#include<string>
using namespace std;
int main()
{ 
     int a,b;
     cout<<"Enter the Number A:  ";
     cin>>a;
     cout<<"Enter the Number B :  ";
     cin>>b;
     cout<<"Large Number is =  "<<(a > b ? a : b) ;
	return 0;
}
