#include<iostream>
using namespace std;
class sk
{
	private:
		int a,b;
		public:
			void setdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void show()
			{
				cout<<"a="<<a<<"b="<<b;
			}
			sk operator *(sk c)
			{
				sk temp;
				temp.a=a*c.a;
				temp.b=b*c.b;
				
			}
};
int main()
{
	sk obj1,obj2,obj3;
	obj1.setdata(6,9);
	obj2.setdata(7,7);
	obj3=obj1*obj2;
	obj3.show();
	
}
