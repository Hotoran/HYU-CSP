#include<iostream>
#include<vector>
#include"intset.h"

using namespace std;

void Print(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	string command; int number;
	string a = "add", d = "del", g = "get", q = "quit";
	IntegerSet I;
	while (1) {
		cin >> command;
		if (command.compare(a) == 0) {
			cin >> number;
			I.AddNumber(number);
			Print(I.GetAll());
		}
		else if (command.compare(d) == 0) {
			cin >> number;
			I.DeleteNumber(number);
			Print(I.GetAll());
		}
		else if (command.compare(g) == 0) {
			cin >> number;
			cout << I.GetItem(number) << endl;
		}
		else if (command.compare(q) == 0) {
			break;
		}
		else { cout << "Wrong Input!" << endl; }
		
	}
	return 0;
}


