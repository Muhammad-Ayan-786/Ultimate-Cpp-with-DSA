#include<iostream>
#include<vector>
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

// Function to merge two halves of the array.
void merge(int arr[], int st, int mid, int end) {

    // Temporary array to store merged subarrays
    vector<int> temp (end-st+1);

    int left = st, right = mid + 1;
    int index = 0;

    // Merging both halves into temp
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }
        else
        {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // Left arr is not empty yet
    while (left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }

    // Right arr is not empty yet
    while (right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }

    index = 0;

    // Put temp values in arr
    while (st <= end)
    {
        arr[st] = temp[index];
        st++, index++;
    }
    
}

// Merge Sort function
void mergeSort (int arr[], int st, int end) {
    if (st == end) // Base case
        return;

    int mid = st + (end - st) / 2;
    
    // Left half
    mergeSort(arr, st, mid);

    // Right half
    mergeSort(arr, mid + 1, end);

    // Merging both halves
    merge(arr, st, mid, end);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n-1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}