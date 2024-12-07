#include<iostream>
#include<string>
using namespace std;

class Employee {
	private:
	static int count;
	const string empId;
	
	public:
		// constructor
		Employee(string id) : empId(id) {
		count++;	
    }
		// Destructor
		~Employee(){
        count--;
    }
    
    static int getCount()	// Static Function
		{
			return count;
		}
		
	string getEmpId () const{
		return empId;
	}
};

int Employee::count = 0;

int main (){
	Employee E1("E001"), E2("E002"), E3("E003");
	const Employee E4("E004");
	cout<<"Employee 1 id: "<<E1.getEmpId()<<endl;
	cout<<"Employee 2 id: "<<E2.getEmpId()<<endl;
	cout<<"Employee 3 id: "<<E3.getEmpId()<<endl;
	cout<<"Employee 4 id: "<<E4.getEmpId()<<endl;
	cout<<"total number of employees: "<<Employee::getCount();
	return 0;
}
