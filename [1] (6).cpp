#include <iostream>
using namespace std;

int findLargestElement(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        {
        cin >> arr[i];
    }
    int largest = findLargestElement(arr, size);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}
