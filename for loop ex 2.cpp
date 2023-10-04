#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int tot = 0, num, k;
	for(k=1; k<=5;k++)
	{
		cout<<"Enter The Number";
		cin>>num;
		tot+=num;
	}
	cout<<"Average Of 5 Numbers"<<tot/(k-1);
	return 0;
}
