//[This program is written by NIKHIL SONI (221B251)]
#include <iostream>
using namespace std;

int multiplyUsingAddition(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++)
        {
        result += a;
    }
    return result;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int product = multiplyUsingAddition(num1, num2);
    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;
    return 0;
}
