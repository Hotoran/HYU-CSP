#include"my_string2.h"
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(void) {
    MyString2 a, b;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    string arg;
    while (true) {
        cin >> arg;
        if (arg == "quit") return 0;
        if (arg == "a") {
            cin >> arg;
            if (arg == "+") {
                cin >> arg;
                if (arg == "a") {
					MyString2 c(a + a);
					cout << c << endl;
				}
                else {
					MyString2 c(a + b);
					cout << c << endl;
				}
            }
            else {
                cin >> arg;
                MyString2 c(a * stoi(arg));
				cout << c << endl;
            }
        }
        else {
            cin >> arg;
            if (arg == "+") {
                cin >> arg;
                if (arg == "a") {
					MyString2 c(b + a);
					cout << c << endl;
				}
                else {
					MyString2 c(b + b);
					cout << c << endl;
				}
            } else {
                cin >> arg;
                MyString2 c(b * stoi(arg));
				cout << c << endl;
            }
        }
    }

    return 0;
}
