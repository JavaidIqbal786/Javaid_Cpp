// Lab 12: Learn to implement min heap and max heap using buildHeap( ) method >>> By: Javaid Iqbal

/*
Consider the Data: 18, 31, 82, 85, 37, 20, 23, 79, 47, 51, 96, 97, 42, 94, 57, 29
and write the C++ code to construct min heap using buildHeap( ) method.
*/


#include<iostream>
using namespace std;

class Heap {
	private:
		int *heapArray;
	public:
		Heap (int size){
			heapArray = new int[size + 1];
		}
		
		void buildHeap(int *index, int size){
			for(int i = 1; i <= size; i++){
				heapArray[i] = index[i-1];
			}
			int check;
			do{
				check = 0;
				for(int i = size/2; i > 0; i--){
					check += perculateDown(i, size);
				}
			}while(check > 0);
		}
		//perculateDown function for min heap
		int perculateDown(int index, int size){
			int flag = 0;
			int temp;
			// if parent value is greater then left child value and left child value <= size
			if(heapArray[index] > heapArray[index * 2] && (index*2) <= size)
			{
				temp = heapArray[index]; // givs parent value to temp
				heapArray[index] = heapArray[index * 2]; // gives left child value to parent
				heapArray[index * 2] = temp; // gives parent value in temp to left child
				flag++;
			}
			// if parent value is greater then Right child value and Right child value <= size
			if(heapArray[index] > heapArray[index * 2+1] && (index*2+1) <= size){
				temp = heapArray[index]; // givs parent value to temp
				heapArray[index] = heapArray[index * 2+1]; // gives Right child value to parent
				heapArray[index * 2+1] = temp; // gives parent value in temp to Right child
				flag++;
			}
			return flag;
		}
		
		/* For max heap:
		we use perculateUp Function and
		Just Greater then > sign in if conditions chages to Less then < sign
		if(heapArray[index] < heapArray[index * 2] && (index*2) <= size)
		if(heapArray[index] < heapArray[index * 2+1] && (index*2+1) <= size)
		*/
		
		void traverse (int size){
			for(int i = 1; i <= size; i++){
				cout<<heapArray[i]<<"  ";
			}
		}
};

main (){
	int size = 16;
	int array[size] = {18, 31, 82, 85, 37, 20, 23, 79, 47, 51, 96, 97, 42, 94, 57, 29};
	Heap object(size);
	object.buildHeap(&array[0], size);
	cout<<"<<<<<<<<<<<<<<<<< Min Heap Using Build Heap Method >>>>>>>>>>>>>>>>>>>"<<endl;
	object.traverse(size);
}
