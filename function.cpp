
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
   
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

   
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    
    Complex addByValue(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    
    void addByReference(Complex &c) {
        real += c.real;
        imag += c.imag;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 4.2);

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();

   
    Complex c3 = c1.addByValue(c2);
    cout << "\nResult after Pass by Value (new object): ";
    c3.display();

    c1.addByReference(c2);
    cout << "Result after Pass by Reference (c1 modified): ";
    c1.display();

    return 0;
}
