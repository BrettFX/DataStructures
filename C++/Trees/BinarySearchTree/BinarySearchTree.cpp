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
	this->data = data;
	leftChild = NULL;
	rightChild = NULL;
}

/*
Destructor
*/
BinarySearchTree::Node::~Node(){
	
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

/*===========================================================
BinarySearchTree class implementation
===========================================================*/
/*
Constructor
*/
BinarySearchTree::BinarySearchTree(){
	
}

/*
Destructor
*/
BinarySearchTree::~BinarySearchTree(){
	
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
void BinarySearchTree::insert(){
	
}

/*
Insert a node into the binary search tree.
Bootstrap function
Runs in O(logn) time
*/
void BinarySearchTree::insert(Node* n, int data){
	
}

/*
Displays an in-order walk of the tree
Runs in O(logn) time
*/
void BinarySearchTree::dump(){
	
}

/*
Overloaded assignment operator
*/
const BinarySearchTree& BinarySearchTree::operator=(const BinarySearchTree& rhs){
	
}