func isUnique(_ str: String) -> Bool {
	var s = Set<Character>()
	print("\nWITH auxiliary structure it is. ")
	for ch in str {
		let ins = s.insert(ch)
		if(!ins.inserted) {
			return false
		}
	}
	return true
}

func isUniqueWithoutDataStructures(_ str: String) -> Bool {
	print("\nWITHOUT auxiliary structure it is. ")
	let strsrt = str.sorted()
	for i in 0 ..< (strsrt.count - 1) {
		if(strsrt[i] == strsrt[i + 1]) {
			return false
		}
	}
	return true
}

var option = -1
var res: Bool

while(option != 0 && option != 1) {
	print("\nSelect option\n0 - WITHOUT auxiliary data structures\n1 - WITH auxiliary data structures\n\nOption:")
	option = Int(readLine() ?? "") ?? -1
}

print( "Type in the string to be evaluated: ")
var str = readLine() ?? ""

if(option == 1) {
	res = isUnique(str)
} else {
	res = isUniqueWithoutDataStructures(str)
}
	
if(res) {
	print("This string HAS unique chars\n")
} else {
	print("This string DOESN'T HAVE unique chars\n")
}
