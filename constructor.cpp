#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public: 
    Demo(int v) {
        value = v;
        cout << "Constructor called. Value initialized to " << value << endl;
    } 
    void display() {
        cout << "The value is: " << value << endl;
    }

   
    ~Demo() {
        cout << "Destructor called. Object with value " << value << " is being destroyed." << endl;
    }
};

int main() {
    cout << "Creating object obj1...\n";
    Demo obj1(10);  

    cout << "Creating another object obj2...\n";
    Demo obj2(20);  
    cout << "Displaying values:\n";
    obj1.display();
    obj2.display();

    cout << "End of main function.\n";
  
    return 0;
}


   