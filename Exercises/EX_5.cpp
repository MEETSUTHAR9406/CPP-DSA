#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    if(a > b) {
        cout << a << " is bigger than " << b << endl;
    } else if(a < b) {
        cout << b << " is bigger than " << a << endl;
    } else {
        cout << a << " and " << b << " are equal.";
    }

    return 0;
}