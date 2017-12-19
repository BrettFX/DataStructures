#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

/*===========================================================
Nested Node class implementation
===========================================================*/
/*
Constructor
*/
BinarySearchTree::Node::Node(int data /*= 0*/){
	m_data = data;
	m_leftChild = NULL;
	m_rightChild = NULL;
}

/*
Destructor
*/
BinarySearchTree::Node::~Node(){
	
	if(m_leftChild != NULL){
		delete m_leftChild;
	}
	
	if(m_rightChild != NULL){
		delete m_rightChild;
	}
	
}

/*
Copy Constructor
*/
BinarySearchTree::Node::Node(const Node& other){
	
}

/*
Overloaded assignment operator
*/
const BinarySearchTree::Node& BinarySearchTree::Node::operator=(const Node& rhs){
	
}

/*
Get the data
Runs in constant time
*/
int BinarySearchTree::Node::data() const{
	return m_data;
}

/*
Get the left child
Runs in constant time
*/
BinarySearchTree::Node* BinarySearchTree::Node::left() const{
	return m_leftChild;
}

/*
Gets the right child
Runs in constant time
*/
BinarySearchTree::Node* BinarySearchTree::Node::right() const{
	return m_rightChild;
}

/*===========================================================
BinarySearchTree class implementation
===========================================================*/
/*
Constructor
*/
BinarySearchTree::BinarySearchTree(){
	m_root = NULL;
	m_size = 0;
}

/*
Destructor
Recursively delete entire tree
*/
BinarySearchTree::~BinarySearchTree(){
	if(m_root != NULL){
		delete m_root;
	}
}

/*
Copy Constructor
*/
BinarySearchTree::BinarySearchTree(const BinarySearchTree& other){
	
}

/*
Insert a node into the binary search tree.
Bootstrap function
Runs in constant time
*/
void BinarySearchTree::insert(int data){
	//Create the m_root if there are no nodes
	if(m_root == NULL){
		m_root = new Node(data);
	}else{ // Otherwise, insert into respective location
		insert(m_root, data);
	}
}

/*
Insert a node into the binary search tree.
Bootstrap function
Runs in O(logn) time
*/
void BinarySearchTree::insert(Node* n, int data){
	if(n == NULL){
		n = new Node(data);
		return;
	}
	
	//Don't permit duplicates
	if(data < n->data() ){ //Traverse left
		insert(n->left(), data);
	}else if(data > n->data()){ //Traverse right
		insert(n->right(), data);
	}
}

/*
Displays an in-order walk of the tree
Runs in O(logn) time
*/
void BinarySearchTree::dump(){
	if(m_root == NULL){
		return;
	}
	
	dump(m_root);
}

/*
Displays an inorder walk of the tree
Bootstrap function
Runs in O(logn) time
*/
void BinarySearchTree::dump(Node* n){
	if(n == NULL){
		return;
	}
	
	dump(n->left());
	
	cout << n->data() << "\t";
	
	dump(n->right());
}

/*
Overloaded assignment operator
*/
const BinarySearchTree& BinarySearchTree::operator=(const BinarySearchTree& rhs){
	
}