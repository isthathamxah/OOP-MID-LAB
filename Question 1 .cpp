#include <iostream>
using namespace std;

struct Employee {
    int employeeNumber;
    float compensation;
};

int main() {
    Employee employees[3];  

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Employee " << i + 1 << ":\n";
        cout << "Employee Number: ";
        cin >> employees[i].employeeNumber;
        cout << "Compensation: $";
        cin >> employees[i].compensation;
        cout << "\n";
    }

    cout << "\nEmployee Information:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << " - Number: " << employees[i].employeeNumber
            << ", Compensation: $" << employees[i].compensation << endl;
    }

    return 0;
}
