#include<iostream>
using namespace std;
class A
{
	string s; //char a[50]
	public:
		A()
		{
		}
		A(string s2)
		{
			s=s2;
		}
		void show()
		{
			cout<<s;
		}
		A operator + (A obj)
		{
			A obj1;
			obj1.s=s+obj.s;
			return obj1;	
		}
};

int main()
{
	A ob1 ("Raman"),ob2("Goyal"),ob3;
	ob3=ob1+ob2;
	ob3.show();
}
