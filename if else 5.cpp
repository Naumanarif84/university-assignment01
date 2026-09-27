#include <iostream>
using namespace std;
int main()
 {
    int a, b;
    cout << "Enter two distinct integers: ";
    cin >> a >> b;
    if (a > b)
	 {
        cout << a << " is the maximum." << endl;
    }
	 else
	  {
        cout << b << " is the maximum." << endl;
    }

    return 0;
}