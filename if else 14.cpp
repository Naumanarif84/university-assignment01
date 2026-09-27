#include <iostream>
using namespace std;
int main()
 {
    float length, breadth;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    if (length == breadth) 
	{
        cout << "It is a Square." << endl;
    } 
	else 
	{
        cout << "It is a Rectangle." << endl;
    }

    return 0;
}