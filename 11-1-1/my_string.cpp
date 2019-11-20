#include"my_string.h"
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

MyString& MyString::operator=(const MyString& b) {
	str = b.str;
	return *this;
}

MyString MyString::operator+(const MyString& b) {
	MyString temp;
	temp.str = str + b.str;

	return temp;
}

MyString MyString::operator*(const int b) {
	MyString temp;
	for (int i = 0; i < b; i++) {
		temp.str += str;
	}

	return temp;
}

ostream& operator<<(std::ostream& out, MyString& my_string) {
	out << my_string.str;
	return out;
}

istream& operator>>(std::istream& in, MyString& my_string) {
	cin >> my_string.str;
	return in;
}

