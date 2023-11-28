//[This program is written by NIKHIL SONI (221B251)]
#include <iostream>
using namespace std;

void generateFibonacciSeries(long long int n) {
    long long int prev = 0, curr = 1, next;
    cout << "Fibonacci series: ";
    for (long long int i = 0; i < n; i++) {
        cout << prev << " ";
        next = prev + curr;
        prev = curr;
        curr = next;
    }
}

int main() {
    long int n;
    cout << "Input number of terms: ";
    cin >> n;
    generateFibonacciSeries(n);
    cout<<"\n"<<"size of li"<<"\n"<<sizeof(long int);
    cout<<"size of lli"<<sizeof(long long int);
    cout << endl;
    return 0;
}
