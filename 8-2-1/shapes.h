class Shape {
public:
	Shape();
	Shape(int, int, int, int, char);
	double GetArea();
	double GetPerimeter();
	void Draw(int, int);
protected:
    int _xpos, _ypos, _width, _height;
    double _area, _perimeter;
    char _brush;
    char** canvas;
};

class Square : public Shape {
public:
	Square();
	Square(int, int, int, char);
	void Draw(int, int);
};

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(int, int, int, int, char);
	void Draw(int, int);
};

class Diamond : public Shape {
public:
	Diamond();
	Diamond(int, int, int, char);
	void Draw(int, int);
};
