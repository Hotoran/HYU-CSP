#include "shapes.h"

double Circle::cal_C_Area(double r) {
	double c_Area;
	c_Area = r * r * 3.14;

	return c_Area;
}

double Circle::cal_C_Perimeter(double r) {
	double c_Perimeter;
	c_Perimeter = r * 2 * 3.14;

	return c_Perimeter;
}

double Rectangle::cal_R_Area(double x1, double y1, double x2, double y2) {
	double r_Area;
	r_Area = (x2 - x1) * (y2 - y1);
	if (r_Area < 0) {r_Area = (-1)*r_Area;}
	return r_Area;
}

double Rectangle::cal_R_Perimeter(double x1, double y1, double x2, double y2) {
	double r_Perimeter;
	double row, column;
	row = x2 - x1; column = y2 - y1;
	if (row < 0) {row = (-1)*row;}
	if (column < 0) {column = (-1)*column;}
	
	r_Perimeter = (row + column) * 2;
	return r_Perimeter;
}

