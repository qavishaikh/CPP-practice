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
     cout<<"Enter the Number c :  ";
     cin>>c;
     cout<<"Large Number is =  "
     <<((((a > b) ? a : b) > c) ? ((a > b) ? a : b) : c);
	return 0;
}
