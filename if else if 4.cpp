#include <iostream>
using namespace std;
int main()
 {
    int a1, a2, a3;
    cout << "Enter three angles: ";
    cin >> a1 >> a2 >> a3;
    if (a1 == 90 or a2 == 90 or a3 == 90)
	 {
        cout << "Right Triangle" << endl;
    }
    else if (a1 > 90 or a2 > 90 or a3 > 90)
	 {
        cout << "Obtuse Triangle" << endl;
    }
    else if (a1 < 90 && a2 < 90 && a3 < 90)
	 {
        cout << "Acute Triangle" << endl;
    }

    return 0;
}