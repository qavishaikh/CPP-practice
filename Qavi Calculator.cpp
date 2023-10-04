#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a, b, res;
    int ch;   
    {
    	cout<<"\n\n\tWELCOME TO SWITCH CALCULATOR\n\n";
        cout<<"\t1. Addition +\n";
        cout<<"\t2. Subtraction -\n";
        cout<<"\t3. Multiplication x\n";
        cout<<"\t4. Division\n /";
        cout<<"\t5. Exit\n\n";
        cout<<"\tEnter Your Choice(1-5): ";
        cin>>ch;
        if(ch>=1 && ch<=4)
        {
            cout<<"\n\tEnter First Numbers: ";
            cin>>a;
            cout<<"\n\tEnter Second Numbers: ";
             cin>>b;
        }
        switch(ch)
        {
            case 1:
                res = a+b;
                cout<<"\n\tAnswer = "<<res;
                break;
            case 2:
                res = a-b;
                cout<<"\n\tAnswer = "<<res;
                break;
            case 3:
                res = a*b;
                cout<<"\n\tAnswer = "<<res;
                break;
            case 4:
                res = a/b;
                cout<<"\n\tAnswer = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\n\tWrong Choice!\n Please Try Again...... ";
                break;
        }
        cout<<"\n------------------------\n";
    }
    cout<<"\n\tMake By:  Muhammad Qavi Sheikh";
    getch();
    return 0;
}

