#include<iostream>
using namespace std;

class base
{		
	public:
		
	int a;
		
	void getdata()
	{
		cout<<"Enter Value of A : ";
		cin>>a;
	}
};

class derived : public base
{
	public:
		
	int b;
		
	void intdata()
	{
		cout<<"Enter Value of B : ";
		cin>>b;
	}
	
	void add()
	{
		cout<<"Ans = "<<a+b;
	}
};

main()
{
	derived d;
	d.getdata();
	d.intdata();
	d.add();
	
}
