#include <iostream>
using namespace std;

int main() {
    int shape;
    cout << "1. Square\n2. Circle\n3. Triangle\nEnter shape option: ";
    cin >> shape;
    
    switch(shape) {
        case 1: cout << "Area Formula: side * side"; break;
        case 2: cout << "Area Formula: 3.1416 * radius * radius"; break;
        case 3: cout << "Area Formula: 0.5 * base * height"; break;
        default: cout << "Invalid Shape Choice";
    }
    return 0;
}
