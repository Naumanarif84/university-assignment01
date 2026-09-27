#include <iostream>
using namespace std;
int main()
 {
    int load;
    cout << "Enter CPU utilization percentage (0-100): ";
    cin >> load;
    if (load > 90)
	 {
        cout << "Critical Load" << endl;
    }
    else if (load >= 70 && load <= 90)
	 {
        cout << "High Load" << endl;
    }
    else if (load >= 40 && load <= 69)
	 {
        cout << "Moderate Load" << endl;
    }
    else if (load >= 10 && load <= 39)
	 {
        cout << "Low Load" << endl;
    }
    else if (load < 10)
	 {
        cout << "Idle" << endl;
    }

    return 0;
}