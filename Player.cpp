#include<iostream>
using namespace std;
class player
{
	private:
		string name;
		float average;
		char team;
	
	public:
		player(string n,float a ,char t)
		{
			name=n;
			average=a;
			team=t;
		}
		void setname(string n)
		{
			name=n;
		}
		void setaverage(float a)
		{
			average=a;
		}
		void setteam(char t)
		{
			team=t;
		}
		string getname()
		{
			return name;
		}
		int getaverage()
		{
			return average;
		}
		char getteam()
		{
			return team;
		}
		void input(string n,float a, char t)
		{
			name=n;
			average=a;
			team=t;
		}
		void change(string n,float a,char t)
		{
			name=n;
			average=a;
			team=t;
		}
		void display()
		{
			cout<<"Player Name is: "<<name<<endl;
			cout<<"Player Average is: "<<average<<endl;
			cout<<"Player Team is: "<<team<<endl;
		}
};
int main()
{
	string name;
	float average;
	char team;
	cout<<"Enter name of the player:"<<endl;
	cin>>name;
	cout<<"Enter average of the player:"<<endl;
	cin>>average;
	cout<<"Enter team of the player:"<<endl;
	cin>>team;
	player obj(name,average,team);
	
	obj.input(name,average,team);
	obj.change(name,average,team);
	obj.display();
	
	return 0;
}
