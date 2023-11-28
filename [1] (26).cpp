
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void deleteElement(int arr[], int& size, int target) {
    int index = linearSearch(arr, size, target);

    if (index != -1) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        cout << "Error: Element not found\n";
    }
}

int main() {
    int arr[100];
    int size, target;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to delete: ";
    cin >> target;

    deleteElement(arr, size, target);

    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

