#include <iostream>
using namespace std;

int main (){
	int age, vote;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	if(age>=100 || age <= 1){
		cout<<"invalid age";
	}
	else if(age>=18){
		cout<<"You can vote";
	} else {
		cout<<"You cannot vote";
	}
	
	cout<<"\nvote: ";
	cin>>vote;
	switch (vote)
	{
		case 1:
			cout<<"Voted!";
			break;
		case 0:
			cout<<"Not Voted";
			break;
		default:
			cout<<"Invalid Input!";
			break;
	}
	return 0;
}
