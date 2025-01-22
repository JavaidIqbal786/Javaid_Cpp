#include<iostream>
using namespace std;

class PlainBox {
	public:
		virtual void display() {
			cout<<"PlainBox class is called!"<<endl;
		}
};

class LunchBox: public PlainBox {
	public:
		void display() {
			cout<<"LunchBox class is called!"<<endl;
		}
};

class GiftBox: public PlainBox {
	public:
		void display() {
			cout<<"GiftBox class is called!"<<endl;
		}
};
main(){
	PlainBox *b1 = new LunchBox;
	PlainBox *b2 = new GiftBox;
	b1 -> display();
	b2 -> display();
}
