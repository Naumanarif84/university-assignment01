#include <iostream>
using namespace std;
int main()
 {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp > 37.5)
	 {
        cout << "Fever detected." << endl;
    } 
	else
	 {
        cout << "Normal temperature." << endl;
    }

    return 0;
}