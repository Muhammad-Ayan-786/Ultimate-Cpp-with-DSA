#include<iostream>
using namespace std;

// 1. Incrementing and Decrementing a Pointer
void incrementing_n_decrementing_pointer() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Pointer to the first element of the array

    cout << "Address of First Elem: " << ptr << endl;
    ptr++; // Move pointer to the next integer (4 bytes ahead)
    cout << ptr << endl; // +4 bytes
    ptr--; // Move pointer back to the previous integer (-4 bytes)
    cout << ptr << endl; // -4 bytes
}

// 2. Adding and Subtracting an Integer to/from a Pointer
void adding_n_subtracting_integer_to_from_pointer() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Pointer to the first element of the array

    cout << "Address of First Elem: " << ptr << endl;
    ptr = ptr + 2; // Move pointer two integers ahead (8 bytes ahead)
    cout << ptr << endl; // +8 bytes
    ptr = ptr - 1; // Move pointer back by one integer (-4 bytes)
    cout << ptr << endl; // -4 bytes
}

// 3. Traversing an Array using Pointer Arithmetic
void traversing_array_using_pointer() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    cout << *arr << endl; // 1
    cout << *(arr + 1) << endl; // 2
    cout << *(arr + 2) << endl; // 3
    cout << *(arr + 3) << endl; // 4
    cout << *(arr + 4) << endl; // 5

    cout << endl;

    // Using loop to traverse array using pointer
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

// 4. Arithmetic Operations on Pointers
void arithmetic_operations_on_pointers() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1]; // Pointer to second element (20)
    int* ptr2 = &arr[4]; // Pointer to fifth element (50)

    // Arithmetic Operations
    cout << "ptr2 - ptr1 = " << (ptr2 - ptr1) << endl; // Should print 3

    // Comparison Operations
    if (ptr1 < ptr2) {
        cout << "ptr1 is less than ptr2" << endl;
    } else {
        cout << "ptr1 is not less than ptr2" << endl;
    }

    if (ptr1 == &arr[1]) {
        cout << "ptr1 points to the second element" << endl;
    } else {
        cout << "ptr1 does not point to the second element" << endl;
    }
}

int main() {
    incrementing_n_decrementing_pointer();
    cout << "------------------------" << endl;

    adding_n_subtracting_integer_to_from_pointer();
    cout << "------------------------" << endl;

    traversing_array_using_pointer();
    cout << "------------------------" << endl;

    arithmetic_operations_on_pointers();
    cout << "------------------------" << endl;

    return 0;
}