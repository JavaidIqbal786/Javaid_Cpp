#include<iostream>
using namespace std;

int main(){
	int i,j,k;
	i=1;
	cout<<"While Loop"<<endl;
	while (i<=10){
		cout<<i<<endl;
		i++;
	}
	
	
	cout<<"Do-While Loop"<<endl;
	j=20;
	do{
		j++;
		cout<<j<<endl;
	}while(j>=50);		// Do-While loop must executes 1 time even if the condition is false
	
	
	cout<<"For Loop"<<endl;
	for(k=10; k>=1; k--){
		cout<<k<<endl;
	}
	return 0;
}
