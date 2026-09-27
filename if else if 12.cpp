#include <iostream>
using namespace std;
int main()
 {
    double hours;
    cout << "Enter parking duration in hours: ";
    cin >> hours;
    if (hours > 8.0)
	 {
        cout << "Daily Maximum Rate" << endl;
    }
    else if (hours >= 5.0 && hours <= 8.0)
	 {
        cout << "Extended Stay Rate" << endl;
    }
    else if (hours >= 2.0 && hours < 5.0)
	 {
        cout << "Standard Rate" << endl;
    }
    else if (hours <= 1.0)
	 {
        cout << "Minimum Hourly Rate" << endl;
    }

    return 0;
}