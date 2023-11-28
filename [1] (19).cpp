//[This program is written by NIKHIL SONI (221B251)]
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary)
{
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base+1
        ;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
