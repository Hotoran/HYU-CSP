#include<iostream>

using namespace std;

void bubbleSort(int* arr, int n) {
	
	int temp;

	for (int i = 0; i < n-1; i++) {
		for (int j = 0 ; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}

	bubbleSort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i];
		cout << " ";
	}
	
	cout << endl;

	delete[] arr;

	return 0;
}

