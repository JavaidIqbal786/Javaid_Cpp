#include<iostream>
using namespace std;

int main (){
	int arr[5] = {5, 10, 20, 50, 100};
//	cout<<arr[4];
	int marks[5];
	for(int i = 1; i<=5; i++){
		cout<<"Enter Student"<<i<<" marks"<<endl;
		cin>>marks[i];
	}
	cout<<"Marks of Students:"<<endl;
	for(int i = 1; i<=5; i++){
		cout<<"Student"<<i<<" "<<marks[i]<<endl;
	}
	
	
	// 2D Array
	
	int arr1[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<"The value at index "<<i<<j<<" is "<<arr1[i][j]<<endl;
		}
	}
	
	return 0;
}
