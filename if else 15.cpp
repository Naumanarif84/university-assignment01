#include <iostream>
#include <string>
using namespace std;
int main()
 {
    string password;
    cout << "Enter a password: ";
    cin >> password;
    if (password.length() >= 8)
	 {
        cout << "Valid length." << endl;
    }
	 else 
	 {
        cout << "Password too short." << endl;
    }

    return 0;
}