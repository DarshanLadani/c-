// parameterised outside constructor

#include<iostream>
#include<string.h>
using namespace std;
class faculty
{
	public :
	int rn;
	string mo,email;
	string name;
	
	
		
		faculty(int, string, string, string);
		void display();
		
};

faculty::faculty(int rn1, string mo1, string email1, string name1)
       {
			rn=rn1;
			mo=mo1;
			email=email1;
			name=name1;

		}
		
	

	void faculty::display()
{
	cout<<rn<<endl<<name<<endl<<mo<<endl<<email<<endl;
}
main()
{
	faculty f(88,"0123456789","faculty@mail.com","abcd");
	f.display();
	
}

