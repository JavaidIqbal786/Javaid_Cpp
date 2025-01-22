#include<iostream>
using namespace std;

class Planet {
	public:
		Planet(){
			cout<<"Plannet Constructor is called ....."<<endl;
		}
};

class InnerPlanet: public Planet{
	public:
	InnerPlanet(){
		cout<<"Inner Plannet Constructor is called ....."<<endl;
	}
};

class OuterPlanet: public Planet{
	public:
	OuterPlanet(){
		cout<<"Outer Plannet Constructor is called ....."<<endl;
	}
};

main(){
	
	InnerPlanet Ip;
	cout<<"\n\n*****************************************\n\n";
	OuterPlanet Op;
}
