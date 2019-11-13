#include<iostream>
#include<string>
#include<sstream>
#include<set>
#include"setfunc.h"

using namespace std;

int commandChecking(string s) {
	string::size_type p;
	p = s.find("+");
	if (p != string::npos) {
		return 1;
	}
	p = s.find("*");
	if (p != string::npos) {
        return 2;
    }
	p = s.find("-");
	if (p != string::npos) {
        return 3;
    }
	return 0;
}

int main(){
	string userInput; string command;
	string first, second;
	string::size_type n1,n2;
	set<int> firstSet; set<int> secondSet;
	while (1) {
		getline(cin, userInput);
		if (userInput[0] == '0') {break;}
		// if not zero, program continues.
		n1 = userInput.find("}");
		first = userInput.substr(0,n1+1);
		n2 = userInput.find("}", n1+1);
		second = userInput.substr(n1+4, n2+1);
		firstSet = parseSet(first);
		secondSet = parseSet(second);

		if (commandChecking(userInput) == 1) {
			printSet(getUnion(firstSet, secondSet));
		}
		else if (commandChecking(userInput) == 2) {
			printSet(getIntersection(firstSet, secondSet));
		}
		else if (commandChecking(userInput) == 3) {
			printSet(getDifference(firstSet, secondSet));
		}
		else { cout << "Error! Re-Execute File!" << endl; break;}
	}
	return 0;
}
