#include <iostream>
#include <string>
using namespace std;

// Book class to store book details
class Book {
private:
    string title;
    string author;
    float price;

public:
    // Member function declarations
    void inputDetails();
    void displayDetails();
};

// Member function to input book details (defined outside the class)
void Book::inputDetails() {
    cout << "Enter book title: ";
    getline(cin, title); // To allow spaces in title

    cout << "Enter author name: ";
    getline(cin, author); // To allow spaces in author name

    cout << "Enter price: ";
    cin >> price;
}

// Member function to display book details (defined outside the class)
void Book::displayDetails() {
    cout << "\nBook Details:" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: $" << price << endl;
}

int main() {
    Book book1; // Create an object of class Book

    // Input book details
    book1.inputDetails();

    // Display book details
    book1.displayDetails();

    return 0;
}
