#include<iostream>
using namespace std;

          int cube(int num);
          int main()
          {
          	int num;
          	int c;
          	
          	cout<<"Enter The Number To Find its cube"<<endl;
          	cin>>num;
          	
          	c=cube(num);
          	cout<<"The cube of Number is="<<" "<<c<<endl;
        
		  }
		  
		  int cube(int num)
		  {
		  	return(num*num*num);
		  }

