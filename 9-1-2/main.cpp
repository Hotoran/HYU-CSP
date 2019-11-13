#include<iostream>  
#include<string>
#include<vector>

using namespace std;

class A {
	public:
		virtual string getTypeInfo()
		{ return "This is an instance of class A"; }
};

class B : public A {
	public:
		virtual string getTypeInfo()
		{ return "This is an instance of class B"; }
};

class C : public B {
	public:
		virtual string getTypeInfo()
		{ return "This is an instance of class C"; }
};

void printObjectTypeInfo1(A* object) {
	cout << object->getTypeInfo() << endl;
}

void printObjectTypeInfo2(A& object) {
	cout << object.getTypeInfo() << endl;
}

int main() {
	vector<A*> objects;
	objects.push_back(new A);
	objects.push_back(new B);
	objects.push_back(new C);

	for (int i = 0; i < 3; i++) {
		printObjectTypeInfo1(objects[i]);
		printObjectTypeInfo2(*objects[i]);
	}

	for (int i = 0; i < 3; i++) {
		delete objects[i];
	}

	return 0;
}

