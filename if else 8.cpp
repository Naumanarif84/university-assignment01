#include <iostream>
using namespace std;
int main()
 {
    int score;
    cout << "Enter student's score (out of 100): ";
    cin >> score;

    if (score >= 40)
	 {
        cout << "Passed! Great job." << endl;
    }
	 else 
	 {
        cout << "Failed. Keep practicing and try again!" << endl;
    }

    return 0;
}