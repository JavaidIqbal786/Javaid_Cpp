//Program to print prime numbers in given range
#include <iostream>
using namespace std;
int isprime(int n){
    for(int i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
    }
int main()
 {
    int n1, n2;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"\nEnter second number:";
    cin>>n2;
    cout<<"\nprime numbers between "<<n1<<" and "<<n2<<" are:";
    for(int i=n1;i<=n2;i++)
        if(isprime (i))
            cout<<"\n "<<i;
    
    return 0;
}
