#include<iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int temp;
	
	cout<<"Type Value Of Number 1 :";
	cin>>num1;
	cout<<"Type Value Of Number 2 :";
	cin>>num2;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"After Swapping Values :"<<endl;
	cout<<"Values Of Number 1:"<<num1<<endl;
	cout<<"Value Of Number 2:"<<num2;
}
