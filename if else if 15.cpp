#include <iostream>
using namespace std;
int main()
 {
    double lumens;
    cout << "Enter light sensor reading in lumens: ";
    cin >> lumens;
    if (lumens > 10000)
	 {
        cout << "Direct Sunlight" << endl;
    }
    else if (lumens >= 1000 && lumens <= 10000)
	 {
        cout << "Bright Daylight" << endl;
    }
    else if (lumens >= 100 && lumens <= 999)
	 {
        cout << "Indoor Office Lighting" << endl;
    }
    else if (lumens >= 1 && lumens <= 99)
	 {
        cout << "Dimly Lit" << endl;
    }
    else if (lumens == 0)
	 {
        cout << "Total Darkness" << endl;
    }

    return 0;
}