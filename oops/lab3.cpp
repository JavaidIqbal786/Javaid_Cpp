#include<iostream>
#include<conio.h>
using namespace std;
class room {
	private:
		float height, width;
	public:
		room() {
			height = 0;
			width = 0;
			cout << "Default Constructor is called";
			cout << "\nHeight: "<< height;
			cout << "\nWidth: "<< width;
		}
		room(float h) {
			height = h;
			width = 0;
			cout << "\n\nOne Argument Constructor is called";
			cout << "\nHeight: "<< height;
			cout << "\nWidth: "<< width;
		}
		room(float h, float w){
			height = h;
			width = w;
			cout << "\n\nTwo Argument Constructor is called";
			cout << "\nHeight: "<< height;
			cout << "\nWidth: "<< width;
		}
};
main(){
	room r1, r2(20), r3(20,10);
}
