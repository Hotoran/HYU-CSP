#include<iostream>
using namespace std;
int main(){
	int N,min,max;
	cin >> N;
	
	int *arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	min = arr[0];
	max = arr[0];
	for (int j = 0; j < N; j++) {
		if (min > arr[j]) {
			min = arr[j];
		}
		if (max < arr[j]) {
			max = arr[j];
		}
	}

	cout << "min: " << min << "\n" << "max: " << max << endl;


	delete[] arr;
	return 0;
}



