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

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < (n-1); i++)
    {
        int currentIdx = i;

        for (int j = (i+1); j < n; j++)
        {
            if (arr[j] < arr[currentIdx])
            {
                currentIdx = j;
            }
        }
        
        swap(arr[currentIdx], arr[i]);
    }
}

int main() {
    int arr[] = {2, 4, 1, 5, 3};
    int n = sizeof(arr)/sizeof(int);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);


    /*
    <---------- Time Complexity: ---------->
    Best Case: O(n^2) - Selection Sort always scans the entire unsorted portion to find the minimum element.
    Average Case: O(n^2)
    Worst Case: O(n^2)
    */

    return 0;
}