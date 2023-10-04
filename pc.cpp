#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ cout<<"COMPUTER\n";
cout<<"1) DEL\n";
cout<<"2) HP\n";
cout<<"Plz enter your range (1 - 2)\n";
int a;
cin>>a;
switch (a){
case 1:
cout<<"1) DEL\n";
cout<<"Price\n";
cout<<"Do you want to add memory ( yes or no )\n";
char b;
cin>>b;
if (b=='Y'||b=='y'){
cout<<"Yes\n";
cout<<"Plz choose any one of memory\n";
cout<<"1) 8GB RAM\n";
cout<<"2) 16GB RAM\n";
int c;
cin>>c;
switch (c){
case 1:
cout<<"1) 8GB RAM\n";
break;
case 2:
cout<<"2) 16GB RAM\n";
break;
}
}
else if (b=='N'||b=='n'){
cout<<"No\n";}
cout<<"Do you want to add processor( yes or no)\n";
char x;
cin>>x;
if(x=='Y'||x=='y'){
cout<<"Yes\n";
cout<<"plz select any one processor\n";
cout<<"1) i5\n";
cout<<"2) i7\n";
int h;
cin>>h;
switch(h){
case 1:
cout<<"1) i5\n";
break;
case 2:
cout<<"2) i7\n";
break;
}break;
}
else if(x=='N'||x=='n'){
cout<<"No\n";
}break;
case 2:
cout<<"2) HP\n";
cout<<"Do you want to add generation( yes or no)\n";
char m;
cin>>m;
if(m=='Y'||m=='y'){
cout<<"Yes\n";
cout<<"plz select any one generation\n";
cout<<"1) 10\n";
cout<<"2) 11\n";
int n;
cin>>n;
switch(n){
case 1:
cout<<"1) 10\n";
break;
case 2:
cout<<"2) 11\n";
break;
}
}
else if(m=='N'||m=='n'){
cout<<"No\n";
}
}
getch();
return 0;
}
