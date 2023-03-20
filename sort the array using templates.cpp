#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int n,i,j;
	int temp;
	
	cout<<"Enter Total Number Of Elements o Read :";
	cin>>n;
	
	if(n<0 || n>100)
	{
		cout<<"Input Valid Range!!!"<<endl;
		return -1;
	}
	
	for(i=0;i<=n;i++)
	{
		cout<<"Enter Elements["<<i+1<<"]=";
		cin>>arr[i];
	}
	
	cout<<"Unsorted Array Elements :"<<endl;
	for(i=0;i<=n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"Sorted Array Elements(Ascending Order)"<<endl;
	for(i=0;i<=n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
