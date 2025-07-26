//Lab 3: Learn to implement queue data structure >>> By: Javaid Iqbal

/*Write a C++ program to create a queue (using linked list), Your program should meet the following requirements:
1. The queue will store only even numbers and just display those numbers without removing them.
2. Then you have to delete the first even element from the queue and show the remaining numbers of queue.*/


#include<iostream> 
using namespace std;

// Node class to represent an element in the queue
class Node {
	private:
		int object;       // Stores the data in the node
		Node * nextNode;  // Pointer to the next node in the queue

	public:
		// Function to set the value of the node
		void setObject(int obj){
			object = obj;
		}

		// Function to set the pointer to the next node
		void setNext(Node * next){
			nextNode = next;
		}

		// Function to get the value of the node
		int getObject(){
			return object;
		}

        // Function to get the pointer to the next node
        Node * getNext(){
        	return nextNode;
		}
};

// Queue class to implement queue operations using linked list
class Queue {
	private:
		Node *front, *rear; // Pointers to the front(head) and rear(last) of the queue

	public:
		// Constructor to initialize an empty queue
		Queue (){
			front = NULL;
			rear = NULL;
		}

		// Function to insert a value into the queue
		void enqueue (int x){
			Node * newNode = new Node;     // Create a new node
			newNode -> setObject(x);       // Set the data value in the node
			newNode -> setNext(NULL);      // Set its next pointer to NULL

			if(front == NULL){             // If the queue is empty
				front = newNode;           // Front and rear both point to newNode
				rear = newNode;
			} else {
				rear -> setNext(newNode);  // Link the current rear node to newNode
				rear = newNode;            // Move rear to point to newNode
			}
		}

		// Function to display all elements of the queue
		void display (){
			if(front == NULL){ // If queue is empty
				cout << "Queue is empty!" << endl;
			} else {
				Node *ptr = front; // Start from the front node
				while(ptr != NULL){ // Traverse until the end
					cout << ptr -> getObject() << endl; // Print value
					ptr = ptr -> getNext(); // Move to next node
				}
			}
		}

		// Function to remove the first element (front) of the queue
		void dequeue(){
			if (front != NULL) {
				Node* temp = front;         // Store current front
				front = front -> getNext(); // Move front to next node
				delete temp;                // Free memory of removed node
			}
		}
};

// Main function: program execution starts here
int main (){
	Queue object; // Create a queue object

	int num;      // To store how many numbers user wants to input
	int temp;     // Temporary variable to store each user input

	// Ask user how many numbers to enter
	cout << "Enter the total numbers you want to enter: ";
	cin >> num;

	cout << "Enter Numbers Randomly: " << endl;

	// Input numbers from user and add even ones to the queue
	for(int i = 1; i <= num; i++){
		cin >> temp;
		if (temp % 2 == 0){        // Check if the number is even
			object.enqueue(temp);  // Insert even number into the queue
		}
	}

	// Display all even numbers stored in the queue
	cout << "The even numbers are: " << endl;
	object.display();

	// Remove the first even number (FIFO behavior)
	cout << "After removing the first even number: " << endl;
	object.dequeue();  // Remove the front node

	// Display updated queue
	object.display();

	return 0; // Indicate successful program termination
}

