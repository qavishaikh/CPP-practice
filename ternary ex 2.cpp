#include<iostream>
#include<string>
using namespace std;
int main()
{ 
      double marks; 
      cout<<"Enter Your Marks : ";
      cin>>marks;
      string result = (marks >=40) ? "Passed" : "Failed";
      cout<<"You "<<result<<" The Exam.";
	return 0;
}
