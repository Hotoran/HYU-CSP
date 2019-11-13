#include<iostream>
#include<vector>
#include<string>

using namespace std;

class A {
	public:
		virtual string test() { return "A::test()"; }
};

class B : public A {
	public:
		virtual string test() { return "B::test()"; }
};

class C : public B {
	public:
		virtual string test() { return "C::test()"; }
};

int main() {
	vector<A*> objects;

	objects.push_back(new A);
	objects.push_back(new B);
	objects.push_back(new C);

	for (A* object : objects) {
		cout << object->test() << endl;
	}

	for (A* object : objects) {
		delete object;
	}

	return 0;
}

