#include<iostream>
#include<string> // for string class (totally optional)
using namespace std;

int main() {

    // Declaration and Initialization
    string str1 = "Mohd Ayan"; // dynamic => runtime resize (Contiguous)
    cout << str1 << endl;

    str1 = "Mohd Ayan Asim";
    cout << str1 << endl;
    cout << "Length of " << str1 << " : " << str1.length() << endl;

    cout << endl;

    // Concatenation
    string str2 = "Hello", str3 = "World";
    string str4 = str2 + " " + str3; // concatenation
    cout << str4 << endl;

    cout << endl;

    // Comparison
    string str5 = "Hey", str6 = "Hey";
    cout << (str5 == str6) << endl;
    cout << (str5 < str6) << endl;

    // Input in string
    string intput_Str;
    
    cout << "Enter a string: ";
    getline(cin, intput_Str); // to take input with spaces

    cout << "You entered: " << intput_Str << endl;
    
    return 0;
}