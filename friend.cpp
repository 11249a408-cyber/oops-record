#include <iostream>
using namespace std;

class Sample {
private:
    int a, b;

public:
   
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    
    friend int add(Sample s);
};


int add(Sample s) {
   
    return s.a + s.b;
}

int main() {
    Sample obj;
    obj.setData(10, 20);

    cout << "Sum of private data members = " << add(obj) << endl;

    return 0;
}
