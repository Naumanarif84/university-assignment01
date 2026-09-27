#include <iostream>
using namespace std;
int main()
 {
    int hour;
    cout << "Enter hour (0-23): ";
    cin >> hour;
    if (hour >= 5 && hour <= 11) 
	{
        cout << "Morning" << endl;
    }
    else if (hour >= 12 && hour <= 16) 
	{
        cout << "Afternoon" << endl;
    }
    else if (hour >= 17 && hour <= 21)
	 {
        cout << "Evening" << endl;
    }
    else if ((hour >= 22 && hour <= 23) or (hour >= 0 && hour <= 4)) 
	{
        cout << "Night" << endl;
    }

    return 0;
}