#include<iostream>
using namespace std;

class Employee {
	public:
		string name;
		int salary;
};

int main(){
	Employee jav;
	jav.name = "Javaid";
	jav.salary = 100;
	cout<<"Name of our first employee is "<<jav.name<<" and his salary is $"<<jav.salary<<endl;
}
