#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include"sorted.h"

using namespace std;

void Print(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	SortedArray sr;
	string input;
	getline(cin, input);
	stringstream ss(input);

	string str;
	while (ss >> str) {
		sr.AddNumber(stoi(str));
	}

	string command, addnum;
	string a = "ascend"; string d = "descend";
	string m1 = "max"; string m2 = "min"; string q = "quit";
	
	while (1) {
		getline(cin, command);
		if (isdigit(command[0]) != 0) {
			stringstream sss(command);
			while (sss >> addnum) {
				sr.AddNumber(stoi(addnum));
			}
		}
		else {
			if (command.compare(a)==0) {
				Print(sr.GetSortedAscending());
			}
			else if(command.compare(d)==0) {
				Print(sr.GetSortedDescending());
			}
			else if(command.compare(m1)==0) {
				cout << sr.GetMax() << endl;
			}
			else if(command.compare(m2)==0) {
				cout << sr.GetMin() << endl;
			}
			else if(command.compare(q)==0) { break;}

			else { cout << "Wrong Input!" << endl; }

		}
	}
	return 0;
}

