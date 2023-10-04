#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	bool  a=true, b=false, c=true, d=true, output;
	output= ((a && b) || c) && !d;
      cout<<"Output =  "<<output;
	getch ();	
	return 0;
}
