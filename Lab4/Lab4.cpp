#include <iostream>
#include <algorithm>

using namespace std;



int main() {
	setlocale(LC_ALL, "rus");
	/* лабораторная работа номер 4
	* вариант 3
	*/ 

	// пункт 1
	int array[6];
	int tmp;
	cout << "ввод данных массива:" << endl;

	for (int i = 0; i < size(array); i++) {
		cout << "index " << i << " >> ";
		cin >> tmp;
		array[i] = tmp;
	}

	cout << "конец ввода данных" << endl;

	for (int i = 0; i < (size(array) - 1); i++) {
		if (array[i] == array[i + 1]) {
			sort(array, array + size(array));
			break;
		}
	}

	cout << "результат:" << endl;
	for (int i : array) {
		cout << i << endl;
	}
	// пункт 2

	int matrix[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "index " << i << " " << j << " >> ";
			cin >> tmp;
			matrix[i][j] = tmp;
		}
	}
	int maxSum = 0;
	int maxSumIndex;
	int sum;
	int tmparr[4];
	for (int i = 0; i < 3; i++) {
		sum = 0;

		for (int j = 0; j < 4; j++) {
			sum += matrix[i][j];
		}

		if (sum > maxSum) {
			maxSum = sum;
			maxSumIndex = i;
		}
	}

	for (int j = 0; j < 4; j++) {
		matrix[maxSumIndex][j] = 0;
	}



	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}