// A recursive function in C++ is a function that calls itself.
// A real recursive function should have a base case

#include <iostream>
using namespace std;

int factorial(int n) { // Function
    if(n==1) return 1; //Base case
    else return n * factorial(n-1); // Calling itself
    
}

int main() {
    //getting input
    int n;
    cin >> n;
    
    //call the recursive function and print returned value
    cout<<factorial(n);
    
    return 0;
}

//Keep in mind that a base case is necessary for real recursion. Without it, the recursion will keep running forever.
