#include<iostream>
using namespace std;

#define MKSTR( x ) #x
#define concat(a, b) a##b

// The # Operator causes a replacement-text taken to be converted to a string surrounded by quotes.
// When CONCAT appears in the program, its arguments are concatenated and used to replace the macro.

int main (){
	cout<<MKSTR(Hello C++)<<endl;
	int xy = 100;
	string str1 = "Hello World";
	cout<<concat(x,y)<<endl;
	cout<<concat(str,1)<<endl;
	return 0;
}
