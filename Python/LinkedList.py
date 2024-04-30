class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None

	def insert(self,data):
		newNode = Node(data)
		if self.head == None:
			self.head = newNode
			return
		current = self.head
		while(current.next):
			current = current.next
		current.next = newNode

	def print(self):
		current = self.head
		while(current):
			print(current.data, end=' ')
			current = current.next
