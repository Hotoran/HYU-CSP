#include<iostream>
#include"minmax.h"

using namespace std;

int main(int argc, char* argv[]){
	int len = argc - 1;
	int *arr = new int[len];
	int min,max;
	for (int i = 0; i < len; i++) {
		arr[i] = atoi(argv[i+1]);
	}

	getMinMax(arr,len,min,max);

	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	delete[] arr;

	return 0;
}

