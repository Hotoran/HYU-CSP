#include<iostream>
#include"rect.h"

using namespace std;

Rectangle::Rectangle(int width, int height) {
	this->_width = width;
	this->_height = height;
}

int Rectangle::getArea() {
	return (this->_width)*(this->_height);
}

int Rectangle::getPerimeter() {
	return ((this->_width)*2)+((this->_height)*2);
}

Square::Square(int width):Rectangle(width, width){}

void Square::print() {
	cout << this->_width << "x" << this->_width << " Square" << endl;
}

NonSquare::NonSquare(int width, int height):Rectangle(width,height){}

void NonSquare::print() {
	cout << this->_width << "x" << this->_height << " NonSquare" << endl;
}






