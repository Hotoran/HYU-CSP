#include <iostream>
#include <string>
#include <vector>
using namespace std;

class B {
public:
	virtual ~B() {}
};

class C : public B {
public:
	void test_C() { cout << "C::test_C()" << endl; }
};

class D : public B {
public:
	void test_D() { cout << "D::test_D()" << endl; }
};

int main() {
	string str;
	vector<B*> objects;
	while (true) {
		cin >> str;
		if (str == "0") break;
		if (str == "B") objects.push_back(new B);
		if (str == "C") objects.push_back(new C);
		if (str == "D") objects.push_back(new D);
	}

	for (auto object : objects) {
		C* c = dynamic_cast<C*>(object);
		D* d = dynamic_cast<D*>(object);
		if (c) c->test_C();
		if (d) d->test_D();
		delete object;
	}


	return 0;
}
