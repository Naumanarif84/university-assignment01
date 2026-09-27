#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter expression (e.g., 5 + 3): ";
    cin >> a >> op >> b;
    
    switch(op) 
	{
        case '+': 
		          cout << "Result: " << a + b; 
		          break;
        case '-': 
		         cout << "Result: " << a - b; 
		        break;
        case '*': 
		        cout << "Result: " << a * b; 
		        break;
        case '/': 
            if(b != 0) cout << "Result: " << a / b;
            else cout << "Error: Division by zero";
            break;
        default:
		       cout << "Invalid Operator";
    }
    return 0;
}
