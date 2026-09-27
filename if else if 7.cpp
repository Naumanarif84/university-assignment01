#include <iostream>
using namespace std;
int main() 
{
    double temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp > 100)
	 {
        cout << "Gas" << endl;
    }
    else if (temp == 100) 
	{
        cout << "Boiling Point" << endl;
    }
    else if (temp >= 1 && temp <= 99)
	 {
        cout << "Liquid" << endl;
    }
    else if (temp == 0)
	 {
        cout << "Freezing Point" << endl;
    }
    else if (temp < 0) 
	{
        cout << "Solid" << endl;
    }

    return 0;
}