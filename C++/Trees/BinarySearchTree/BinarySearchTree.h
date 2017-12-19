#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

class BinarySearchTree{
	
public:	
	
	class Node{
		
	public:
	
		/*
		Constructor
		*/
		Node(int data = 0);
		
		/*
		Destructor
		*/
		~Node();
		
		/*
		Copy Constructor
		*/
		Node(const Node& other);
		
		/*
		Overloaded assignment operator
		*/
		const Node& operator=(const Node& rhs);
	
	private:
		int data;
		Node* leftChild;
		Node* rightChild;
		
	};
	
	/*
	Constructor
	*/
	BinarySearchTree();
	
	/*
	Destructor
	*/
	~BinarySearchTree();
	
	/*
	Copy Constructor
	*/
	BinarySearchTree(const BinarySearchTree& other);
	
	/*
	Insert a node into the binary search tree.
	Bootstrap function
	Runs in constant time
	*/
	void insert();
	
	/*
	Insert a node into the binary search tree.
	Bootstrap function
	Runs in O(logn) time
	*/
	void insert(Node* n, int data);
	
	/*
	Displays an inorder walk of the tree
	Runs in O(logn) time
	*/
	void dump();
	
	/*
	Overloaded assignment operator
	*/
	const BinarySearchTree& operator=(const BinarySearchTree& rhs);

private:
	Node* root;
	
};

#endif