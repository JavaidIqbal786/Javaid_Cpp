//Employee Management System By Javaid Iqbal
#include <iostream>
#include <string>
using namespace std;

// Abstract Parent/base class
class Employee {
protected:
	//Data Members
    int employeeId;
    string employeeName;
    double salary;

public:
	//Member Functions
    // Default constructor
    Employee() : employeeId(0), employeeName(""), salary(0.0) {
	
	}

    // Virtual destructor
    virtual ~Employee() {}

    // Pure virtual function
    virtual void calculateSalary() = 0;

    // Function to display employee details
    virtual void displayDetails() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Concrete Regular Employee class
class RegularEmployee : public Employee {
private:
	//Data Members
    float basicSalary;
    float allowances;
    float incomeTax;

public:
	//Member Functions
    // Parameterized constructor
    RegularEmployee(int id, string name, float basicSalary, float allowances, float incomeTax) {
        this->employeeId = id;
        this->employeeName = name;
        this->basicSalary = basicSalary;
        this->allowances = allowances;
        this->incomeTax = incomeTax;
    }

    // Overriding calculateSalary
    void calculateSalary() override {
        salary = basicSalary + allowances - incomeTax;
    }

    // Overriding displayDetails
    void displayDetails() override {
        cout << "Regular Employee Details:\n";
        Employee::displayDetails();
        cout << "Basic Salary: "<< basicSalary << endl;
        cout << "Allowances: "<< allowances << endl;
        cout << "Income Tax:  "<< incomeTax << endl;
    }
};

// Concrete Hourly Employee class
class HourlyEmployee : public Employee {
private:
	//Hourly Employee Data Members
    int noOfHours;
    float hourlyRate;

public:
	//Hourly Employee Member Functions
    // Parameterized constructor
    HourlyEmployee(int id, string name, int noOfHours, float hourlyRate) {
        this->employeeId = id;
        this->employeeName = name;
        this->noOfHours = noOfHours;
        this->hourlyRate = hourlyRate;
    }

    // Overriding calculateSalary
    void calculateSalary() override {
        salary = noOfHours * hourlyRate;
    }

    // Overriding displayDetails
    void displayDetails() override {
        cout << "Hourly Employee Details:\n";
        Employee::displayDetails();
        cout << "Hourly Rate: "<< hourlyRate << endl;
        cout << "No. of hours:  "<< noOfHours << endl;
    }
};

// Main function
int main() {
    // Dynamic array of Employee
    Employee* emp[2];

    //RegularEmployee object stored in the array
    emp[0] = new RegularEmployee(1001, "Javaid Iqbal", 75000, 25000, 8000);

    //HourlyEmployee object stored in the array
    emp[1] = new HourlyEmployee(1002, "Ali", 15, 2000);

    // Calculate and display the salary for each employee
    for (int i = 0; i < 2; i++) {
        emp[i]->calculateSalary();
        emp[i]->displayDetails();
        cout << endl;
    }

    // Clean up the dynamically allocated memory
    for (int i = 0; i < 2; i++) {
        delete emp[i];
    }

    return 0;
}

