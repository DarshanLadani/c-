// wap to find area of circle in constructor over loading

#include<iostream>
using namespace std;

class area
{
	public:
		float ans;
		area()
		{
			ans=0;
		}
		area(float height, float base)
		{
			ans=base*height;

		}
		
		void display()
		{
			cout<<"\narea of ractangle : "<<ans;
		}
};

main()
{
	area b;
	area a(20,10);
	a.display();n
	
}
