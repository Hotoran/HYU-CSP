#include"my_container.h"
#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int num;
	cin >> num;
	MyContainer<int> my_con1(num);
	cin >> my_con1;
	cout << my_con1;

	cin >> num;
	MyContainer<double> my_con2(num);
    cin >> my_con2;
    cout << my_con2;

	cin >> num;
	MyContainer<string> my_con3(num);
    cin >> my_con3;
    cout << my_con3;

	return 0;
}


