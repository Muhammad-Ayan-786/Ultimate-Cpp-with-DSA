#include<iostream>
using namespace std;

// Binary Search Algorithm with Iterative Approach.
int Binary_Search (int arr[], int n, int tar)
{
    int st = 0, end = (n - 1);

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) {
            st = mid + 1;
        }
        else if (tar < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}

// Binary Search Algorithm with Recursive Approach.
int Binary_Search_Recursive (int arr[], int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid])
        {
            return Binary_Search_Recursive(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return Binary_Search_Recursive(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;   
        }
    }

    return -1;
}

// Function to check if the target is found or not.
void Found_Check (int BS) {
    if (BS == -1) {
        cout << "Match Not Found !" << endl;
    }
    else {
        cout << "Match Found on index: " << BS << endl;
    }
}

int main() {
    // Iterative Approach
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(int);
    int target = 8;

    int BS = Binary_Search(arr, n, target); //Binary Search
    Found_Check(BS);

    // Recursive Approach
    int arr2 [] = {4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26};
    int n2 = sizeof(arr2) / sizeof(int);
    int target2 = 14;

    int BSR = Binary_Search_Recursive(arr2, target2, 0, n2 - 1); //Binary Search Recursive
    Found_Check(BSR);

    return 0;
}