/*Pass-by-reference copies an argument's address into the formal parameter.
Inside the function, the address is used to access the actual argument used in the call.
This means that changes made to the parameter affect the argument.
To pass the value by reference, argument pointers are passed to the functions just like any other value.*/

#include <iostream>
using namespace std;

void myFunc1(int x) {
    x = 100;
}

void myFunc2(int *x) {
    *x = 100;
}
int main() {
	int var1 = 20;
    int var2 = 20;
    myFunc1(var1);
    myFunc2(&var2);
    cout << var1<<endl;	//Prints 20 Because MyFunc1 is passing a copy of actual value of var1
    cout << var2<<endl;	//Prints 100 Because MyFunc2 is passing by reference (address) of var2 so it change its value from 20 to 100
}
