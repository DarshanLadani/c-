#include<iostream>
using namespace std;
class abc
{
	public :
		abc()
		{
			cout<<"CONSTRUCTOR";
		}
		
		~abc()
		{
			cout<<"\nDESTRUCTOR";
		}
		
};

main()
{
	abc a;
}
