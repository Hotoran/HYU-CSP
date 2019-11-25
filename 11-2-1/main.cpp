#include"my_vector.h"
#include<iostream>
#include<string>

using namespace std;

int main(void){
	int length;
	string arg1, arg2, arg3;
	MyVector a,b,c;
	while (1) {
		cin >> arg1;
		if (arg1 == "new") {
			cin >> length;
			MyVector temp1(length);
    		cout << "enter a" << endl;
			a = temp1;
			cin >> a;
    		cout << "enter b" << endl;
    		b = temp1;
			cin >> b;
			c = temp1;
		}
		else if (arg1 == "quit") break;
		else if (arg1 == "a") {
			cin >> arg2;
			if (arg2 == "+") {
				cin >> arg3;
				if (arg3 == "a") c = a + a;
				else if (arg3 == "b") c = a + b;
				else c = a + stoi(arg3);
			} else {
				cin >> arg3;
				if (arg3 == "a") c = a - a;
				else if (arg3 == "b") c = a - b;
				else c = a - stoi(arg3);
			}
		}
		else if (arg1 == "b") {
			cin >> arg2;
			if (arg2 == "+") {
				cin >> arg3;
				if (arg3 == "a") c = b + a;
				else if (arg3 == "b") c = b + b;
				else c = b + stoi(arg3);
			} else {
				cin >> arg3;
				if (arg3 == "a") c = b - a;
				else if (arg3 == "b") c = b - b;
				else c = b - stoi(arg3);
			}
		}
		if (arg1 != "new") cout << c << endl;
	}

	return 0;
}
