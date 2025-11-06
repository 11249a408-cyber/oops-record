#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:

    Counter(int v = 0) {
        value = v;
    }

    
    void display() {
        cout << "Value = " << value << endl;
    }

    
    void operator++() {
        ++value;
    }

   
    void operator--() {
        --value;
    }

    
    void operator-() {
        value = -value;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial ";
    c1.display();

    ++c1;   
    cout << "After ++ : ";
    c1.display();

    --c1;   
    cout << "After -- : ";
    c1.display();

    -c1;   
    cout << "After unary - : ";
    c1.display();

    return 0;
}

