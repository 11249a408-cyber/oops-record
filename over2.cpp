#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    int add(int a, int b, int c) {
        return a + b + c;
    }

    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 integers (5, 10): " << calc.add(5, 10) << endl;
    cout << "Sum of 3 integers (2, 4, 6): " << calc.add(2, 4, 6) << endl;
    cout << "Sum of 2 doubles (3.5, 2.7): " << calc.add(3.5, 2.7) << endl;

    return 0;
}
