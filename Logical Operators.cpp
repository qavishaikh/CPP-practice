#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a=5, b=8, c=-8, d=61, e=15;
	cout<<(a > b && c != d) <<endl;
	cout<<(a < b || d >= e) <<endl;
	cout<<(a > b) <<endl;
	cout<< !(a > b) <<endl;
	cout<<(a == b) <<endl;
	cout<<(!a == b);
	getch();
	return 0;
}
