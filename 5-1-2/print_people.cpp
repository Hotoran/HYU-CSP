#include<iostream>
#include<string>

using namespace std;

typedef struct {
	string name;
	double score;
} Person;

int main(int argc, const char* argv[]){
	int n = (argc - 1) / 2;
	Person *arr = new Person[n];
	
	for (int i = 0; i < n; i++) {
		arr[i].name = argv[2*i + 1];
		arr[i].score = atof(argv[2*i + 2]);
	}
	
	for (int i = 0; i < n; i++) {
		cout << "Name:" << arr[i].name;
		cout << ", Score:" << arr[i].score << endl;
	}

	delete[] arr;

	return 0;
}

