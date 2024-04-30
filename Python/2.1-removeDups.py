#!/usr/bin/python3

from LinkedList import *

def removeDups(linkedList):
	s = set()
	head = linkedList.head
	while(head):
		s.add(head.data)
		head = head.next
	linkedList = LinkedList()
	for el in s:
		linkedList.insert(el)
	return linkedList


def removeDupsNoSet(linkedList):
	head = linkedList.head
	while(head):
		before = head
		current = head.next
		while(current):
			if head.data == current.data:
				before.next = current.next
			else:
				before = before.next
			current = current.next
		head = head.next
	head = linkedList.head

option = -1

while option != 0 and option != 1:
	option = input("\nSelect option\n0 - WITHOUT auxiliary data structures\n1 - WITH auxiliary data structures\n\nOption:")
	option = int(option)

source = input("Type in the string to be converted to a list, separated by commas: ")
sourceList = source.split(",")

ll = LinkedList()
for item in sourceList:
	ll.insert(item)

print("List before: ", end='')
ll.print()

if option == 1:
	ll = removeDups(ll)
else:
	removeDupsNoSet(ll)

print("\nList after:  ", end='')
ll.print()
