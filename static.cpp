#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

   
    static int count;

public:
   
    void setData(int r, string n) {
        rollNo = r;
        name = n;
        count++; 
    }

   
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }

   
    static void showCount() {
        cout << "Total number of students: " << count << endl;
    }
};


int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.setData(101, "Alice");
    s2.setData(102, "Bob");
    s3.setData(103, "Charlie");

    s1.display();
    s2.display();
    s3.display();

    
    Student::showCount();

    return 0;
}
