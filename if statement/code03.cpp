/*Write a program that takes a non-zero positive integer n. Using a single if statement with bitwise operators (n & (n - 1)),
check if the number is a power of 2. If true, print "Power of Two".*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter a non-zero positive integer value"<<endl;
	cin>>n;
	if(n>0 & (n-1)==0)
	{
		cout<<"power of 2"<<endl;
	}
}
