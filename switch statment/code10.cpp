#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Burger\n2. Pizza\n3. Pasta\n4. Salad\nEnter choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1: cout << "Selected: Burger"; break;
        case 2: cout << "Selected: Pizza"; break;
        case 3: cout << "Selected: Pasta"; break;
        case 4: cout << "Selected: Salad"; break;
        default: cout << "Invalid Menu Choice";
    }
    return 0;
}
