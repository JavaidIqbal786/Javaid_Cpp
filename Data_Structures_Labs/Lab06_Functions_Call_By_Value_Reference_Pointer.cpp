// Lab 6 : Learn to implement function call by value, by reference and by pointer >>> By: Javaid Iqbal

/*Write C++ program to swap the values of two variables of different data types using different function calls.
Your program should swap the values using function call by value, reference and pointers.
The swapping functions should receive the swapping variables as arguments.
The functions should be declared as template functions so that they can entertain any data type.*/


#include<iostream>
using namespace std;

// Template function allows us to swap variables of any type (int, float, etc.)
template<class T>
void swapByValue(T a, T b) {  // Call by Value - Original values will not be changed
    T temp = a;  // Store value of a in temp
    a = b;       // Assign value of b to a
    b = temp;    // Assign temp (original a) to b
    //Note: These changes affect only local copies, not original variables
}

// Template for swapping by reference
template<class T>
void swapByReference(T &a, T &b) {  // Call by Reference - Swaps actual values
    T temp = a;
    a = b;
    b = temp;
}

// Template for swapping by pointer
template<class T>
void swapByPointer(T *a, T *b) {  // Call by Pointer - Swaps values using memory addresses
    T temp = *a;     // Dereference to get actual value
    *a = *b;         // Assign value of b to a
    *b = temp;       // Assign value of temp (original a) to b
}

int main() {
    int a = 5, b = 10;

    // Call by Value
    cout << "<<<<<<<<<< Function Call By Value >>>>>>>>>>" << endl;
    cout << "Before Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
	swapByValue(a, b); // This will NOT change the original variables because only copies of a and b are passed to the function
    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Call by Reference
    cout << "\n<<<<<<<<<< Function Call By Reference >>>>>>>>>>" << endl;
    cout << "Before Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapByReference(a, b); // This WILL change the original variables because references to a and b are passed, not copies
    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Call by Pointer
    cout << "\n<<<<<<<<<< Function Call By Pointer >>>>>>>>>>" << endl;
    cout << "Before Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapByPointer(&a, &b); // This WILL change the original variables because their memory addresses are passed to the function
    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

/*
Difference between memory address and reference

A memory address is the exact location in the computer’s RAM where a variable is stored.

A reference is an alias (another name) for a variable.
It does not store the memory address like a pointer but refers directly to the original variable.
*/

