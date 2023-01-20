// Tabel


#include<iostream>
using namespace std;
main()
{
	int i,a,sum=0;
	cout<<"Enter number ";
	cin>>a;
	
	for(i=1;i<10;i++)
	{
		sum=a*i;
		cout<<a<<"*"<<i<<"="<<sum<<endl;
	}
	
	return 0;
}
