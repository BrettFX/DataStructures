class BST:
	class Node:
		def __init__(self, data):
			self.m_data = data
			self.m_left = None
			self.m_right = None

	def __init__(self):
		self.m_root = None

	def insert(self, data):
		if self.m_root == None:
			self.m_root = self.Node(data)
			return

		self.insert_boot(data, self.m_root)

	#NB: always look ahead when dealing with recursion
	def insert_boot(self, data, current_node):
		#Traverse left
		if data < current_node.m_data:
			if current_node.m_left != None:								
				self.insert_boot(data, current_node.m_left)
			else:
				current_node.m_left = self.Node(data)

		#Traverse right
		if data > current_node.m_data:
			if current_node.m_right != None:			
				self.insert_boot(data, current_node.m_right)
			else:
				current_node.m_right = self.Node(data)

	#In-order traversal display
	def display(self):
		if self.m_root == None:
			print("BST is empty...")
		self.display_boot(self.m_root)

	def display_boot(self, current_node):
		if current_node == None:
			return
			
		self.display_boot(current_node.m_left)
		print(current_node.m_data)
		self.display_boot(current_node.m_right)

	def root(self):
		return self.m_root

def main():
	testBST = BST()
	testBST.insert(12)
	testBST.insert(6)
	testBST.insert(4)
	testBST.insert(1)
	testBST.insert(65)

	testBST.display()

# Run the program
main()