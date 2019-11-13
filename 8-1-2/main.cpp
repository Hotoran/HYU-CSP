#include<iostream>
#include<string>
#include"rect.h"

using namespace std;

int main() {
	string command;
	int width, height;

	while (1) {
		cin >> command;
		if (command == "square") {
			cin >> width;
			Square s(width);
			s.print();
			cout << "Area: " << s.getArea() << endl;
			cout << "Perimeter: " << s.getPerimeter() << endl;
		}
		else if (command == "nonsquare") {
			cin >> width >> height;
			NonSquare n(width, height);
			n.print();
			cout << "Area: " << n.getArea() << endl;
			cout << "Perimeter: " << n.getPerimeter() << endl;
		}
		else if (command == "quit") {break;}
		else { cout << "ERROR! RE-EXECUTE!" << endl; }
	}
	return 0;
}





