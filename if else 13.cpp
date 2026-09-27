#include <iostream>
using namespace std;
int main()
 {
    char ch;
    cout << "Enter an alphabet character: ";
    cin >> ch;
    if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or
        ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
		 {
        cout << ch << " is a Vowel." << endl;
    } 
	else
	 {
        cout << ch << " is a Consonant." << endl;
    }

    return 0;
}