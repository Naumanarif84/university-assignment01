#include <iostream>
using namespace std;
int main()
 {
    int temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp > 40)
	 {
        cout << "Extreme Heat Warning" << endl;
    }
    else if (temp >= 30 && temp <= 40)
	 {
        cout << "Hot Weather" << endl;
    }
    else if (temp >= 20 && temp <= 29)
	 {
        cout << "Pleasant Weather" << endl;
    }
    else if (temp >= 10 && temp <= 19)
	 {
        cout << "Cool Weather" << endl;
    }
    else if (temp >= 0 && temp <= 9)
	 {
        cout << "Cold Weather" << endl;
    }

    return 0;
}