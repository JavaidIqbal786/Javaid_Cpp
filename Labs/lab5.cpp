#include<iostream>
using namespace std;

class Complex {
	
	private:
		
		int real;
		int imaginary;
		
	public:
		
		//Constructor
		Complex (){
			real = 0;
			imaginary = 0;
		}
		
		// Overloading stream extration >> operator
		friend istream & operator >> (istream &in, Complex &obj){
			cout<<"Please enter real part of complex number: ";
			in >> obj.real;
			cout<<"Please enter imaginary part of complex number: ";
			in >> obj.imaginary;
			return in;
		}
		
		// Overloading stream insertion << operator
		friend ostream & operator << (ostream &out, Complex &obj){
			out << obj.real << "+" << obj.imaginary << "i";
			return out;
		}
};

main(){
	
	Complex com1;
	cin >> com1;
	cout<<"The complex object is: "<<com1;
}
