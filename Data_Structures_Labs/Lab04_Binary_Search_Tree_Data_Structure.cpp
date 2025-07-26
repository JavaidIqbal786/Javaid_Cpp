//Lab 4 : Learn to implement Binary Search Tree Data Structure >>> By: Javaid Iqbal

/*Consider the following string array in which different names are stored.
The length of each name is different from the others.
Ò	string names [] = {"Saleh","Ali","Umar","Musaddiq","Rehman","Hassaan"};
Write a C++ program to construct a Binary Search Tree which will store the length of each name in its nodes.
For example, the length of "Ali" is 3 so 3 will be inserted in BST node. After the construction of BST,
you are required to print the values of maximum and minimum nodes of Binary Search Tree. 
 Your program should meet the following requirements.
1.	You will use the same string array mentioned above.
2.	Calculate the length of each name and store them in an integer array treeData.
3.	Construct the Binary Search Tree by inserting the values stored in treeData.
4.	While inserting the nodes in BST, print each name with its length.
5.	The insert method should be able to prevent the entry of duplicate value in BST.
6.	The program should be able to print the node having maximum and minimum value.*/


#include <iostream> 
using namespace std;

// Node class represents each element in the BST
class Node {
private:
    int data;               // Stores the integer value (length of name)
    Node* left, * right;    // Pointers to left and right child nodes

public:
    Node() {
        left = right = nullptr; // Initialize child pointers to null
    }

    void setData(int d) {
        data = d;
    }

    void setLeft(Node* lft) {
        left = lft;
    }

    void setRight(Node* rgt) {
        right = rgt;
    }

    int getData() {
        return data;
    }

    Node* getLeft() {
        return left;
    }

    Node* getRight() {
        return right;
    }
};

// BST class handles insertion and finding min/max
class BST {
private:
    Node* root; // Root node of the BST

public:
    BST() {
        root = nullptr; // Initially the tree is empty
    }

    // Inserts a value into the BST
    void insert(int d) {
        Node* newNode = new Node;
        newNode->setData(d);
        newNode->setLeft(nullptr);
        newNode->setRight(nullptr);

        if (root == nullptr) {
            root = newNode; // First node becomes the root
            return;
        }

        Node* current = root;
        Node* parent = nullptr;

        // Traverse to find the correct position for new node
        while (current != nullptr) {
            parent = current;
			// If the new data is smaller than the current node's data, move to the left subtree
            if (d < current->getData()) {
                current = current->getLeft();
            } else if (d > current->getData()) { //If the new data is greater than the current node's data, move to the right subtree
                current = current->getRight();
            } else {
                // Duplicate value found; do not insert
                cout << "Duplicate value found!\n";
                delete newNode; // Free memory
                return;
            }
        }

        // Attach new node to appropriate side of parent
        if (d < parent->getData()) {
            parent->setLeft(newNode);
        } else {
            parent->setRight(newNode);
        }
    }

    // Finds and returns the minimum value in the BST
    int BSTmin() {
        Node* ptr = root;
        while (ptr->getLeft() != nullptr) {
            ptr = ptr->getLeft(); // Keep going left
        }
        return ptr->getData();
    }

    // Finds and returns the maximum value in the BST
    int BSTmax() {
        Node* ptr = root;
        while (ptr->getRight() != nullptr) {
            ptr = ptr->getRight(); // Keep going right
        }
        return ptr->getData();
    }
};

int main() {
    BST object; // Create a BST object

    // Array of names to be processed
    string names[] = {"Saleh", "Ali", "Umar", "Musaddiq", "Rehman", "Hassaan"};
    int totalNames = sizeof(names) / sizeof(names[0]); // Number of elements

    cout << "Inserting the length of names in BST Nodes one by one\n";
    cout << "----------------------------------------------------------\n";

    // Insert length of each name into the BST
    for (int i = 0; i < totalNames; i++) {
        int length = names[i].length();
        cout << "Length of " << names[i] << " is: " << length << endl;
        object.insert(length);
    }

    cout << "----------------------------------------------------------\n";
    cout << "Value of BST minimum node is: " << object.BSTmin() << endl;
    cout << "Value of BST maximum node is: " << object.BSTmax() << endl;

    return 0;
}


