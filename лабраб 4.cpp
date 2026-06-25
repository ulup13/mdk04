#include <iostream>

int main()
{
	setlocale(0, "");
	using namespace std;
	int a[10];
	int sum = 0;
	cout << "Введите элементы массива: \n";
	for (int i = 0;i < 10;i++) {
		cin >> a[i];
	}
	cout << "\nИсходный массив: " << endl;
	for (int i = 0;i < 10;i++) {
		cout << "a[" << i << "]=" << a[i]<<endl;
	}
	cout << "\nЭлементы массива в диапазоне [0...10] умножены на 3: \n";
	for (int i = 0;i < 10;i++) {
		if (a[i] < 0){
			sum++;
		}
		if ((a[i] >= 0) && (a[i] <= 10)) {
			a[i] *= 3;
		}
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	cout << "\nКоличество отрицательных чисел " << sum << endl;
	return 0;
}
*aaaaaaa*