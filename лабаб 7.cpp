#include <iostream>
#include <algorithm>
using namespace std;

void outArr(int** a, int m, int n, string message) {
	cout << "\n" << message << "\n";
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	setlocale(0, "");

	int m, n;
	cout << "Введите количество строк ";
	cin >> m;
	cout << "Введите количество столбцов ";
	cin >> n;
	int** a = new int* [m];
	for (int i = 0;i < m;i++) {
		a[i] = new int[n];
	}
	cout << "Введите элементы массива \n";
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
	outArr(a, m, n, "Исходный массив: ");
	for (int i = 0;i < (m / 2);i++) {
		swap(a[i], a[m - 1 - i]);
	}
	outArr(a, m, n, "Перестановка строк: ");
	return 0;
}
