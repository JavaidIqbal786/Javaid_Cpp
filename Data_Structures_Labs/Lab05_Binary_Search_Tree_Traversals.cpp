//Lab 5 : Learn to implement Binary Search Tree Traversals (In-Order,Pre-Order,Post-Order) >>> By: Javaid Iqbal

/*Write a C++ program that stores the name of a person and build the binary search tree from the characters of that name.
After the construction of the Binary Search Tree, print the characters of name in pre-order, post-order, and in-order traversal.
Your program should meet the following requirements.
1.	First, you will enter the length of the name.
2.	Enter the name that will be stored in a character array.
3.	Construct the Binary Search Tree by inserting the values stored in the character array.
4.	The insert method should not enter the duplicate character in binary tree,
	you can enter the name that contain different characters only.
5.	After the construction of Binary tree, the program should be able to print the characters in pre-order, post order,
	and in-order traversal of the name entered by the user.*/
	
	
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
public:
	Node* root; // Root node of the BST
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
    
/*
InOrder Traversal => Left Child, Parent Node, Right Child
PreOrder Traversal => Parent Node, Left Child, Right Child
PostOrder Traversal => Left Child, Right Child, Parent Node
*/

// InOrder traversal (LNR)
void inOrder(Node* parentNodeValue) {
    if (parentNodeValue != nullptr) {
        inOrder(parentNodeValue->getLeft()); // Visit left subtree first
        cout << parentNodeValue->getData() << "  "; // Visit current node (parent)
        inOrder(parentNodeValue->getRight()); // Visit right subtree
    }
}

// PreOrder traversal (NLR)
void preOrder(Node* parentNodeValue) {
    if (parentNodeValue != nullptr) {
        cout << parentNodeValue->getData() << "  ";  // Visit current node (parent)
        preOrder(parentNodeValue->getLeft()); // Visit left subtree
        preOrder(parentNodeValue->getRight()); // Visit right subtree
    }
}

// PostOrder traversal (LRN)
void postOrder(Node* parentNodeValue) {
    if (parentNodeValue != nullptr) {
        postOrder(parentNodeValue->getLeft()); // Visit left subtree
        postOrder(parentNodeValue->getRight()); // Visit right subtree
        cout << parentNodeValue->getData() << "  "; // Visit current node (parent)
    }
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

    cout << "\n----------------------------------------------------------\n";
    cout<<"In-Order Traversal:"<<endl;
    object.inOrder(object.root);
    cout<<"\nPre-Order Traversal:"<<endl;
    object.preOrder(object.root);
    cout<<"\nPost-Order Traversal:"<<endl;
    object.postOrder(object.root);

    return 0;
}


