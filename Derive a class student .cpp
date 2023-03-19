#include<iostream>
using namespace std;
class student

{
	private:
		int rollno;
		char name[20];
		float perc;
		char grade;
		
	public:
		void getdetails()
		{
			cout<<" \n \t Enter The Students Details :";
			cout<<" \n \t Enter The Name :";
			cin>>name;
			cout<<"\n \t Enter The Rollno :";
			cin>>rollno;
			cout<<"\n \t Enter The Percentage :";
			cin>>perc;
			cout<<"\n \t Enter The Grade Of The Students :";
			cin>>grade;
		}
		void putdetails()
		{
			system("cls");
			cout<<"\n \t The Details Of The Student Are As Follows :";
			cout<<"\n \t The Student Roll Number :"<<rollno;
			cout<<"\n \t The Student Name :"<<name;
			cout<<"\n \t The Percentage He Or She Obtained :"<<perc;
			cout<<"\n \t The Grade He Got :"<<grade;
		}
};
int main()
{
	student s1;
	s1.getdetails();
	s1.putdetails();
	return 0;
}
