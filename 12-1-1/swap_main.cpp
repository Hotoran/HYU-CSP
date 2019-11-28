#include<iostream>
#include<string>

using namespace std;

template<typename T>
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int a, b;
	cin >> a >> b;
	myswap(a, b);
	cout << "After calling myswap(): " << a << " " << b << endl;

	double c, d;
	cin >> c >> d;
	myswap(c, d);
	cout << "After calling myswap(): " << c << " " << d << endl;

	string e, f;
	cin >> e >> f;
	myswap(e, f);
	cout << "After calling myswap(): " << e << " " << f << endl;

	return 0;
}
