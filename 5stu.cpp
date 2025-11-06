#include <iostream>
#include <string>
using namespace std;

// Class to store student information
class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter student name: ";
        cin.ignore(); // To ignore any extra newline character from previous input
        getline(cin, name);  // To input full name (including spaces)
        
        cout << "Enter roll number: ";
        cin >> rollNo;
        
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Array of objects to store information for 'n' students
    Student students[n]; 

    // Input details for each student
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        students[i].inputDetails();
    }

    // Display details of all students
    cout << "\nDisplaying student information:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayDetails();
        cout << "--------------------------" << endl;
    }

    return 0;
}
