#include <iostream>
using namespace std;

int main() {
    char dir;
    cout << "Enter direction code (N, S, E, W): ";
    cin >> dir;
    
    switch(dir) {
        case 'N': case 'n': cout << "North"; break;
        case 'S': case 's': cout << "South"; break;
        case 'E': case 'e': cout << "East"; break;
        case 'W': case 'w': cout << "West"; break;
        default: cout << "Invalid Direction";
    }
    return 0;
}
