#include <iostream>
using namespace std;
int main()
 {
    double weight;
    cout << "Enter package weight in kg: ";
    cin >> weight;
    if (weight > 20.0)
	 {
        cout << "Heavy Freight Rate" << endl;
    }
    else if (weight >= 10.1 && weight <= 20.0)
	 {
        cout << "Standard Heavy Rate" << endl;
    }
    else if (weight >= 5.1 && weight <= 10.0)
	 {
        cout << "Standard Rate" << endl;
    }
    else if (weight >= 1.0 && weight <= 5.0)
	 {
        cout << "Economy Rate" << endl;
    }
    else if (weight < 1.0) {
        cout << "Lightweight Rate" << endl;
    }

    return 0;
}