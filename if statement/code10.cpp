/*Write a program that takes an integer. Use a single if statement using the modulus operator to check if the 
number is both strictly greater than 0 and an even number. If true, print "Valid Even Positive".*/


#include<iostream>
using namespace std;

int main()
{
 	int num;
	cout<<"enter any number"<<endl;
	cin>>num;
	if(num>0 && num%2==0)
	{
		cout<<"Valid Even Positive"<<endl;
	}
}
