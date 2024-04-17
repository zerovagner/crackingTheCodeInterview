#!/usr/bin/python3

def isUnique(string):
	print("\nWITH auxiliary structure it is. ")
	s = set()
	for ch in string:
		s.add(ch)
	return len(s) == len(string)

def isUniqueWithoutDataStructures(string):
	print("\nWITHOUT auxiliary structure it is. ")
	string = sorted(string)
	for i in range(len(string) - 1):
		if string[i] == string [i+1]:
			return False
	return True
	
res = False
option = -1

while option != 0 and option != 1:
	option = input("\nSelect option\n0 - WITHOUT auxiliary data structures\n1 - WITH auxiliary data structures\n\nOption:")
	option = int(option)

stringToEvaluate = input( "Type in the string to be evaluated: ")

if option == 1:
	res = isUnique(stringToEvaluate)
else:
	res = isUniqueWithoutDataStructures(stringToEvaluate)

if res: 
	print("This string HAS unique chars\n")
else:
	print("This string DOESN'T HAVE unique chars\n")
