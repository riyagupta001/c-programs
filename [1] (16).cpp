//[This program is written by NIKHIL SONI (221B251)]
#include <iostream>
using namespace std;

int seriesSumOfSquares(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    long int n;
    cout << "Enter the value of n: ";
    cin >> n;
    long int sum = seriesSumOfSquares(n);
    cout << "Series sum of squares: " << sum << endl;
    return 0;
}

