#include<iostream>
using namespace std;


class Pyramid {
	private:
		static int pcount;	// static data member (syntax => static dataType variableName;)
	public:
		//Constructor
		Pyramid(){
			cout<<"Pyramid Constructor Called..."<<endl;
			pcount++;
		}
		//Destructure
		~Pyramid(){
			cout<<"Pyramid Destructure Called..."<<endl;
			pcount--;
		}
		//Function to return pcount
		int getPcount(){
			return pcount;
		}
};


//Static data members are intialized outside the class
int Pyramid::pcount = 0;		//:: is called Scope resolution operator


main(){
	Pyramid *pyr1 = new Pyramid;
	Pyramid *pyr2 = new Pyramid;
	Pyramid *pyr3 = new Pyramid;
	cout<<"Total Objects : "<<pyr1 -> getPcount()<<endl;
	delete pyr1;
	delete pyr2;
	cout<<"Total Objects : "<<pyr3 -> getPcount();
}
