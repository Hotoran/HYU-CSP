#include<iostream>
#include<string>
#include<vector>

using namespace std;

class A {
private:
	int* memberA;
public:
	A(int _memberA) {
		memberA = new int(_memberA);
		cout << "new memberA" << endl;
	}
	virtual ~A() { delete memberA; cout << "delete memberA" << endl; }
	virtual void print() { cout << "*memberA " << *memberA << endl; }
};

class B : public A {
private:
	double* memberB;
public:
	B(double _memberB) : A(1) {
		memberB = new double(_memberB);
		cout << "new memberB" << endl;
	}
	virtual ~B() { delete memberB; cout << "delete memberB" << endl; }
	virtual void print() { A::print(); cout << "*memberB " << *memberB << endl; }
};

class C : public B {
private:
	string* memberC;
public:
	C(string _memberC) : B(1.1) {
		memberC = new string(_memberC);
		cout << "new memberC" << endl;
	}
	virtual ~C() { delete memberC; cout << "delete memberC" << endl; }
	virtual void print() { B::print(); cout << "*memberC " << *memberC << endl; }
};

int main() {
	int a; double b; string c;
	cin >> a >> b >> c;
	
	vector<A*> objects;
	objects.push_back(new A(a));
	objects.push_back(new B(b));
	objects.push_back(new C(c));

	for (int i = 0; i < 3; i++) {
		objects[i]->print();
	}

	for (int i = 0; i < 3; i++) {
		delete objects[i];
	}

	return 0;
}

