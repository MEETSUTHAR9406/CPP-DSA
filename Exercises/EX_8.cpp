#include <iostream>
using namespace std;

int main() {

    float a, b, c;
    
    cout << "Enter three numbers a, b, c: ";
    cin >> a >> b >> c;

    if(a >= b && a >= c) {
        cout << "a = " << a << " is bigger.";
    } else if(b >= a && b >= c) {
        cout << "b = " << b << " is bigger.";
    } else {
        cout << "c = " << c << " is bigger.";
    }

    return 0;
}