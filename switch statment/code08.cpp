#include <iostream>
using namespace std;

int main() {
    char size;
    cout << "Enter size (S, M, L): ";
    cin >> size;
    
    switch(size) {
        case 'S': case 's': cout << "Base Price: $2"; break;
        case 'M': case 'm': cout << "Base Price: $3"; break;
        case 'L': case 'l': cout << "Base Price: $4"; break;
        default: cout << "Invalid Size Code";
    }
    return 0;
}
