/*Take three integer inputs. Use a single if statement to check if all three numbers share the same sign 
//(either all strictly positive or all strictly negative). If true, print "Same Sign".*/



#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Enter num1"<<endl;
	cin>>num1;
    cout<<"Enter num2"<<endl;
	cin>>num2;
	cout<<"Enter num3"<<endl;
	cin>>num3;	
	if(num1 >0 && num2 >0 && num3 > 0 || num1 <0 && num2 <0 && num3 < 0)
	{
		cout<<"same sighn"<<endl;
	}
}
