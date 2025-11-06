#include <iostream>
using namespace std;


inline int square(int x) {
    return x * x;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Square of " << a << " is: " << square(a) << endl;
    cout << "Square of " << b << " is: " << square(b) << endl;

    cout << "Sum of their squares is: " << square(a) + square(b) << endl;

    return 0;
}
