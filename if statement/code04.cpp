/*Given an integer variable x, use a single if statement to check if x is odd. If it is odd, increment 
its value by 1, then print the updated value.*/


#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"enter value of x"<<endl;
	cin>>x;
	if(x%2 != 0)
	{
		x = x+1;
		cout<<x<<endl;
	}
}
