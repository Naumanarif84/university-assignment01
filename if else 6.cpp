#include <iostream>
using namespace std;
int main()
 {
    char ch;
    cout << "Enter an alphabet character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
	 {
        cout << ch << " is an Uppercase letter." << endl;
    }
	 else 
	 {
        cout << ch << " is a Lowercase letter." << endl;
    }

    return 0;
}