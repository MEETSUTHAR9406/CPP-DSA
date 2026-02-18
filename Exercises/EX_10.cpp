#include <iostream>
using namespace std;

int main() {

    float num;
    
    cout << "Enter your number: ";
    cin >> num;

    if(num > 0) {
        cout << "number " << num << " is positive.";
    } else if(num < 0) {
        cout << "number " << num << " is negative.";
    } else {
        cout << "number " << num << " is zero.";
    }

    return 0;
}