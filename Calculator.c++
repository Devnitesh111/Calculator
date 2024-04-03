#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Function declarations
void displayMenu();
void basicCalculator();
void scientificCalculator();

int main() {
    char choice;

    do {
        cout << "Choose Calculator Mode:" << endl;
        cout << "1. Basic Calculator" << endl;
        cout << "2. Scientific Calculator" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                basicCalculator();
                break;
            case '2':
                scientificCalculator();
                break;
            case '3':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } while(choice != '3');

    return 0;
}

void displayMenu() {
    cout << "Operations Available:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Trigonometric Functions" << endl;
    cout << "8. Logarithmic Functions" << endl;
    cout << "9. Back to main menu" << endl;
}

void basicCalculator() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
}

void scientificCalculator() {
    int choice;
    double num;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Addition
                basicCalculator();
                break;
            case 2: // Subtraction
                basicCalculator();
                break;
            case 3: // Multiplication
                basicCalculator();
                break;
            case 4: // Division
                basicCalculator();
                break;
            case 5: // Power
                cout << "Enter base: ";
                cin >> num;
                cout << "Enter exponent: ";
                double exp;
                cin >> exp;
                cout << "Result: " << pow(num, exp) << endl;
                break;
            case 6: // Square Root
                cout << "Enter number: ";
                cin >> num;
                if (num >= 0)
                    cout << "Result: " << sqrt(num) << endl;
                else
                    cout << "Error! Cannot calculate square root of a negative number." << endl;
                break;
            case 7: // Trigonometric Functions
                cout << "Enter angle in degrees: ";
                cin >> num;
                cout << "Sin(" << num << ") = " << sin(num * 3.14159 / 180) << endl;
                cout << "Cos(" << num << ") = " << cos(num * 3.14159 / 180) << endl;
                cout << "Tan(" << num << ") = " << tan(num * 3.14159 / 180) << endl;
                break;
            case 8: // Logarithmic Functions
                cout << "Enter number: ";
                cin >> num;
                cout << "Natural Logarithm of " << num << " = " << log(num) << endl;
                cout << "Base-10 Logarithm of " << num << " = " << log10(num) << endl;
                break;
            case 9: // Back to main menu
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } while(choice != 9);
}
