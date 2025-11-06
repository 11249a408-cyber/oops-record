#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

   
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

   
    Complex operator + (const Complex& obj) const {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

