#include<bits/stdc++.h>
using namespace std;

class Staff {
private:
    int id;
    string name;

protected:
    int age;

public:
    Staff(int id, string name, int age) : id(id), name(name), age(age) {}


    virtual void displayDetails() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};

class Doctor : public Staff {
private:
    string specialization;

public:

    Doctor(int id, string name, int age, string specialization)
        : Staff(id, name, age), specialization(specialization) {}

    void displayDetails() override {
        Staff::displayDetails();
        cout << "Specialization: " << specialization << endl;
    }

    int calculateSalary(int hours, int hourlyRate) {
        return hours * hourlyRate;
    }
};
class Nurse : public Staff {
private:
    string shift;

public:
    Nurse(int id, string name, int age, string shift)
        : Staff(id, name, age), shift(shift) {}

    void displayDetails() override {
        Staff::displayDetails();
        cout << "Shift: " << shift << endl;
    }
    int calculateSalary(int days, int dailyRate) {
        return days * dailyRate;
    }
};

int main() {
    Doctor doctor(1, "Dr. ABC", 45, "Cardiology");
    cout << "Doctor Details:\n";
    doctor.displayDetails();
    cout << "Doctor's Salary: " << doctor.calculateSalary(40, 500);

    Nurse nurse(2, "Nurse XYZ", 30, "Night");
    cout << "\n\nNurse Details:\n";
    nurse.displayDetails();
    cout << "Nurse's Salary: " << nurse.calculateSalary(20, 200);

    return 0;
}
