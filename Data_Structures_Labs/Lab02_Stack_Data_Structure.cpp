//Lab 2: Learn to implement stack data structure (LIFO) >>> By: Javaid Iqbal

/*Write C++ program to create two stacks (one using linked list and one using array).
Both stacks will store the integer values and display these values in reverse order.
In stack implemented through linked list, user can add any number of nodes but in second stack implemented with array,
user will enter only 5 numbers.*/


#include<iostream>
using namespace std;

class Stack_Array {
	private:
		int array[5];
		int top = -1; //Points out current position of stack value
	public:
		//Push: Adds an element to the top of the stack if it’s not full.
		void push(int value){
			if(top >= 4){		//Since array size is 5 (index range 0–4)
				cout<<"Stack Overflow! Stack is Full\n";	// This is where overflow is caught 
			}else {
				array[++top] = value;
			}
		}
		
		void display(){
			if(top == -1){
				cout<<"Stack Underflow! Stack is Empty\n";
			} else {
				cout<<"Array's Stack Elements: "<<endl;
				for(int i=top; i>=0; i--){
					cout << array[i] << endl;
				}
			}
		}
};


// display(): Shows all elements currently in the stack from top to bottom.
// pop(): Removes the topmost element from the stack, simulating LIFO behavior.
// Both functions help visualize and manage stack contents during runtime.


class Node {
	private:
		int data;
		Node *nextNode;
	public:
		void setData(int d){
			data = d;
		}
		void setNext(Node *next){
			nextNode = next;
		}
		int getData(){
			return data;
		}
		Node* getNext(){
			return nextNode;
		}
};

class LinkedListStack {
	private:
		Node *head;  // Pointer to the top of the stack (linked list head)

	public:
		// Constructor initializes the stack to be empty
		LinkedListStack () {
			head = NULL;
		}

		// push(): Adds a new element to the top of the stack
		void push(int d) {
			Node *newNode = new Node;      // Create a new node
			newNode->setData(d);           // Set its data
			newNode->setNext(NULL);        // Initialize next pointer

			// If stack is empty, newNode becomes the head
			if (head == NULL) {
				head = newNode;
			} else {
				// Otherwise, link newNode before current head
				newNode->setNext(head);
				head = newNode;            // Update head to newNode
			}
		}

		// display(): Traverses the stack and prints all elements
		void display() {
			if (head == NULL) {
				cout << "Stack is empty!\n";  // Message if stack is empty
			} else {
				cout << "Linkedlist Stack Elements:\n";
				Node *ptr = head;

				// Traverse from top to bottom
				while (ptr != NULL) {
					cout << ptr->getData() << endl;
					ptr = ptr->getNext();
				}
			}
		}
};

int main() {
    Stack_Array sa;         // Create an instance of array-based stack
    LinkedListStack sll;    // Create an instance of linked list-based stack
    int num;                // Variable to store user input
    int choice;             // Variable to control menu options

    while(true) {           // Infinite loop to keep the menu running
        // Display menu options to the user
        cout << "1. Push Stack Element into Array" << endl;
        cout << "2. Push Stack Element into Linked List" << endl;
        cout << "3. Pop Stack Element From Array and Display" << endl;
        cout << "4. Pop Stack Element From Linked List and Display" << endl;
        cout << "Press any othe key to close the program!\n" << endl;

        // Get user's choice
        cout << "Enter Your Choice: ";
        cin >> choice;

        // Handle the user's choice using switch-case
        switch(choice) {
            case 1:
                // Push 5 values into the array-based stack
                for(int i = 1; i <= 5; i++) {
                    cout << "Enter Element: ";
                    cin >> num;
                    sa.push(num);     // Call push on array stack
                }
                break;

            case 2:
                // Ask user how many nodes to push into linked list stack
                cout << "How many numbers of Nodes you want to push in linkedlist: " << endl;
                int nodeCount;
                cin >> nodeCount;
                for(int i = 1; i <= nodeCount; i++) {
                    cout << "Enter Element: ";
                    cin >> num;
                    sll.push(num);    // Call push on linked list stack
                }
                break;

            case 3:
                // Display all elements from array-based stack
                sa.display();
                break;

            case 4:
                // Display all elements from linked list stack
                sll.display();
                break;

            default:
                // Exit the program if user enters an invalid option
                cout << "Exiting program. Goodbye!\n";
                exit(0);  // Terminates the program
        }
    }
}
