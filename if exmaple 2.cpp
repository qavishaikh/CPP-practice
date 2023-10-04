#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter The Integer Number";
	cin>>num;
	if(num %5==0)
	{
	  num = num+1;
	  cout<<num;
      }
	  getch();
	  return 0;	  
}
