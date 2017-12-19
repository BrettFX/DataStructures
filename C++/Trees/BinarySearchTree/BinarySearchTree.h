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
		
		/*
		Get the data
		Runs in constant time
		*/
		int data() const;
		
		/*
		Get the left child
		Runs in constant time
		*/
		Node* left() const;
		
		/*
		Gets the right child
		Runs in constant time
		*/
		Node* right() const;
	
	private:
		int m_data;
		Node* m_leftChild;
		Node* m_rightChild;
		
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
	void insert(int data);
	
	/*
	Insert a node into the binary search tree.
	Bootstrap function
	Runs in O(logn) time
	*/
	void insert(Node* n, int data);
	
	/*
	Displays an inorder walk of the tree
	Bootstrap function
	Runs in constant time
	*/
	void dump();
	
	/*
	Displays an inorder walk of the tree
	Bootstrap function
	Runs in O(logn) time
	*/
	void dump(Node* n);
	
	/*
	Overloaded assignment operator
	*/
	const BinarySearchTree& operator=(const BinarySearchTree& rhs);

private:
	Node* m_root;
	int m_size;
	
};

#endif