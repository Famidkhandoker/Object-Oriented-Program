#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    double hourlyWage;
public:
    // Default constructor
    Employee() {
        name = "unknown";
        hourlyWage = 0.0;
    }
    // Parameterized constructor
    Employee(string employeeName, double wage) {
        name = employeeName;
        hourlyWage = wage;
    }
    // Getter for name
    string getName() {
        return name;
    }
    // Getter for hourly wage
    double getHourlyWage() {
        return hourlyWage;
    }
    // Setter for name
    void setName(string employeeName) {
        name = employeeName;
    }
    // Setter for hourly wage
    void setHourlyWage(double wage) {
        hourlyWage = wage;
    }
    // Method to calculate weekly pay
    double calculateWeeklyPay(int hoursWorked) {
        return hoursWorked * hourlyWage;
    }
};
int main() {
    // Create Employee object using default constructor
    Employee emp1;
    // Create Employee object using parameterized constructor
    Employee emp2("John Doe", 25.0);
    // Calculate weekly pay for both employees (assuming 40 hours worked)
    cout << "Employee 1: " << emp1.getName() << endl;
    cout << "Hourly Wage: $" << emp1.getHourlyWage() << endl;
    cout << "Weekly Pay: $" << emp1.calculateWeeklyPay(40) << endl;

    cout << "\nEmployee 2: " << emp2.getName() << endl;
    cout << "Hourly Wage: $" << emp2.getHourlyWage() << endl;
    cout << "Weekly Pay: $" << emp2.calculateWeeklyPay(40) << endl;
    return 0;
}
