#include <iostream>
using namespace std;

int main()
 {
    float total;
    cout << "Enter total purchase amount ($): ";
    cin >> total;
    if (total > 100.0)
	 {
        float finalAmount = total - (total * 0.10);
        cout << "Discount applied! Final payable amount: $" << finalAmount << endl;
    }
	 else
	  {
        cout << "No discount applied. Final payable amount: $" << total << endl;
    }

    return 0;
}