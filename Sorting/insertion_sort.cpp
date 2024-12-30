#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    // Traverse the array starting from the second element
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // The current element to be placed in the sorted portion
        int j = i - 1;     // Start comparing from the last element of the sorted portion

        // Shift elements of the sorted portion to the right
        // until the correct position for the key is found
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Move the larger element one position to the right
            j--;                  // Move to the previous element in the sorted portion
        }

        // Place the key in its correct position
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function to test the Insertion Sort
int main() {
    int arr[] = {12, 11, 13, 5, 6};  // Example array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);  // Perform the sorting

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
