#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }

   
    Rectangle(int side) {
        length = width = side;
        cout << "Constructor with one parameter called." << endl;
    }

   
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Constructor with two parameters called." << endl;
    }

    
    int area() {
        return length * width;
    }
};

int main() {
    cout << "Creating rect1 using default constructor..." << endl;
    Rectangle rect1; 
    cout << "\nCreating rect2 using one-parameter constructor..." << endl;
    Rectangle rect2(5); 
    cout << "\nCreating rect3 using two-parameter constructor..." << endl;
    Rectangle rect3(4, 6); 
    cout << "\nAreas of rectangles:" << endl;
    cout << "rect1 area = " << rect1.area() << endl;
    cout << "rect2 area = " << rect2.area() << endl;
    cout << "rect3 area = " << rect3.area() << endl;

    return 0;
}
