#include<iostream>
using namespace std;

int main() {
    string str1 = "Apna College.";

    // Iterator loop ...
    for (int i = 0; i < str1.length(); i++)
    {
        cout << str1[i] << " ";
    }
    cout << endl;

    // For each loop ...
    for (char ch : str1)
    {
        cout << ch << " ";
    }
    cout << endl;    

    return 0;
}