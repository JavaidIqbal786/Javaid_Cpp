/*An array can also be passed to a function as an argument.
The parameter should be defined as an array using square brackets, when declaring the function.*/

/*A local supermarket is running a promotion: each Nth customer will receive one item for free.
Customers names are sequentially given as array of strings (see template).
Write a function that receives the array of customers, its size, and the N number as arguments,
and prints the names of the lucky customers each in a new line.

Sample Input
3

Sample output
Rayan
Bruce
Richard
Mary*/


#include <iostream>
#include <string>
using namespace std;

void winners(string customers[], int size, int n) {
    for(int i= n-1; i<size; i+=n)	// Here n-1 is because of Array Because arrays start at index 0
	{	
        cout<<customers[i]<<endl;	//Print every Nth Customer
    }
}

int main() {

    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;
    //call function
    winners(customers, 13, n);
    
    return 0;
}
