#include "animal.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string command, name, favoriteToy;
	int age, numStripes;
	vector<Animal*> animals;

	while (true) {
		cin >> command;
	
		if (command == "z") {
			cin >> name >> age >> numStripes;
			animals.push_back(new Zebra(name, age, numStripes));
		} else if (command == "c") {
			cin >> name >> age >> favoriteToy;
			animals.push_back(new Cat(name, age, favoriteToy));
		} else if (command == "0") {
			for (Animal* animal : animals) animal->printInfo();
			return 0;
		}
	}
}
