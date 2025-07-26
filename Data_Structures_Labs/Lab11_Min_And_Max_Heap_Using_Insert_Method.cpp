//Lab 11:  Learn to implement min heap and max heap using insert( ) method >>> By: Javaid Iqbal

/*
Consider the Data: 18, 31, 82, 85, 37, 20, 23, 79, 47, 51, 96, 97, 42, 94, 57, 29
and write the C++ code to construct min heap and max heap using insert method.
*/

/*
Heap: A tree-based data structure where each parent node follows a specific ordering rule with its children.
Min Heap: A heap where the parent node is always less than or equal to its children.
Max Heap: A heap where the parent node is always greater than or equal to its children.
*/

#include<iostream>  
using namespace std;  


class Heap { // Implements a Heap using array-based binary heap.
private:
    int* heapArray;       // Dynamic array to store heap elements
    int currentSize;      // Current number of elements in the heap

public:
    // Constructor to initialize heap with a given size
    Heap(int size) {
        heapArray = new int[size + 1]; // Indexing starts from 1 (heapArray[0] unused)
        currentSize = 0;
    }

    // Insert Function to create Min Heap
    void insert(int value) {
        int index = ++currentSize;  // Move to next available index
        while (index > 1 && value < heapArray[index / 2]) { // value < heapArray[index / 2]) means if current value is less then its parent value
            heapArray[index] = heapArray[index / 2];  // give parent value to current index
            index /= 2;  // Move up to parent of current value
        }

        heapArray[index] = value;  // Place the new value at the correct position
    }
    
/*
Simply for max heap the while loop in insert() function will change like this
while (index > 1 && value > heapArray[index / 2])
Just less then sign changes to greater then and hence max heap is created.
*/

    // Function to display heap elements
    void traverse() {
        for (int i = 1; i <= currentSize; i++) {
            cout << heapArray[i] << "  ";
        }
        cout << endl;
    }

    // Destructor to free the dynamically allocated memory
    ~Heap() {
        delete[] heapArray;
    }
};

int main() {
    const int SIZE = 16;  // Total number of elements to insert

    // Input array containing initial values
    int inputArray[SIZE] = {18, 31, 82, 85, 37, 20, 23, 79, 47, 51, 96, 97, 42, 94, 57, 29};

    Heap minHeap(SIZE); // Create a MinHeap object with specified size

    // Insert all elements from inputArray into the heap
    for (int i = 0; i < SIZE; i++) {
        minHeap.insert(inputArray[i]);
    }

    // Display the heap after all insertions
    cout << "<<<<<<<<<<<< Min Heap Using Insert Method >>>>>>>>>>>>" << endl;
    minHeap.traverse();

    return 0;  // End of program
}

