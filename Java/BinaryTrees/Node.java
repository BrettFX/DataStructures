package trees;

public class Node {
	private int m_data;
	private Node m_left;
	private Node m_right;
	
	public Node(int data) {
		m_data = data;
		m_left = null;
		m_right = null;
	}
	
	public int getData() {
		return m_data;
	}
	
	public Node getLeft() {
		return m_left;
	}
	
	public Node getRight() {
		return m_right;
	}
	
	public void setLeft(Node node) {
		m_left = node;
	}
	
	public void setRight(Node node) {
		m_right = node;
	}
}
