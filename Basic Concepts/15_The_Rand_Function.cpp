/*The rand() function
You must set a PIN for your suitcase that contains 4 digits in the range of 0 to N.
Write a program to take the N number as input,
generate 4 random numbers from the range and print them sequentially, without spaces.

Sample Input
9

Sample Output
2818
*/

//Program/Code:

#include <iostream>
#include <cstdlib> // Standared Library for rand() Function
using namespace std;


int main() {
    srand(0);		// srand() Function is used to generate truely random number
    int range;
    cin >> range;
    for(int i=1;i<5;i++){
        cout<<1+(rand()%range); // generate random 4 digits within given range 
    }
    
    return 0;
}

