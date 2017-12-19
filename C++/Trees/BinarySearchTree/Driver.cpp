#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main(int argc, char** argv){
	BinarySearchTree BST;
	
	BST.insert(20);
	BST.insert(10);
	BST.insert(18);
	BST.insert(44);
	BST.insert(123);
	
	BST.dump();
	
	cout << "\n\n";
	
	return 0;
}