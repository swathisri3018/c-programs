#include <iostream>
using namespace std;
class Employee {
private:
    string name;
    int empID;
    string department;
    float salary;
public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayDetails() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: Rs." << salary << endl;
        cout << "-----------------------------" << endl;
    }
};
int main() {
    int num;
    cout << "Enter number of employees: ";
    cin >> num;
    Employee employees[num];
       for (int i = 0; i < num; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        employees[i].getDetails();
    }
    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < num; i++) {
        employees[i].displayDetails();
    }
    return 0;
}
