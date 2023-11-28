
#include <iostream>
using namespace std;

int* createDynamicArray(int size) {
    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}

int searchElementInDynamicArray(int* arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = createDynamicArray(size);

    cout << "Enter the element to be searched: ";
    cin >> key;
    int index = searchElementInDynamicArray(arr, size, key);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    delete[] arr;

    return 0;
}
