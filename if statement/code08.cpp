/*Given a two-digit positive integer num, use a single if statement to check if its tens digit is strictly 
greater than its units digit (num / 10 > num % 10). If true, print "Descending Digits".*/


#include<iostream>
using namespace std;

int main()
{
 	int num;
	cout<<"enter any two digit number"<<endl;
	cin>>num;
	if((num/10)> (num%10))
	{
		cout<<"desending digits"<<endl;
	}
}

