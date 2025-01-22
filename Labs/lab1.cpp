#include<iostream>
#include<conio.h>
using namespace std;
class Room {
	private:
		float height, width;
	public:
		Room() {
			height = 0.0;
			width = 0.0;
			cout << "Default Constructor is called";
			cout << "\nHeight: "<< height;
			cout << "\nWidth: "<< width;
		}
		Room(float h) {
			height = h;
			width = 0.0;
			cout << "\n\nOne Argument Constructor is called";
			cout << "\nHeight: "<< height;
			cout << "\nWidth: "<< width;
		}
		Room(float h, float w){
			height = h;
			width = w;
			cout << "\n\nTwo Argument Constructor is called";
			cout << "\nHeight: "<< height;
			cout << "\nWidth: "<< width;
		}
};
main(){
	Room r1, r2(20), r3(20,10);
}
