#include<iostream>
using namespace std;

int main() {
    /* INPUT AND OUTPUT WITH CHAR ARRAYS */
    char str[100];

    cout << "Enter char array: ";
    cin >> str; // Input stops at the first whitespace

    cout << "Output: " << str << endl;


    /* TO READ A FULL LINE INCLUDING SPACES, WE CAN USE cin.getline() */

    /*
        cin.getline() FUNCTION SYNTAX: cin.getline(str, size, delimiter);

        cin.getline(): (name of char array, length of char array, delimiter character (default is newline))

        Delimiter character indicates where to stop reading input ----------> If we want to read input until a specific character (like a comma), we can specify it as the third argument.
    */

    char line[100];

    cout << "Enter a line of text: ";
    cin.getline(line, 100); // Input includes spaces until newline

    cout << "Output: " << line << endl;


    // Using a custom delimiter
    char customDelim[100];

    cout << "Enter text (end with a comma): ";
    cin.getline(customDelim, 100, ','); // Input includes spaces until comma

    cout << "Output: " << customDelim << endl;

    return 0;
}