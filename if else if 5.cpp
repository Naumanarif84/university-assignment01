#include <iostream>
using namespace std;
int main()
 {
    int speed, limit;
    cout << "Enter driving speed and speed limit: ";
    cin >> speed >> limit;
    int excess = speed - limit;
    if (excess > 30)
	 {
        cout << "Severe Violation" << endl;
    }
    else if (excess >= 21 && excess <= 30) 
	{
        cout << "High Violation" << endl;
    }
    else if (excess >= 11 && excess <= 20) 
	{
        cout << "Moderate Violation" << endl;
    }
    else if (excess >= 1 && excess <= 10) 
	{
        cout << "Minor Violation" << endl;
    }

    return 0;
}