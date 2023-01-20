#include<iostream>
using namespace std;
class common
	{
		public:
		int x,y;
		void setdata()
		{
			cout<<"enter a value of x : ";
			cin>>x;
			
			cout<<"enter value of y : ";
			cin>>y;
		}
	};
class a: public common
{
	public :
		void add()
		{
			cout<<"addition : "<<x+y;
		}
};
class b: public common
{
	public :
		void sub()
		{
			cout<<"substraction : "<<x-y<<endl;
		}
};
class c: public common
{
	public :
		void div()
		{
			cout<<"divition : "<<x/y<<endl;
		}
};
main()
{
	a final;
	final.setdata();
	final.add();
	
	b f;
	f.setdata();
	f.sub();
	
	c divi;
	divi.setdata();
	divi.div();
	
	return 0;
}

