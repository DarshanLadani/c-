#include<iostream>
using namespace std;
class faculty
{
	public :
	
	int id;
	string name;
	
	void setid(int id)
	{
		this->id=id;
	}	
	
	int getid()
	{
		return id;
	}
	
	void setname(string name)
	{
		this->name=name;
	}
	string getname()
	{
		return name;
	}
};

main()
{
	faculty f;	
	f.setid(999);
	cout<<endl<<f.getid();
	
	f.setname("darshan");
	cout<<endl<<f.getname();
	
}
