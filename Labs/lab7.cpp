#include<iostream>
using namespace std;

class Base {
	
	private:
		int secret;		// It cannot be accessed in any child class
	protected:
		int protect;
	public:
		int access;
		Base (){
			secret = 0;
			protect = 0;
			access = 0;
		}
};

class Derived_Private: private Base {
	public:
		void show () {
//			cout<<"Secret: "<<secret<<endl;
			cout<<"Protect: "<<protect<<endl;
			cout<<"Access: "<<access<<endl;
		}
};

class Derived_Protected: protected Base {
	public:
		void show () {
//			cout<<"Secret: "<<secret<<endl;
			cout<<"Protect: "<<protect<<endl;
			cout<<"Access: "<<access<<endl;	
		}
};

class Derived_Public: public Base {
	public:
		void show () {
//			cout<<"Secret: "<<secret<<endl;
			cout<<"Protect: "<<protect<<endl;
			cout<<"Access: "<<access<<endl;	
		}
};


main(){
	
}
