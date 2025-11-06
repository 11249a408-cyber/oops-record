#include <iostream>
#include <string>
using namespace std;

// Define the Student class
class Student {
private:
    string name;
    int age;
    string rollNumber;
    float marks;

public:
    // Constructor to initialize the student data
    Student(string n, int a, string r, float m) {
        name = n;
        age = a;
        rollNumber = r;
        marks = m;
    }

    // Function to display student information
    void displayInfo() {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create an object of Student class
    Student student1("manoj", 19, "S12345", 85.5);

    // Display the information of the student
    student1.displayInfo();

    return 0;
}
