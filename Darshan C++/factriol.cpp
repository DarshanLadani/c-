// Fctriol

#include<iostream>
using namespace std;
main()
{
	int a,i,fact=1;
	cout<<"Enter Number : ";
	cin>>a;
	
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	cout<<"Factriol is : "<<fact;
	
	return 0;
}
