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

// Function to perform Insertion Sort
void insertionSort (int arr[], int n) {
    for (int i = 1; i < n; i++)
    {
        int currentElem = arr[i];
        int prev = (i - 1);

        while (prev >= 0 && arr[prev] > currentElem)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        
        arr[prev + 1] = currentElem;
        cout << i << endl;
    }
}

int main() {
    int arr[] = {3, 1, 5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);


    /*
    <---------- Time Complexity: ---------->
    Best Case: O(n^2) - Insertion Sort always scans the entire unsorted portion to find the minimum element.
    Average Case: O(n^2)
    Worst Case: O(n^2)
    */

    return 0;
}