/*Accept a character ch. Use a single if statement to check if ch is a lowercase letter (between 'a' and 'z'). 
If true, convert it to uppercase by subtracting 32 from its ASCII value and print it.*/


#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter any character"<<endl;
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		ch = ch-32;
		cout<<ch<<endl;
	}
}
