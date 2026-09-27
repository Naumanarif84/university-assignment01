/*Take a character input. Use a single compound if statement (checking both lowercase and uppercase variations) to 
determine if the character is a vowel. If true, print "Vowel Detected".*/


#include<iostream>
using namespace std;

int main()
{
 	char x;
	cout<<"enter any character"<<endl;
	cin>>x;
	if(x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u' || x =='A'||x == 'E'||x == 'I'||x == 'O'||x == 'U' )
	{
		cout<<"vowel deceted,"<<endl;
	}
}
