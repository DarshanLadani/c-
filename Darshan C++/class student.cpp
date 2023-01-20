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
		
		cout<<"\n\nID :  "<<id<<endl<<endl;
		
		cout<<"Name : "<<name;
	}
};


main()
{

		student s;
		s.data();

}
