#include <iostream>
using namespace std;
int main()
 {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 4 == 0 or num % 10 == 0)
	 {
        cout << num << " is either a multiple of 4 or ends in zero." << endl;
    } 
	else 
	{
        cout << num << " satisfies neither condition." << endl;
    }

    return 0;
}