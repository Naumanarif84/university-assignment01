/*Given three integer variables representing angles, use a single combined if statement to check if all angles are 
strictly greater than 0 and their sum equals exactly 180. If true, print "Valid Triangle"*/



#include<iostream>
using namespace std;

int main()
{
	int side1,side2,side3;
	cout<<"Enter side1 of triangle"<<endl;
	cin>>side1;
    cout<<"Enter side2 of triangle"<<endl;
	cin>>side2;
	cout<<"Enter side3 of triangle"<<endl;
	cin>>side3;	
	if(side1>0 && side2>0 && side3>0 && side1 + side2 + side3 == 180)
	{
		cout<<"Valid triangle"<<endl;
	}
}
