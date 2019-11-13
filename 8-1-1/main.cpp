#include<iostream>
#include<string>
#include"number.h"

using namespace std;

int main(){
	string command;
	int num;
	while (1) {
		cin >> command;
		if (command == "number") {
			cin >> num;
			Number n;
			n.setNumber(num);
			cout << "getNumber(): " << n.getNumber() << endl;
		}
		else if (command == "square") {
			cin >> num;
			Square s;
			s.setNumber(num);
			cout << "getNumber(): " << s.getNumber() << endl;
			cout << "getSqaure(): " << s.getSquare() << endl;
		}
		else if (command == "cube") {
			cin >> num;
			Cube c;
			c.setNumber(num);
			cout << "getNumber(): " << c.getNumber() << endl;
			cout << "getSqaure(): " << c.getSquare() << endl;
			cout << "getCube(): " << c.getCube() << endl;
		}
		else if (command == "quit") { break; }
		else { cout << "ERROR! RE-EXECUTE!" << endl; break; }
	}
	return 0;
}
