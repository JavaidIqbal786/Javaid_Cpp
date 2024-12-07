#include <iostream>
#include <string>
using namespace std;

class Person {  // Parent Class
public:
    string name;
    int age;

    // Constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {  // Child Class
public:
    string rollNo;

    // Constructor for Student, calls the Person constructor
    Student(string name, int age, string rollNo) : Person(name, age) {
        this->rollNo = rollNo;
    }

    // Method to print Student info
    void getInfo() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create a Student object with required parameters
    Student s1("Javaid", 21, "1001");
    s1.getInfo();
    return 0;
}

