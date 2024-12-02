#include <iostream>
using namespace std;

int main() {
    double num1, num2; // Variables to hold the input numbers
    char operation;    // Variable to hold the selected operation
    double result;     // Variable to store the result

    cout << "Welcome to the Simple Calculator!" << endl;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Prompt the user to choose an operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) { // Check for division by zero
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please choose +, -, *, or /." << endl;
            break;
    }

    return 0;
}
