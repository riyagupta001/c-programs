#include <iostream>
using namespace std;

int power(int x, int y) {
    int result = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            result *= x;
        }
        x *= x;
        y /= 2;
    }
    return result;
}

int main() {
    int x, y;
    cout << "Enter two numbers (x and y): ";
    cin >> x >> y;
    int result = power(x, y);
    cout << x << "^" << y << " = " << result << endl;
    return 0;
}
