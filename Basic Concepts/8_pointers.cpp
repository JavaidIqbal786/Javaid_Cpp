#include<iostream>
using namespace std;

int main (){
	int a = 25;
	int *ptra;		//pointer (stores address)
	// * is called dereferencing operator
	ptra = &a;		// & refers to address
	cout<<"Value of a is "<<a<<endl;
	cout<<"Value of a is "<<*ptra<<endl;		// also gives address of a
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<ptra;	// also gives address value of a 
}
