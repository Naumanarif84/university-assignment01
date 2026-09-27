#include <iostream>
using namespace std;

int main() {
    int role;
    cout << "1. Admin\n2. Editor\n3. Viewer\nEnter user role: ";
    cin >> role;
    
    switch(role) {
        case 1: cout << "Access Level: Administrator"; break;
        case 2: cout << "Access Level: Editor"; break;
        case 3: cout << "Access Level: Viewer"; break;
        default: cout << "Invalid Role Number";
    }
    return 0;
}
