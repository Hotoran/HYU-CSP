#include<iostream>
#include<set>
#include<string>
#include<sstream>
#include"setfunc.h"

std::set<int> parseSet(const std::string& str) {
	std::string tmpInt; std::set<int> temp;
	std::stringstream ss;
	ss.str(str);
	while (ss >> tmpInt) {
		if (tmpInt == "{"){ continue;}
		if (tmpInt == "}"){ break;}
		temp.insert(stoi(tmpInt));
	}
	return temp;
}

void printSet(const std::set<int>& intSet) {
	std::set<int>::iterator it;
	std::cout << "{";
	for (it = intSet.begin(); it != intSet.end(); it++){
		std::cout << " " << *it;
	}
	std::cout << " }" << std::endl;
}

std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1){
	std::set<int> interSet;
	std::set<int>::iterator it1,it2;
	for (it1 = set0.begin(); it1 != set0.end(); it1++) {
		for (it2 = set1.begin(); it2 != set1.end(); it2++) {
			if (*it2 == *it1) { interSet.insert(*it2); }
		}
	}
	return interSet;
}

std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> unionSet;
	std::set<int>::iterator it1,it2;
	for (it1 = set0.begin(); it1 != set0.end(); it1++) {
		unionSet.insert(*it1);
	}
	for (it2 = set1.begin(); it2 != set1.end(); it2++) {
        unionSet.insert(*it2);
    }

	return unionSet;
}

std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> diffSet;
	std::set<int>::iterator it1,it2;
    for (it1 = set0.begin(); it1 != set0.end(); it1++) {
		diffSet.insert(*it1);
		for (it2 = set1.begin(); it2 != set1.end(); it2++) {
			if ( *it2 == *it1 ) { diffSet.erase(*it1); }
		}
	}
	return diffSet;
}
