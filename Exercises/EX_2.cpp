#include <iostream>
using namespace std;

int main() {

    float pencil, pen, eraser;
    
    cout << "Enter cost of pencil: ";
    cin >> pencil;

    cout << "Enter cost of pen: ";
    cin >> pen;

    cout << "Enter cost of eraser: ";
    cin >> eraser;

    float totalBill = pencil + pen + eraser;

    cout << "The total bill of three items is (without tax) " << totalBill << endl;

    cout << "The total bill of three items is (with tax) " << totalBill + (0.18 * totalBill);

    return 0;
}