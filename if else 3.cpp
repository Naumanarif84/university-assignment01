#include <iostream>
using namespace std;
int main()
 {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
	 {
        cout << "Eligible to vote." << endl;
    } else 
	{
        int yearsLeft = 18 - age;
        cout << "Not eligible. You have " << yearsLeft << " year(s) left until you turn 18." << endl;
    }

    return 0;
}