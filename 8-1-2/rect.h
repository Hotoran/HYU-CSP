class Rectangle {
public:
Rectangle(int width, int height); // Implement to store necessary data as member variables
int getArea(); // Returns the area of this rectangle
int getPerimeter(); // Returns the perimeter of this rectangle
protected:
	int _width;
	int _height;
};

class Square: public Rectangle {
public:
Square (int width);
void print();
};
class NonSquare: public Rectangle {
public:
NonSquare(int width, int height);
void print(); // Print out information about this object (ex. '2x7 NonSquare')
};
