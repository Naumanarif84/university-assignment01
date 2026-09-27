#include <iostream>
using namespace std;
int main() 
{
    int score;
    cout << "Enter credit score (300-850): ";
    cin >> score;
    if (score >= 800 && score <= 850) 
	{
        cout << "Exceptional" << endl;
    }
    else if (score >= 740 && score <= 799) 
	{
        cout << "Very Good" << endl;
    }
    else if (score >= 670 && score <= 739) 
	{
        cout << "Good" << endl;
    }
    else if (score >= 580 && score <= 669)
	 {
        cout << "Fair" << endl;
    }
    else if (score >= 300 && score <= 579)
	 {
        cout << "Poor" << endl;
    }

    return 0;
}