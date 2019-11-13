#include "shape.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	double t_width, t_height, r_width, r_height;
	string com;
	vector<Shape*> shapes;
	while (1) {
		cin >> com;
		if (com == "r") {
			cin >> r_width >> r_height;
			shapes.push_back(new Rectangle(r_width, r_height));
		}
		else if (com == "t") {
			cin >> t_width >> t_height;
			shapes.push_back(new Triangle(t_width, t_height));
		}
		else if (com == "0") {
			for (auto shape : shapes) {
        	cout << shape->getArea() << endl;
        	delete shape;
			}
			break;
		}
	}
	return 0;
}
