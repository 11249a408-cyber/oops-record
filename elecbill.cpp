#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    int consumerNo;
    string consumerName;
    int prevReading;
    int currReading;
    string connectionType; // "domestic" or "commercial"
    int units;
    float billAmount;

public:
    // Function to get input
    void getDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Previous Month Reading: ";
        cin >> prevReading;

        cout << "Enter Current Month Reading: ";
        cin >> currReading;

        cout << "Enter Connection Type (domestic/commercial): ";
        cin >> connectionType;

        units = currReading - prevReading;
    }

    // Function to calculate bill based on tariff
    void calculateBill() {
        billAmount = 0.0;

        int remainingUnits = units;

        if (connectionType == "domestic") {
            if (remainingUnits > 500) {
                billAmount += (remainingUnits - 500) * 6.0;
                remainingUnits = 500;
            }
            if (remainingUnits > 200) {
                billAmount += (remainingUnits - 200) * 4.0;
                remainingUnits = 200;
            }
            if (remainingUnits > 100) {
                billAmount += (remainingUnits - 100) * 2.5;
                remainingUnits = 100;
            }
            billAmount += remainingUnits * 1.0;
        }
        else if (connectionType == "commercial") {
            if (remainingUnits > 500) {
                billAmount += (remainingUnits - 500) * 7.0;
                remainingUnits = 500;
            }
            if (remainingUnits > 200) {
                billAmount += (remainingUnits - 200) * 6.0;
                remainingUnits = 200;
            }
            if (remainingUnits > 100) {
                billAmount += (remainingUnits - 100) * 4.5;
                remainingUnits = 100;
            }
            billAmount += remainingUnits * 2.0;
        }
        else {
            cout << "Invalid connection type entered. Please enter 'domestic' or 'commercial'.\n";
        }
    }

    // Function to display bill
    void displayBill() {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Consumer Number: " << consumerNo << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Connection Type: " << connectionType << endl;
        cout << "Previous Reading: " << prevReading << endl;
        cout << "Current Reading: " << currReading << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill Amount: ₹" << billAmount << endl;
    }
};

// Main Function
int main() {
    ElectricityBill eb;

    eb.getDetails();
    eb.calculateBill();
    eb.displayBill();

    return 0;
}
