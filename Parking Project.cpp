#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	k:
	int m_amo=0,r_amo=0,c_amo=0,b_amo=0;
	int m_cnt=0,r_cnt=0,c_cnt=0,b_cnt=0;
	int t_amo=0,t_cnt=0,x;
	h:
	system("cls");
	cout<<"\n\n\n\t\t\t\tParking Project";
	cout<<"\n\n 1. MoterCycle";
	cout<<"\n 2. Rickshaw";
	cout<<"\n 3. Car";
	cout<<"\n 4. Bus";
	cout<<"\n 5. Check Record";
	cout<<"\n 6. Delete Vehicle";
	cout<<"\n 7. Delete Record";
	cout<<"\n 8. Excit";
	cout<<"\n\n Your Choice : ";
	cin>>x;
	switch(x)
	{
	     case 1:
	        if(t_cnt < 100)
		  {
		      m_cnt++;
			t_cnt++;
			m_amo += 50;
			t_amo += 50;
			cout<<"\n\n\t\t MoterCycle Succesfully Parked......";				
		  }	
		  else 
		  cout<<"\n\n\t\t Parking Is Full...";
		  break;
		  case 2:
	        if(t_cnt < 100)
		  {
		      r_cnt++;
			t_cnt++;
			r_amo +=100;
			t_amo += 100;
			cout<<"\n\n\t\t Rickshaw Succesfully Parked......";				
		  }	
		  else 
		  cout<<"\n\n\t\t Parking Is Full...";
		  break;
		  case 3:
	        if(t_cnt < 100)
		  {
		      c_cnt++;
			t_cnt++;
			c_amo +=150;
			t_amo += 150;
			cout<<"\n\n\t\t Car Succesfully Parked......";				
		  }	
		  else 
		  cout<<"\n\n\t\t Parking Is Full...";
		  break;
		  case 4:
	        if(t_cnt < 100)
		  {
		      b_cnt++;
			t_cnt++;
			b_amo +=200;
			t_amo +=200;
			cout<<"\n\n\t\t Bus Succesfully Parked......";				
		  }	
		  else 
		  cout<<"\n\n\t\t Parking Is Full...";
		  break;
		  case 5:
		      if(t_cnt > 0)
		      {
		      	system("cls");
		      	cout<<"\n\n\t\t\t Check Record";
		      	cout<<"\n\n => MoterCycle In Parking : "<<m_cnt;
		      	cout<<"\n => MoterCycle Amount : "<<m_amo;
		      	cout<<"\n\n => Rickshaw In Parking : "<<r_cnt;
		      	cout<<"\n => Rickshaw Amount : "<<r_amo;
		      	cout<<"\n\n => Car In Parking : "<<c_cnt;
		      	cout<<"\n => Car Amount : "<<c_amo;
		      	cout<<"\n\n => Bus In Parking : "<<b_cnt;
		      	cout<<"\n => Bus Amount : "<<b_amo;
		      	cout<<"\n\n => Total Vehicales In Parking : "<<t_cnt;
		      	cout<<"\n => Total Amount : "<<t_amo;		      	
			}
			else
			cout<<"\n\n\t\t\t Parking Is Empty....";
		  break;
		  case 6:
		  	p:
		  	system("cls");
		  	cout<<"\n\n\n\t\t\t Delete Vehicale ";
		  	cout<<"\n\n 1. MoterCycle";
		  	cout<<"\n 2. Rickshaw";
		  	cout<<"\n 3. Car";
		  	cout<<"\n 4. Bus";
		  	cout<<"\n\n Your Choice : ";
		  	cin>>x;
		  	if(x==1)
		  	{
		  		m_cnt--;
		  		t_cnt--;
		  		cout<<"\n\n\t\t\t MoterCycle Successfully Removed...";		  		
		      }			
		      else if(x==2)
		  	{
		  		r_cnt--;
		  		t_cnt--;
		  		cout<<"\n\n\t\t\t Rickshaw Successfully Removed...";		
		      }
		      else  if(x==3)
		  	{
		  		c_cnt--;
		  		t_cnt--;
		  		cout<<"\n\n\t\t\t Car Successfully Removed...";		  		
		      }
		      else if(x==4)
		  	{
		  		b_cnt--;
		  		t_cnt--;
		  		cout<<"\n\n\t\t\t Bus Successfully Removed...";		  		
		      } 		      
		      else 
		      {
		      	cout<<"\n\n\n\t\t\t Invalid Choce... Please Try Again";
		      	getch();
		      	goto p;
			}
			break;
			case 7:
				cout<<"\n\n\t\t\t Delete All Record Successfully....";
				getch();
				goto k;		  				  
		break;
		     case 8:
		     	exit(0);
		     	default:
		     		cout<<"\n\n\t\t\t Invalid Choice Please Try Again...";		  			  	
	}
	getch();
	goto h;				 		
}
