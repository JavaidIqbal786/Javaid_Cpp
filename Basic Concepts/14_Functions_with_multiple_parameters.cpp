/*While playing a board game, you and your friend roll the dice and the person who rolled the higher number moves forward.
Write a function that takes two numbers as arguments and returns the higher number of the two. Print the result.
If numbers are equal function must return that number.

Sample Input
1
6

Sample Output
6
*/


#include <iostream>
using namespace std;

int max(int num1, int num2) {
    if (num1 > num2) return num1;
    else return num2;
}

int main() {
    int Number;
    int first;
    cout<<"Enter 1st Number: ";
    cin >> first;
    cout<<"Enter 2nd Number: ";
    int second;
    cin >> second;
    cout<<"Higher Number is: ";
    Number =  max(first, second);
    cout<<Number;
    return 0;
}
