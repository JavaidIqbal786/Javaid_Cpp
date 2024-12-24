/*You are building an Hours to Minutes converter.
Complete the given function so that it will take from user the count of hours as an argument,
convert them into minutes, and output.*/

#include <iostream>
using namespace std;

int toMinutes(int hours) {
    cout<<hours*60;
    return 0;
}

int main() {
    int hours;
    cin>>hours;
    toMinutes(hours);
    return 0;
}

