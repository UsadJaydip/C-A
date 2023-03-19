#include<iostream>
using namespace std;

class addtwonumbers
{
	int x,y;
	public:
		 
		addtwonumbers()
		{
			x=0;
			y=0;
		}
		addtwonumbers(int a,int b)
		{
			x=a;
			y=b;
		}
		friend int add(addtwonumbers &obj);
};

int add(addtwonumbers &obj)
{
	return (obj.x+obj.y);
}

int main()
{
	addtwonumbers a1;
	cout<<"Sum Is :"<<add(a1)<<endl;
	
	addtwonumbers a2(10,20);
	cout<<"Sum Is :"<<add(a2)<<endl;
}
