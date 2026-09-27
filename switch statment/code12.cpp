#include <iostream>
using namespace std;

int main() {
    char zone;
    cout << "Enter zone code (A, B, C): ";
    cin >> zone;
    
    switch(zone) {
        case 'A': case 'a': cout << "Low Cost"; break;
        case 'B': case 'b': cout << "Standard Cost"; break;
        case 'C': case 'c': cout << "High Cost"; break;
        default: cout << "Invalid Zone Code";
    }
    return 0;
}
