#include <iostream>
using namespace std;
int main()
 {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;
    if (score >= 90 && score <= 100)
	 {
        cout << "Outstanding" << endl;
    }
    else if (score >= 80 && score <= 89)
	 {
        cout << "Excellent" << endl;
    }
    else if (score >= 70 && score <= 79)
	 {
        cout << "Good" << endl;
    }
    else if (score >= 60 && score <= 69)
	 {
        cout << "Satisfactory" << endl;
    }
    else if (score >= 50 && score <= 59)
	 {
        cout << "Needs Improvement" << endl;
    }

    return 0;
}