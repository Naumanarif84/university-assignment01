#include <iostream>
using namespace std;
int main()
 {
    double mag;
    cout << "Enter Richter magnitude: ";
    cin >> mag;
    if (mag >= 8.0)
	 {
        cout << "Great" << endl;
    }
    else if (mag >= 7.0 && mag <= 7.9)
	 {
        cout << "Major" << endl;
    }
    else if (mag >= 6.0 && mag <= 6.9)
	 {
        cout << "Strong" << endl;
    }
    else if (mag >= 5.0 && mag <= 5.9)
	 {
        cout << "Moderate" << endl;
    }
    else if (mag >= 4.0 && mag <= 4.9)
	 {
        cout << "Light" << endl;
    }

    return 0;
}