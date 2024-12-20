//By:Javaid Iqbal
//Program to find whether the number is prime or not.
#include <iostream>
using namespace std;

int main()
 {
    int i,n,count=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=2;i<=n;i++)
        if(n%i==0)
            count=count+1;
    if(count==1)
        cout<<"\nNumber is prime.";
    else
        cout<<"\nNumber is not prime.";
    return 0;
}
