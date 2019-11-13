#include "shape.h"

double Triangle::getArea() {
	return (_width * _height) / 2.0;
}

double Rectangle::getArea() {
	return _width * _height;
}
