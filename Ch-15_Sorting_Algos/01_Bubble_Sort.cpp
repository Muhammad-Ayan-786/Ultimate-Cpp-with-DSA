#include<iostream>
using namespace std;

// Function to print array.
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == 0)
            cout << "{";

        if (i == 0); // Do nothing
        else
            cout << ", ";

        cout << arr[i];

        if (i == size - 1)
            cout << "}";
    }

    cout << endl;
}


// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < (n-1); i++)
    {
        bool isSwap = false; // To check if any swapping happened in this pass.

        for (int j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        cout  << "Pass " << (i + 1) << endl; // To show how many passes were made before sorting completed.

        if (!isSwap) return; // If isSwap is false → !isSwap becomes true → the if runs → sorting stops.
    }
}

int main() {
    // Bubble Sort on Unsorted Array
    int arr[] = {3, 5, 1, 4, 2};
    int n = sizeof(arr)/sizeof(int);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    cout << endl;


    // Bubble Sort on Sorted Array
    int sortedArr[] = {1, 2, 3, 5, 4, 6};
    int m = sizeof(sortedArr)/sizeof(int);

    cout << "Original sorted array: ";
    printArray(sortedArr, m);

    bubbleSort(sortedArr, m);

    cout << "Sorted array: ";
    printArray(sortedArr, m);


    /*
    <---------- Time Complexity: ---------->

    Best Case: O(n) → when the array is already sorted.
    Average Case: O(n^2)
    Worst Case: O(n^2)
    */

    return 0;
}