#include <iostream>
using namespace std;

int main() {

    float principal, rate, time;
    
    cout << "Enter the principal: ";
    cin >> principal;

    cout << "Enter the rate: ";
    cin >> rate;

    cout << "Enter the time: ";
    cin >> time;

    float simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest is " << simpleInterest << endl;

    return 0;
}