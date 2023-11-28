
#include <iostream>
#include <unordered_set>
using namespace std;

bool hasDuplicates(int arr[], int size) {
    unordered_set<int> seen;

    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return true;
        }
        seen.insert(arr[i]);
    }

    return false;
}

int main() {
    int arr[100];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (hasDuplicates(arr, size)) {
        cout << "Array has duplicate elements\n";
    } else {
        cout << "Array does not have duplicate elements\n";
    }

    return 0;
}

