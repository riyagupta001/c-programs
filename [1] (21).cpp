//[This program is written by NIKHIL SONI (221B251)]
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void displayLowerMatrix(int mat[][MAX_SIZE], int n) {
    cout << "Lower Triangular Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << mat[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;
    int matrix[MAX_SIZE][MAX_SIZE];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    displayLowerMatrix(matrix, n);
    return 0;
}
