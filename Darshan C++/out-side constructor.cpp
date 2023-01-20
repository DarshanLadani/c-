#include<iostream>
using namespace std;

class student
{
	int rn;
	char name[999];
	string no;
	public :
		student();
		void display();
};

student::student()
{
	cout<<"Enter Roll No. : ";
	cin>>rn;
	
	fflush(stdin);
	
	cout<<"Enter Name : ";
	gets(name);
	
	cout<<"Enter Contact Number : ";
	cin>>no;
}

void student::display()
{
	cout<<endl<<rn<<endl<<name<<endl<<no;
}

main()
{
	student s;
	s.display();
}
