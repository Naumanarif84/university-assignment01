/*Given two integers a and b, use a single if statement to check if both numbers are non-zero and unequal 
 to each other. If true, print "Valid Pair".*/
 
 
 #include<iostream>
using namespace std;

int main()
{
 	int x,y;
	cout<<"enter any number"<<endl;
	cin>>x;
	cout<<"enter any number"<<endl;
	cin>>y;
	if(x!=0 && x!=y)
	{
		cout<<"Valid pair"<<endl;
	}
}
