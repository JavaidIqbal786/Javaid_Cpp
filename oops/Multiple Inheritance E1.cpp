// Program to demonstrate simple Multiple inheritance
#include<iostream>
#include<stdio.h>
using namespace std;

class Women {
	public:
		void walk(){
			cout<<"Mermaid is walking"<<endl;
		}
};

class Fish {
	public:
		void swim(){
			cout<<"Mermaid is swiming"<<endl;
		}
};

class Mermaid : public Women, public Fish {
	
};
main (){
	Mermaid m;
	m.swim();
	m.walk();
	return 0;
}
