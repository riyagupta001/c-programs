#include<iostream>
using namespace std;

struct Complex {
    double real;
    double imaginary;
};

Complex addComplexNumbers(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    Complex num1, num2, sum;

    cout << "For 1st complex number" << endl;
    cout << "Enter real and imaginary part respectively: ";
    cin >> num1.real >> num1.imaginary;

    cout << "For 2nd complex number" << endl;
    cout << "Enter real and imaginary part respectively: ";
    cin >> num2.real >> num2.imaginary;

    sum = addComplexNumbers(num1, num2);

    cout << "Sum = " << sum.real << " + " << sum.imaginary << "i" << endl;

    return 0;
}

