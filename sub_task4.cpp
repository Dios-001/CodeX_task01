#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "kya krna? (+, -, *, /, or A for absolute): ";
    cin >> operation;

    
    if (operation == 'A' || operation == 'a') {
        cout << "Absolute value: " << abs(num1) << endl;
        return 0;
    }

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: math nhi aati kya? 0 se division not allowed." << endl;
            }
            break;
        default:
            cout << "Error: galat cheez daali, hehe, abb program dobara run kar" << endl;
    }

    return 0;
}
