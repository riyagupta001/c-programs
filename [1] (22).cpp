//[This program is written by NIKHIL SONI (221B251)]
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int nCr(int n, int r)
{
    if (n < r)
    {
        return 0;
    }
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
    int n, r;
    cout << "Enter n and r (nCr): ";
    cin >> n >> r;
    int result = nCr(n, r);
    cout << "nCr value: " << result << endl;
    return 0;
}
