#include<iostream>
using namespace std;

void change_value (int a) { // Pass by Value
    a = 20;
}

void change_value_PBR (int* ptr) { // Pass by Reference using pointers
    *ptr = 20;
}

void change_value_ALIAS (int & p) { // Pass by Reference using alias
    p = 20;
}

int main() {
    int a = 10;
    change_value(a);
    cout << "Inside main Func: " << a << endl;

    int b = 10;
    change_value_PBR(&b);
    cout << "Inside main Func after passing b pointer: " << b << endl;

    int c = 10;
    change_value_ALIAS(c);
    cout << "Inside main Func after passing c alias: " << c << endl;

    return 0;
}