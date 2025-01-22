#include<iostream>
using namespace std;

class Circle {
	private:
		double radius;
	public:
		//setter
		void setRadius(double r){
			radius = r;
		}
		//getter
		double getRadius(){
			return radius;
		}
		// overloading + operator
		Circle operator +(Circle obj){
			obj.radius += radius;
			return obj;
		}
};

main(){
	Circle c1, c2, c3;
	c1.setRadius(5.50);
	c2.setRadius(2.25);
	c3=c1+c2;
	cout<<"C3 object radius: "<<c3.getRadius();
	
}
