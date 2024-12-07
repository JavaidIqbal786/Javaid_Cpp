#include<iostream>
#include<string>
using namespace std;

int main(){
	string name = "Javaid";
	cout<<"My name is "<<name<<endl;
	cout<<"Length of name string is "<<name.length()<<endl;
	cout<<"Substring of name string is "<<name.substr(0,3)<<endl;
	cout<<"Substring of name string is "<<name.substr(4,5)<<endl;
	return 0;
}
