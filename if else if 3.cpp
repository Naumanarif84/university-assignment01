#include <iostream>
using namespace std;
int main()
 {
    double bmi;
    cout << "Enter BMI value: ";
    cin >> bmi;
    if (bmi > 30.0)
	 {
        cout << "Obese" << endl;
    }
    else if (bmi >= 25.0 && bmi <= 29.9) 
	{
        cout << "Overweight" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
	 {
        cout << "Normal weight" << endl;
    }
    else if (bmi < 18.5)
	 {
        cout << "Underweight" << endl;
    }

    return 0;
}