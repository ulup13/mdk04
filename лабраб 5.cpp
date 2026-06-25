#include <iostream>
#include <algorithm>

int main()
{
	setlocale(0, "");
	using namespace std;

	int m, n;
	cout << "Введите количество строк ";
	cin >> m;
	cout << "Введите количество столбцов ";
	cin >> n;
	int **a = new int*[m];
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
	cout << "Массив: ";
	for (int i = 0;i < m;i++) {
		cout << endl;
		for (int j = 0;j < n;j++) {
			cout << a[i][j]<<"\t";
		}
	}
	for (int i = 0;i < (m / 2);i++) {
		swap(a[i], a[m - 1 - i]);
	}
	cout << "\nперестановка строк: \n";
	for (int i = 0;i < m;i++) {
		cout << endl;
		for (int j = 0;j < n;j++) {
			cout << a[i][j] << "\t";
		}
	}
	return 0;
}
