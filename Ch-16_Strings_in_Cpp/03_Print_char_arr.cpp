#include<iostream>
using namespace std;

int main() {
    char str[10];

    cout << "Enter a string: ";
    cin.getline(str, 10);

    for (char ch : str) { // Range-based for loop to print each character
        cout << ch << " ";
    }

    cout << "\n" << endl;


    // Length of the string
    char string[] = "Hello World";
    cout << string << endl;
    int length = 0;

    for (int i = 0; string[i] != '\0'; i++)
        length++;

    cout << "Length of the string: " << length << endl;    

    return 0;
}