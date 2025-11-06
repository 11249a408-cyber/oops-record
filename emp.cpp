#include <iostream>
using namespace std;

class Employee {
    private:
        float basicPay;
        float da;
        float hra;
        float grossSalary;
        float tax;
        float netSalary;

    public:
        // Function to get basic pay from the user
        void getBasicPay() {
            cout << "Enter Basic Pay: ";
            cin >> basicPay;
        }

        // Function to calculate DA, HRA, Gross Salary, Tax, and Net Salary
        void calculateSalary() {
            da = basicPay * 0.70;      // DA is 70% of basic pay
            hra = basicPay * 0.10;     // HRA is 10% of basic pay
            grossSalary = basicPay + da + hra;
            tax = grossSalary * 0.20;  // Tax is 20% of gross salary
            netSalary = grossSalary - tax;
        }

        // Function to display payslip
        void displayPayslip() {
            cout << "\nEmployee Payslip:" << endl;
            cout << "--------------------" << endl;
            cout << "Basic Pay: " << basicPay << endl;
            cout << "Dearness Allowance (DA): " << da << endl;
            cout << "House Rent Allowance (HRA): " << hra << endl;
            cout << "Gross Salary: " << grossSalary << endl;
            cout << "Tax Deducted: " << tax << endl;
            cout << "Net Salary: " << netSalary << endl;
        }
};

int main() {
    Employee emp; // Create an object of class Employee
    emp.getBasicPay();  // Get basic pay input from user
    emp.calculateSalary();  // Calculate the salary components
    emp.displayPayslip();  // Display the payslip

    return 0;
}
