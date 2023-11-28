

#include <iostream>
using namespace std;

void insertAtIndex(int arr[], int& size, int index, int value) {
    if (index < 0 || index > size) {
        cout << "Error: Invalid index give correct index \n";
        return;
    }

    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = value;
    size++;
}

int main() {
    int arr[100];
    int size, index, value;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index at which to insert: ";
    cin >> index;

    cout << "Enter the value to insert: ";
    cin >> value;

    insertAtIndex(arr, size, index, value);

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
