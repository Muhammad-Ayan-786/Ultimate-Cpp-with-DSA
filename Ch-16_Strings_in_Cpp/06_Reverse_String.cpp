#include<iostream>
#include<cstring> // for strlen function ...
#include<algorithm> // for reverse function ...
using namespace std;

// Function to reverse a char array ...
void reverseFunc (char str[]) {
    int st = 0;
    int end = strlen(str) - 1;

    while (st < end)
    {
        swap(str[st], str[end]);
        st++, end--;
    }
}

int main() {
    /* Reverse a string of char array ... */
    char char_Str[] = "ayan";

    cout << "Origional str: " << char_Str << endl;
    reverseFunc(char_Str);
    cout << "Reverse str: " << char_Str << endl;

    /* Reverse a string using string class ... */
    string str = "Ayan Asim";
    reverse(str.begin(), str.end()); // using algorithm header file ... (Iterators)

    cout << "Origional str: " << str << endl;
    cout << "Reverse str: " << str << endl;

    return 0;
}