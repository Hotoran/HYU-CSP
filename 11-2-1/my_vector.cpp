#include"my_vector.h"
#include<iostream>

using namespace std;

MyVector::MyVector() {}
MyVector::MyVector(int length) : length(length) {
	a = new double[length];
}
MyVector::~MyVector() {
	delete[] a;
}

MyVector& MyVector::operator=(const MyVector& b) {
	length = b.length;
	a = new double[length];
	for (int i = 0 ; i < length; i++) a[i] = b.a[i];
	return *this;
}

MyVector MyVector::operator+(const MyVector& b) {
	MyVector temp(length);
	for (int i = 0; i < length; i++) {
		temp.a[i] = a[i] + b.a[i];
	}
	return temp;
}

MyVector MyVector::operator-(const MyVector& b) {
	MyVector temp(length);
    for (int i = 0; i < length; i++) {
        temp.a[i] = a[i] - b.a[i];
    }
    return temp;
}

MyVector MyVector::operator+(const int b) {
	MyVector temp(length);
	for (int i = 0; i < length; i++) {
		temp.a[i] = a[i] + b;
	}
	return temp;
}

MyVector MyVector::operator-(const int b) {
    MyVector temp(length);
    for (int i = 0; i < length; i++) {
        temp.a[i] = a[i] - b;
    }   
    return temp;
}

ostream& operator<< (std::ostream& out, MyVector& b) {
	out << b.a[0];
	for (int i = 1; i < b.length; i++) {
		out << " " << b.a[i];
	}
	return out;
}

istream& operator>> (std::istream& in, MyVector& b) {
	for (int i = 0; i < b.length; i++) {
		in >> b.a[i];
	}
	return in;
}

