#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl; // Outputs the address of the 1st elem of arr
    cout << *arr << endl; // Outputs the 1st elem of arr

    /* This is possible */
    int x = 15, y = 20;
    int* ptr = &x;
    ptr = &y;
    cout << *ptr << endl; // Outputs the value of y

    /* This is NOT possible */
    int a = 20;
    // arr = &a;  /* This is NOT possible because arr is a constant pointer pointing to the first element of the array */

    return 0;
}