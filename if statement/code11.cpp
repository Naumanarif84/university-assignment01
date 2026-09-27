/*Accept an integer n. Use a single if statement to check if n is a multiple of 4 or a multiple of 7. If the condition is met,
 print "Special Number".*/
 
 
 

#include<iostream>
using namespace std;

int main()
{
 	int n;
	cout<<"enter any number"<<endl;
	cin>>n;
	if(n%4==0 && n%7==0)
	{
		cout<<"special number"<<endl;
	}
}
