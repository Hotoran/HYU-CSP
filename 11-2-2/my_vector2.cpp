#include"my_vector2.h"
#include<iostream>

using namespace std;

MyVector2::MyVector2() : length(0), a(NULL) {}
MyVector2::MyVector2(int length) : length(length) {
    a = new double[length];
}
MyVector2::MyVector2(const MyVector2& mv) {
	length = mv.length;
	a = new double[length];
	for (int i = 0; i < length; i++) {
		a[i] = mv.a[i];
	}
}
MyVector2::~MyVector2() {
    delete[] a;
}

MyVector2 MyVector2::operator+(const MyVector2& b) {
    MyVector2 temp(length);
    for (int i = 0; i < length; i++) {
        temp.a[i] = a[i] + b.a[i];
    }
    return temp;
}

MyVector2 MyVector2::operator-(const MyVector2& b) {
    MyVector2 temp(length);
    for (int i = 0; i < length; i++) {
        temp.a[i] = a[i] - b.a[i];
    }
    return temp;
}

MyVector2 MyVector2::operator+(const int b) {
    MyVector2 temp(length);
    for (int i = 0; i < length; i++) {
        temp.a[i] = a[i] + b;
    }
    return temp;
}

MyVector2 MyVector2::operator-(const int b) {
    MyVector2 temp(length);
    for (int i = 0; i < length; i++) {
        temp.a[i] = a[i] - b;
    }
    return temp;
}

std::ostream& operator<<(std::ostream& out, MyVector2& b) {
    out << b.a[0];
    for (int i = 1; i < b.length; i++) {
        out << " " << b.a[i];
    }
    return out;
}

std::istream& operator>>(std::istream& in, MyVector2& b) {
    for (int i = 0; i < b.length; i++) {
        in >> b.a[i];
    }
    return in;
}

