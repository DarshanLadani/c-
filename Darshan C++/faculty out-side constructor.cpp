#include<iostream>
using namespace std;

class faculty
{
	int id;
	char name[999];
	string no,email;
	public :
		faculty();
		void display();
};

faculty::faculty()
{
	cout<<"Enter ID : ";
	cin>>id;
	
	fflush(stdin);
	
	cout<<"Enter Name : ";
	gets(name);
	
	cout<<"Enter Contact Number : ";
	cin>>no;
	
	cout<<"Enter Email : ";
	cin>>email;
}

void faculty::display()
{
	cout<<endl<<id<<endl<<name<<endl<<no<<endl<<email;
}

main()
{
	faculty f;
	f.display();
}
