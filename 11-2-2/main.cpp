#include"my_vector2.h"
#include<iostream>
#include<string>

using namespace std;

int main(void){
    int length;
    string arg1, arg2, arg3;
    MyVector2 *a;
	MyVector2 *b;
    while (1) {
        cin >> arg1;
        if (arg1 == "new") {
            cin >> length;
            cout << "enter a" << endl;
            a = new MyVector2(length);
			cin >> *a;
            cout << "enter b" << endl;
            b = new MyVector2(length);
            cin >> *b;
        }
        else if (arg1 == "quit") break;
        else if (arg1 == "a") {
            cin >> arg2;
            if (arg2 == "+") {
                cin >> arg3;
                if (arg3 == "a"){
					MyVector2 c(*a + *a);
					cout << c << endl;
				}
                else if (arg3 == "b") {
					MyVector2 c(*a + *b);
					cout << c << endl;
				}
                else {
					MyVector2 c(*a + stoi(arg3));
					cout << c << endl;
				}
            } else {
                cin >> arg3;
                if (arg3 == "a") {
					MyVector2 c(*a - *a);
					cout << c << endl;
				}
                else if (arg3 == "b") {
					MyVector2 c(*a - *b);
					cout << c << endl;
				}
                else {
					MyVector2 c(*a - stoi(arg3));
					cout << c << endl;
				}
            }
        }
        else if (arg1 == "b") {
            cin >> arg2;
            if (arg2 == "+") {
                cin >> arg3;
                if (arg3 == "a") {
					MyVector2 c(*b + *a);
					cout << c << endl;
				}
                else if (arg3 == "b") {
					MyVector2 c(*b + *b);
					cout << c << endl;
				}
                else {
					MyVector2 c(*b + stoi(arg3));
					cout << c << endl;
				}
            } else {
                cin >> arg3;
                if (arg3 == "a") {
					MyVector2 c(*b - *a);
					cout << c << endl;
				}
                else if (arg3 == "b") {
					MyVector2 c(*b - *b);
					cout << c << endl;
				}
                else {
					MyVector2 c(*b - stoi(arg3));
					cout << c << endl;
				}
            }
        }
    }

    return 0;
}
