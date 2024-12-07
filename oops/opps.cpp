#include<iostream>
#include<string>
using namespace std;


class Teacher {	// class

	private:
	double salary;	// Data-Hiding
		
	public:		// Access modifier 
	//properties(attributes)
	string name;
	string dept;
	string subject;
	
	// methods (member functons)
	void changeDept (string newDept) {
		dept = newDept;
	}
	
	// non-parameterized Constuctor
	Teacher (){
		cout<<"Hi, I am a constructor!"<<endl;
		dept = "Computer Science";
	}
	
	// parameterized Consturctor
	Teacher(string n, string d, string s, double sal){
		name = n;
		dept = d;
		subject = s;
		salary = sal;
	}
	
	void getInfo () {
		cout<<"Name: "<<name<<endl;
		cout<<"Department: "<<dept<<endl;
		cout<<"Subject: "<<subject<<endl;
		cout<<"Salary: "<<salary<<endl;
		
	}
	// setter
	void setSalary (double s){		// setter fuction is used to set private values
		salary = s;
	}
	
	// getter
	double getSalary(){		// getter function is used to get private values indirectly
		return salary;
	}
};

class Student {
	string name;
	double cgpa;
	
	// constructor
	Student(string name, double cgpa){
		this->name = name;
		this->cgpa = cgpa;
	}
	
	void getInfo () {
		cout<<"stdName: "<<name<<endl;
		cout<<"CGPA: "<<cgpa<<endl;
	}
};
main (){
//	Teacher t1 ("Javaid", "Computer Science", "C++", 25000);
//	Teacher t2(t1);
//	t2.getInfo();
//	t1.name = "Javaid";				// . operator is used to access properties of the object
//	t1.subject = "C++";
//	t1.setSalary(50000);
//	cout<<t1.name<<endl;
//	cout<<t1.dept<<endl;
//	cout<<t1.getSalary()<<endl;


Student s1("Ali", 3.67);
s1.getInfo();
	return 0;
}
