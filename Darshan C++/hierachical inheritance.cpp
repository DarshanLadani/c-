#include<iostream>
using namespace std;
int a,b;

class base
{		
	public:
		
	
		
	void getdata()
	{
		cout<<"Enter Value of A : "<<endl;
		cin>>a;
		cout<<"Enter Value of B : "<<endl<<endl;
		cin>>b;
	}
};

class derived1 : public base
{
	public :
	void add()
	{
		cout<<"Addition"<<endl<<endl;
		cout<<"Ans = "<<a+b<<endl<<endl;
	}
};

class derived2 : public base
{
	public :
	void sub()
	{
		cout<<"Substriction"<<endl<<endl;
		cout<<"Ans = "<<a-b<<endl<<endl;
	}
};

class derived3: public base
{
	public :
	void mul()
	{
		cout<<"Multiplication"<<endl<<endl;
		cout<<"Ans = "<<a*b<<endl<<endl;
	}
};

main()
{
	derived1 a;
	a.getdata();
	a.add();
	
	derived2 b;

	b.sub();
	
	derived3 c;

	c.mul();
}

