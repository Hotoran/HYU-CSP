#include<iostream>

using namespace std;

void magicSquare(int** matrix, int n)
{
	int row = 0, column = n/2, rowTemp, columnTemp;
	for(int i = 1; i <= n*n; i++){
		matrix[row][column] = i;
		rowTemp = (row-1) % n;
		columnTemp = (column+1) % n;
		if (rowTemp < 0) {
			rowTemp = n + rowTemp;
		}

		if (matrix[rowTemp][columnTemp] != 0) {
			row += 1;
		}
		else { row = rowTemp; column = columnTemp; }

	}

}

int main(){
	int n;
	cin >> n;
	
	if (n < 3) {
		cout << "Please Input Number that is greater than or equal to 3!" << endl;
		return 0;
	}

	else if ( n%2 != 1) {
		cout << "Please Input Odd Number!" << endl;
		return 0;
	}


	int** matrix = new int*[n];
	for (int i = 0 ; i < n; i++) {
		matrix[i] = new int[n];
	}
	
	
	magicSquare(matrix,n);


	for (int i = 0 ; i < n; i++) {
		for (int j = 0 ; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0 ; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;


	return 0;


}
