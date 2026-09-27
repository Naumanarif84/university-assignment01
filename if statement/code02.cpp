/*Accept an integer from the user. Use a single if statement to check if the number falls inclusively between 50 and 100 
and is also a multiple of 10. If it matches, print "Target Zone".*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter an integer value"<<endl;
	cin>>n;
	if(n>=50 && n<=100 && n%10==0)
	{
		cout<<"Target Zone"<<endl;
	}
}
 
