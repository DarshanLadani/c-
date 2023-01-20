#include<iostream>
using namespace std;
class base
{
protected :
		int x;
		public :	
		void getdata()
		{
			cout<<"enter value of X : ";
			cin>>x;
		}
};

class derived1 : virtual public base
{
protected :
		int y;
		public :	
		void setdata()
		{
			cout<<"enter value of y : ";
			cin>>y;
		}
};

class derived2 : virtual public base
{
	protected :
		int z;
		public :		
		void intdata()
		{
			cout<<"enter value of Z : ";
			cin>>z;
		}
};

class prime : public derived1 , public derived2
{
	public :
		void  add()
		{
			cout<<"Addition : "<<x+y+z;
		}
		
};

main()
{
	prime p;
	p.getdata();
	p.setdata();
	p.intdata();
	p.add();
}
