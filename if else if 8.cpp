#include <iostream>
using namespace std;
int main() {
    int rating;
    cout << "Enter rating (1-5): ";
    cin >> rating;
    if (rating == 5) 
	{
        cout << "20% Bonus" << endl;
    }
    else if (rating == 4) 
	{
        cout << "15% Bonus" << endl;
    }
    else if (rating == 3)
	 {
        cout << "10% Bonus" << endl;
    }
    else if (rating == 2)
	 {
        cout << "5% Bonus" << endl;
    }
    else if (rating == 1) 
	{
        cout << "No Bonus" << endl;
    }

    return 0;
}