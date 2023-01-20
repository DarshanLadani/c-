/*
Que : solve the below program using of function

No.	Prodect		Price(per Kg)
1.  Apple 		90
2.	Oranges 	70
3.	Grapes		80
4.	Banana		60
5.	Mango		100

Enter Your Choice From above : 
Enter Quntity in Kg :
Do you want to add more ? yes/no

if yes then repeat process and add new total to the previous one
Total

if No then
print thank you
total Bill
*/

#include<iostream>
using namespace std;
float total=0;
float apl();
float org();
float grp();
float bna();
float mgo();
main()
{
	int a,b;
	
	
	menu :
		{
			cout<<"----------------MENU--------------------";
	
			cout<<"\nNo.	Prodect		Price(per Kg)\n1. 	Apple 		90\n2.	Oranges 	70\n3.	Grapes		80\n4.	Banana		60\n5.	Mango		100\n6.	exit		";
	
			cout<<"\n\nEnter Your Choice No. From above : ";
			cin>>a;
			
		}
	
	switch(a)
	{
		case 1 :
			{
				total=total+apl();
				 goto add;
			}
			
			case 2 :
			{
				total=total+org();
				 goto add;
			}
			
			case 3 :
			{
				total=total+grp();
				 goto add;
			}
			
			case 4 :
			{
				total=total+bna();
				 goto add;
			}
			
			case 5 :
			{
				total=total+mgo();
				 goto add;
			}
			
			case 6 :
			{	
				 goto by;
			}
			
			default:
			{
				printf("\n!! Enter Valid Input !!\n\n\n");
				goto menu;
			}
		
	}
	
	add :
		{
			cout<<"\nDo You want yo add more \n1.	yes\n2.	no\n";
			cin>>b;
		}
	switch (b)
	{
		case 1:
			goto menu;
			
		case 2:
			goto by;
		
		default:
		cout<<"\n!!!!Enter Valid Input!!!!";
		goto add;	
					
	}
	
	by:
		{
			cout<<"\n\nThanks for  visit"<<endl;
		}
		
	cout<<"\n\nTotal Bill : "<<total;
	
	return 0;
}
float apl()
{
	float a,t;
	cout<<"Enter Quntity in Kg :";
	cin>>a;
	t=a*90;
	return t;
	
}
float org()
{
	float a,t;
	cout<<"Enter Quntity in Kg :";
	cin>>a;
	t=a*70;
	return t;
}
float grp()
{
	float a,t;
	cout<<"Enter Quntity in Kg :";
	cin>>a;
	t=a*80;
	return t;
}
float bna()
{
	float a,t;
	cout<<"Enter Quntity in Kg :";
	cin>>a;
	t=a*60;
	return t;
}
float mgo()
{
	float a,t;
	cout<<"Enter Quntity in Kg :";
	cin>>a;
	t=a*100;
	return t;
}
