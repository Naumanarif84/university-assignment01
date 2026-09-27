/*Write a program that takes an integer n. Using a single if statement with logical operators,
 check if n is a multiple of both 3 and 5. If true, print "Valid Multiple".*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter an integer value"<<endl;
	cin>>n;
	if(n%3==0 && n%5==0)
	{
		cout<<"valid multiple"<<endl;
	}
}
 
