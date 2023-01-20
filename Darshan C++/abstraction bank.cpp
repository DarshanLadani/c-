// abstraction 

#include<iostream>
using namespace std;
class RBI

{
	public :
		
	virtual void roi()=0;// rate of interest
};
class SBI : public RBI
{
	public:
		
		void roi()
		{
			cout<<"ROI OF SBI is 8.5 ";
		}
};
class HDFC : public RBI
{
	public:
		
		void roi()
		{
			cout<<endl<<"ROI OF HDFC is 9.5 ";
		}
};
main()
{
	SBI s;
	HDFC h;
	s.roi();
	h.roi();
	}
