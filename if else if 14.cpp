#include <iostream>
using namespace std;
int main() 
{
    int code;
    cout << "Enter subscription code (0-4): ";
    cin >> code;
    if (code == 4) 
	{
        cout << "Enterprise Tier" << endl;
    }
    else if (code == 3) 
	{
        cout << "Professional Tier" << endl;
    }
    else if (code == 2)
	 {
        cout << "Standard Tier" << endl;
    }
    else if (code == 1) 
	{
        cout << "Basic Tier" << endl;
    }
    else if (code == 0)
	 {
        cout << "Free Tier" << endl;
    }

    return 0;
}