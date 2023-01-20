#include<iostream>
using namespace std;

class student
{
	int id;
	char name[50];
	
	public:
		
	void data()
	{
		cout<<"Enter ID : ";
		cin>>id;
		fflush(stdin);
		cout<<"\nEnter Name : ";
		gets(name);
		
	}
	
	void display()
	{
		cout<<"\n\nID :  "<<id<<endl<<endl;
		
		cout<<"Name : "<<name;
	}
};

class faculty
{
	int id;
	char name[50];
	
	public :
		
	void data()
	{
		cout<<"Enter ID : ";
		cin>>id;
		
		fflush(stdin);
		cout<<"\nEnter Name : ";
		gets(name);
		
	}
	
	void display()
	{
		cout<<"\n\nID : "<<id<<endl<<endl;
		cout<<"Name : "<<name;
	}
};

main()
{
	int n;
	
	cout<<"Select 1 for Student \n\nSelect 2 for Faculty \n";
	cin>>n;
	
	if(n==1)
	{
		student s;
		s.data();
		s.display();
	}
	else if(n==2)
	{
		faculty f;
		f.data();
		f.display();	
	}
	
	else
	{
		cout<<"\n\n!!!! Enter vallid Input !!!!";
	}
		
	return 0;
}
