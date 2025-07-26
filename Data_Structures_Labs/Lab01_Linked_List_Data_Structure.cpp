// Lab 1: Learn to implement linked list data structure >>> By: Javaid Iqbal

/*Write a C++ program to create a Linked List that will store and display the data of faculty members of a university.
The user will enter the data of 5 faculty members (name and age). 
On the basis of age, the post of the faculty member will be decided and then this data will be added into the linked list.
Each node of the linked list will contain object of Faculty class in data part and next pointer.*/


#include<iostream>
using namespace std;

class Faculty {
	private:
		string name, post;
		int age;
	public:
		//Setter functions to set values
		void setName(string name){
			this -> name = name;
		}
		void setPost(string post){
			this -> post = post;
		}
		void setAge(int age){
			this -> age = age;
		}
		//Getter Functions to get values
		string getName(){
			return name;
		}
		string getPost(){
			return post;
		}
		int getAge(){
			return age;
		}
};

class Node {
	private:
		Faculty object;		//Creating object of Faculty class 
		Node * nextNode;		//Creating Node pointer to store the address of next node
	public:
		void set(Faculty object){
			this -> object = object;
		}
		void setNext(Node * nextNode){
			this -> nextNode = nextNode;
		}
		Faculty get(){
			return object;
		}
		Node * getNext(){
			return nextNode;
		}
};

class List {
	private:
		int size;				//Total size of linkedlist
		Node * headNode;		//stores address of head node in linkedlist
		Node * currentNode;		//stores address of current node in linkedlist
	public:
		//Default Constructor
		List(){
			headNode = NULL;		//Initially linkedlist is empty 
			currentNode = NULL;
		}
		
		//To Add the data of faculty member into the linked list node
		void add(Faculty addObject){
			Node *newNode = new Node;	//Creates new Node
			newNode -> set(addObject);	//Insert Faculty object to that node
			newNode -> setNext(NULL);	//Hence next Node is not created yet so its value is NULL
			if (headNode == NULL){
				headNode = newNode;
				currentNode = newNode;
			} else{
				currentNode -> setNext(newNode);
				currentNode = newNode;
			}
		} 
		
		//To visit each node and display the data on the screen of a faculty members stored in that node
		void traverse(){
    	Node *ptr = headNode;
    	while (ptr != NULL){
        	Faculty obj = ptr->get();
        	cout<<"Faculty Name: "<<obj.getName()<<endl;
        	cout<<"Faculty Post: "<<obj.getPost()<<endl;
        	cout<<"Faculty Age: "<<obj.getAge()<<endl;
        	ptr = ptr->getNext();
        	cout<<"\n-----------------------------------\n"<<endl;
    	}
}
};

main(){
	List list;		//List object
	Faculty member;		//Faculty object
	string name, post;
	int age;
	cout<<"<<<<<<<<<< Taking Faculty Information >>>>>>>>>>\n"<<endl;
	for(int i=1; i<=5; i++){
		cout<<"Enter Faculty Member Name: ";
		cin>>name;
		cout<<"Enter Faculty Member Age: ";
		cin>>age;
		if(age>=25 && age<=35){
			post="Lecturer";
		}
		else if(age>=36 && age<=45){
			post="Assistant Professor";
		}
		else if(age>=46 && age<=60){
			post="Professor";
		}
	member.setName(name);
	member.setAge(age);
	member.setPost(post);
	list.add(member);
	cout<<"\n-----------------------------------\n"<<endl;
	}
	cout<<"<<<<<<<<<< Display Faculty Information >>>>>>>>>>\n"<<endl;
		list.traverse();
}
