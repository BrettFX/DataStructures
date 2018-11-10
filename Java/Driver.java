package datastructures;

import java.util.Random;

import trees.BinarySearchTree;
import trees.Tree;

public class Driver {
	public static void main(String[] args) {
		Tree myTree = new BinarySearchTree();
		
		Random rand = new Random();
		
		int i = 0;
		int iterations = 100;
		int max = 1000;
		for (; i < iterations; i++) {
			myTree.insert(rand.nextInt(max));
		}
		
		myTree.display();
	}
}
