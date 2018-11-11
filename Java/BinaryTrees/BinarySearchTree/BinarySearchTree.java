package trees;

import trees.components.Node;
import trees.components.Tree;

public class BinarySearchTree extends Tree {
	
	public BinarySearchTree() {
		m_root = null;
	}

	@Override
	public void insert(int data) {
		if (m_root == null) {
			m_root = new Node(data);
			return;
		}
		
		insert(data, m_root);
	}

	@Override
	protected void insert(int data, Node currentNode) {
		// Traverse right if data is larger than current node's data
		// Traverse left if data is smaller than current node's data
		if (data > currentNode.getData()) { 
			if (currentNode.getRight() != null) {
				insert(data, currentNode.getRight());
			} else {
				currentNode.setRight(new Node(data));
			}
		} else if (data < currentNode.getData()) {
			if (currentNode.getLeft() != null) {
				insert(data, currentNode.getLeft());
			} else {
				currentNode.setLeft(new Node(data));
			}
		}
	}

	@Override
	public void display() {
		if (m_root == null) {
			System.out.println("No data...");
			return;
		}
		
		display(m_root);
	}

	@Override
	protected void display(Node currentNode) {
		// In-order traversal strategy
		if (currentNode.getLeft() != null) {
			display(currentNode.getLeft());
		}
		
		System.out.println(currentNode.getData());
		
		if (currentNode.getRight() != null) {
			display(currentNode.getRight());
		}
	}
}
