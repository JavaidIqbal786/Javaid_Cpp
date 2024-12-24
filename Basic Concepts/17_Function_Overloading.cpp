#include <iostream>
#include <string>
using namespace std;

//add Functing
void add(int a, int b) {
    cout<<a+b<<endl;
}
//overloading add Function
void add(double a, double b) {
    cout<<a+b<<endl;
}

int main() {
    
    //calling
    add(5,6);
    add(1.2, 6.5);
    
    return 0;
}

//Function overloading allows to create multiple functions with the same name, so long as they have different parameters.
