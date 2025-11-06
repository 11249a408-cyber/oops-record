#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int a = 25, b = 1234, c = 45;
    double pi = 3.1415926535;

    cout << "=== Demonstration of Manipulators ===" << endl << endl;

    
    cout << "Using setw(6) and setfill('*'):" << endl;
    cout << setfill('*');
    cout << setw(6) << a << endl;
    cout << setw(6) << b << endl;
    cout << setw(6) << c << endl << endl;

   
    cout << "Using setprecision and fixed:" << endl;
    cout << fixed << setprecision(3);
    cout << "Value of pi (3 decimal places): " << pi << endl;

    cout << setprecision(6);
    cout << "Value of pi (6 decimal places): " << pi << endl << endl;

    cout << "Using scientific notation:" << endl;
    cout << scientific << pi << endl << endl;

    
    cout << "Left and Right alignment using setw():" << endl;
    cout << left  << setw(10) << "Left" << "Aligned Text" << endl;
    cout << right << setw(10) << "Right" << "Aligned Text" << endl;

    return 0;
}

