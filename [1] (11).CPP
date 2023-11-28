#include <iostream>
using namespace std;

string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    string inputString, reversedString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    reversedString = reverseString(inputString);
    cout << "Reversed string: " << reversedString << endl;
    return 0;
}
