#include<iostream>
#include<conio.h>
using namespace std;
 int main()
   { cout<<"\n\t\t WELCOME TO COMPUTERS\n";
      cout<<"\t1: DEL\n";
      cout<<"\t2: HP\n";
  cout<<"\n\t Which One Computer do You Want!\n";
   int comp;
   cin>>comp;
   switch (comp){
     case 1:
       cout<<"\t1: DEL\n";
       cout<<"\t20,000\n";
cout<<"\tDo you want to add memory!\n";
     char add_Memory;
     cin>>add_Memory;
  if (add_Memory=='Y' || add_Memory=='y'){
     cout<<"\n\tYes I Want To Add Memory\n";
     cout<<"\n\t choose any one of Memory\n";
     cout<<"\t1: 8GB RAM\n";
     cout<<"\t2: 16GB RAM\n";
       int cho_Memory;
       cin>>cho_Memory;
    switch (cho_Memory){
       case 1:
       cout<<"\t\t1: 8GB RAM\n";
       break;
       case 2:
       cout<<"\t\t2: 16GB RAM\n";
       break;
}}
  else if (add_Memory=='N'|| add_Memory=='n'){
     cout<<"\n\tNo I Don't Want To Add Memory'\n";}
     cout<<"\n\tDo you want to add processor!\n";
     char add_Proc;
     cin>>add_Proc;
if(add_Proc=='Y' || add_Proc=='y'){
      cout<<"\t\tYes I Want To Add Processor\n";
      cout<<"\tselect any one processor!\n";
      cout<<"\t1: i5\n";
      cout<<"\t2: i7\n";
     int sle_Proc;
     cin>>sle_Proc;
 switch(sle_Proc){
    case 1:
      cout<<"\t\t1: i5\n";
     break;
     case 2:
      cout<<"\t\t2: i7\n";
     break;
 }   break;
 }
  else if(add_Proc=='N' || add_Proc =='n'){
       cout<<"\t\tNo I Don't want To Add Processor!'\n";
 }      break;
   case 2:
    cout<<"\n\t\t2: HP\n";
    cout<<"\t\tDo you want to add Generation!\n";
      char sle_Gen;
      cin>>sle_Gen;
  if(sle_Gen=='Y' || sle_Gen=='y'){
      cout<<"\t\tYes I Want To add Generation!\n";
      cout<<"\t\tSelect any one Generation\n";
      cout<<"\t\t1: 10\n";
      cout<<"\t\t2: 11\n";
        int Gen;
        cin>>Gen;
  switch(Gen){
   case 1:
      cout<<"\t1: 10\n";
   break;
   case 2:
      cout<<"\t2: 11\n";
   break;
}}
 else if(sle_Gen=='N' || sle_Gen=='n'){
      cout<<"No\n";
}}
   cout<<"\n\n\t\tCreate By: Muhammad Qavi Shaikh!";
   getch();
   return 0;
}
