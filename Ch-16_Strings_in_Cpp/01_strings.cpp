#include<iostream>
#include<cstring> // for strlen() or for string func().
using namespace std;

int main() {
    /* <---------- METHOD 1: Using double quotes ----------> */
    char str1[] = {'a', 'b', 'c'};
    cout << str1 << "\n\n"; // may print garbage after 'c' as no null character is present.

    char str2[] = {'a', 'b', 'c', '\0'};

    cout << "String: " << str2 << endl; // prints until '\0' is encountered.
    cout << "Length: " << strlen(str2) << endl; // counts lenght, but ignores '\0'.

    cout << endl;

    /* <---------- METHOD 2: Using string literal ----------> */
    char str3[] = "Hello"; // string literal, (automatically adds '\0' at the end).
    cout << "String: " << str3 << endl;

    cout << str3[1] << endl; // accessing individual character.

    str3[0] = 'h'; // modifying individual character.
    cout << "Modified String: " << str3 << endl;

    return 0;
}