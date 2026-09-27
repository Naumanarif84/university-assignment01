/*Given two integer inputs representing sensor readings, use a single if statement to check if their 
combined sum exceeds 1000. If it does, print "Warning: Threshold Exceeded"*/


#include<iostream>
using namespace std;

int main()
{
 	int x,y;
	cout<<"enter any number"<<endl;
	cin>>x;
	cout<<"enter any number"<<endl;
	cin>>y;
	if(x + y > 1000)
	{
		cout<<"Warning"<<endl;
	}
}
