#include <iostream>
using namespace std;

int main() {

    float num1, num2;
    int choice;

    cout << "Enter number1: ";
    cin >> num1;
    
    cout << "Enter number2: ";
    cin >> num2;


    while(true) {

    cout << "Choose the operation: " << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Change the numbers " << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << num1 + num2 << endl;
        break;

    case 2:
        cout << num1 - num2 << endl;
        break;

    case 3: 
        cout << num1 * num2 << endl;
        break;

    case 4: 
        if(num2 == 0) {
            cout << "num2 cannot be zero.";
        } else {
            cout << num1 / num2 << endl;
        }
        break;
    
        
    case 5:
        cout << "Enter number1: ";
        cin >> num1;
        
        cout << "Enter number2: ";
        cin >> num2;
        break;

    case 6:
        exit(0);

    default:
        cout << "Enter valid operation.";
        break;
    }
}

    return 0;
}