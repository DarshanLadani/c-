// Fiabonacci series

#include<iostream>
using namespace std;
main()
{
	int n,a=0,b=1,i,c;
	cout<<"Enter Number : ";
	cin>>n;
	
	cout<<a<<" "<<b<<" ";
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<c <<" ";
		a=b;
		b=c;
	}
	
	
	return 0;
}
