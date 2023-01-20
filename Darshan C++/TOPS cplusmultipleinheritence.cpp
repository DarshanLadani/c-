#include<iostream>
using namespace std;
class a
{
	public:
		int x;
		
		void setdata()
		{
			cout<<"enter a value of X : ";
			cin>>x;
		}
};
class b
{
	public :
		int y;
		
		void getdata()
		{
			cout<<"enter value of Y : ";
			cin>>y;
		}
};
class c : public a,public b
{
	public:
		int z;
		
		void indata()
		{
		cout<<"enter value of Z : ";
			cin>>z;
	}
		
		void add()
		{
			cout<<"addition : "<<x+y;
		}
};
main()
{
	c call;
	call.setdata();
	call.getdata();
	call.indata();
	call.add();
	
	return 0;
}
