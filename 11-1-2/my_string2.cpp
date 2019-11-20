#include"my_string2.h"
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

MyString2::MyString2() {}

MyString2::MyString2(const string str_) {
	str = str_;
}

MyString2::MyString2(const MyString2& b) {
	str = b.str;
}

MyString2 MyString2::operator+(const MyString2& b) {
    MyString2 temp;
    temp.str = str + b.str;

    return temp;
}

MyString2 MyString2::operator*(const int b) {
    MyString2 temp;
    for (int i = 0; i < b; i++) {
        temp.str += str;
    }

    return temp;
}

ostream& operator<<(std::ostream& out, MyString2& my_string) {
    out << my_string.str;
    return out;
}

istream& operator>>(std::istream& in, MyString2& my_string) {
    cin >> my_string.str;
    return in;
}

