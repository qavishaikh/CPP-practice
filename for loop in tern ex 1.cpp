#include<iostream>
using namespace std;
int main()
{ 
     int q;
     char ch;
     for(q=0; q<800; q++)
     {
     	char ch =(q%5) ? ' ' : 'X';
     	 cout<<ch;
     }
	return 0;
}
