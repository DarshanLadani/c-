// constructor program for faculty

#include<iostream>
using namespace std;
class faculty
{
	string id;
	string email;
	char name[30];
	
	public:
		faculty()
		{
			cout<<"enter faculty name : ";
			gets(name);
			fflush(stdin);
			cout<<"enter faculty id : ";
			cin>>id;
			cout<<"enter faculty email : ";
			cin>>email;
			
		}
		void display()
		{
			cout<<endl<<name<<endl<<id<<endl<<email<<endl;
		}
};

main()
{
	faculty f;
	f.display();
}
