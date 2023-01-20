#include<iostream>
using namespace std;
class student
{
	int id,pin;
	char name[999],add[999];
	
	public:
		student();
		~student();
		void data();
		void display();		
};

student::student()
{
	cout<<"Student Details";
}

void student::data()
{
	cout<<"\nEnter Name  : ";
	gets(name);
	
	cout<<"Enter id      : ";
	cin>>id;
	fflush(stdin);
	cout<<"Enter Address : ";
	gets(add);
	
	cout<<"Enter Pincode : ";
	cin>>pin;
}

void student::display()
{
	cout<<"\nStudent Name    :";puts(name);
	cout<<"Student ID      : "<<id;
	cout<<"\nStudent Address :";puts(add);
	cout<<"Student Pincode : "<<pin;
}

student::~student()
{
	cout<<"\nThank You";
}

main()
{
	student s;
	s.data();
	s.display();
}
