#include<set>
#include<iostream>

using namespace std;

bool isUnique(string str) {
	set<char> m;
	pair<set<char>::iterator, bool> ret;

	cout << endl << "WITH auxiliary structure it is. ";
	for(string::iterator s = str.begin(); s != str.end(); ++s) {
		ret = m.insert(*s);
		if(!ret.second)
			return false;
	}
	return true;
}

bool isUniqueWithoutDataStructures(string str) {
	cout << endl << "WITHOUT auxiliary structure it is. ";
	sort(str.begin(), str.end());
	for(string::iterator s = str.begin(); s != str.end()-1; ++s) {
		if(*s == *(s+1))
			return false;
	}
	return true;
}

int main(int argc, char **argv) {
	int willUseAuxiliaryDataStructures = -1;
	bool ret = false;
	string str;

	cout <<	"Select option\n0 - WITHOUT auxiliary data structures\n1 - WITH auxiliary data structures\n\nOption:";
	cin >> willUseAuxiliaryDataStructures;

	cout << endl << "Type in the string to be evaluated: ";
	cin >> str;
	
	if(willUseAuxiliaryDataStructures)
		ret = isUnique(str);
	else
		ret = isUniqueWithoutDataStructures(str);
	if(ret)
		cout << "This string HAS unique chars" << endl;
	else 
		cout << "This string DOESN'T HAVE unique chars" << endl;
	return 1;
}
