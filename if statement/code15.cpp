/*Given an integer year, use a single if statement to check if the year ends in a century (divisible by 100) 
and is also divisible by 400. If true, print "Century Leap Year".*/


#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"enter any year"<<endl;
	cin>>year;
	if(year%100 == 0 && year%400 == 0)
	{
		cout<<"century leap year "<<endl;
	}
}
