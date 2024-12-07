#include<iostream>
#include<stdlib.h>
using namespace std;

//Multiple Inheritance in case of Amphibious vehicle
class Vehicle {
	public:
		void changeGear(){
			cout<<"I am Vehicle ChangeGear() Function!"<<endl;
		}
};

class WaterVehicle: public Vehicle {
	public:
		void Float(){
			cout<<"I am Float() Function of Water Vehicle!"<<endl;
		}
};

class LandVehicle: public Vehicle {
	public:
		void Move(){
			cout<<"I am Move() Function of Land Vehicle!"<<endl;
		}
};

class AmphibiousVehicle: public WaterVehicle, public LandVehicle {
	
};

main (){
	AmphibiousVehicle amphVehicle;
	amphVehicle.Float();
	amphVehicle.Move();
}
