#include<iostream>

using namespace std;

typedef struct{
	string name;
	int age;
} Person;

int main(){
	int n;
	cin >> n;
	
	Person *arr = new Person[n];
	
	for (int i = 0; i < n; i++){
		cin >> arr[i].name >> arr[i].age;
	}

	for (int i = 0; i < n; i++){
		cout << "Name: " << arr[i].name;
		cout << ", Age: " << arr[i].age << endl;
	}
	
	delete[] arr;	

	return 0;
}

