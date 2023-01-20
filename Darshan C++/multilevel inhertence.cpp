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
	
};
class derived1 : public derived
{
	public:
		
	int c;
		
	void data()
	{
		cout<<"Enter Value of C : ";
		cin>>c;
	}
	
	void add()
	{
		cout<<"Ans = "<<a+b+c;
	}
	
};

main()
{
	derived1 d;
	d.getdata();
	d.intdata();
	d.data();
	d.add();
}
