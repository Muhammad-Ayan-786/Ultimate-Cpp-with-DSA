#include<iostream>
using namespace std;

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
    // Recursive Approach
    int arr [] = {4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26};
    int n = sizeof(arr) / sizeof(int);
    int target = 14;

    int BSR = Binary_Search_Recursive(arr, target, 0, n - 1); //Binary Search Recursive
    Found_Check(BSR);

    return 0;
}