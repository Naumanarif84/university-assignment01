/*Accept an integer representing the length of a password string. Use a single if statement to check if the 
length is safely between 8 and 20 characters (inclusive). If true, print "Acceptable Length".*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
 	string password;
	cout<<"enter your password"<<endl;
	cin>>password;
	if(password.length() >= 8 && password.length() <= 20)
	{
		cout<<"Acceptable length"<<endl;
	}
}
