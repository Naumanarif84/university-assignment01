#include <iostream>
using namespace std;

int main() {
    char suit;
    cout << "Enter suit code (H, D, C, S): ";
    cin >> suit;
    
    switch(suit) {
        case 'H': case 'h': cout << "Hearts"; break;
        case 'D': case 'd': cout << "Diamonds"; break;
        case 'C': case 'c': cout << "Clubs"; break;
        case 'S': case 's': cout << "Spades"; break;
        default: cout << "Invalid Suit Code";
    }
    return 0;
}
