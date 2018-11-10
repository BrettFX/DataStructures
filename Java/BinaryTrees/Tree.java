package trees;

public abstract class Tree {
	protected Node m_root;
	
	public abstract void insert(int data);
	protected abstract void insert(int data, Node currentNode);
	public abstract void display();
	protected abstract void display(Node currentNode);
}
