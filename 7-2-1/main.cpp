#include<iostream>
#include<sstream>
#include<string>
#include"message.h"

using namespace std;

int main(){
	MessageBook M;
	string input;
	string command; int number; string message;
	vector<int> numbers;
	while (1) {
		cin >> command;
		if (command == "add") {
			cin >> number;
			getline(cin, message);
			message.erase(message.begin());
			M.AddMessage(number, message);
		}
		else if (command == "delete") {
			cin >> number;
			cin.ignore();
			M.DeleteMessage(number);
		}
		else if (command == "print") {
			cin >> number;
			cin.ignore();
			cout << M.GetMessage(number) << endl;
		}
		else if (command == "list") {
			cin.ignore();
			numbers = M.GetNumbers();
			for (int i = 0; i < numbers.size(); i++) {
				cout << numbers[i] << ": ";
				cout << M.GetMessage(numbers[i]) << endl;
			}
		}
		else if (command == "quit") { break; }
		else {cout << "Wrong Input!" << endl; cin.ignore();}
	}
	return 0;
}
