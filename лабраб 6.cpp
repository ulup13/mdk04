#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	setlocale(0, "");
	char s[500];
	char word[10][6];
	int count = 0; //количество слов
	cout << "Введите десять пятибуквенных слов ";
	cin.getline(s, 500);
	int len = strlen(s);
	int i = 0;
s	while (i < len && count < 10) {
		while (i < len && s[i] == ' ') {
			i++;
			if (i >= len) break;
		}
		int j = 0; //количество букв
		while (i < len && s[i] != ' ') {
			word[count][j++] = s[i++];
		}
		word[count][j] = '\0';
		count++;
		if (j != 5) {
			cout << "Ошибка. Неверное количество букв(";
			return 0;
		}
	}
	if (count != 10) {
		cout << "Неверное количество слов";
		return 0;
	}
	for (int j = 0;j < 9 - i;j++) {
		if (strcmp(word[j], word[j + 1]) > 0) {
			char temp[6];
			strcpy_s(temp, word[j]);
			strcpy_s(word[j], word[j + 1]);
			strcpy_s(word[j + 1], temp);
		}
	}
	cout << "Слова переставлены в алфавитном порядке \n";
	for (int i = 0;i < 10;i++) {
		cout << word[i] << endl;
	}
	return 0;
}
