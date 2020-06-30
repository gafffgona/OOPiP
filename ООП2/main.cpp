#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	char line[256], numbers[256] = ""; // Выделяем память
	cout << "Enter line: ";
	cin.getline(line, 256); // Вводим строку
	for (char s = 57; s >= 48; s--) // 57 - цифра 9, 48 - цифра 0, Проходим строку для каждой цифры
		for (int i = 0; i < strlen(line); i++) // Проходим строку
			if (s == line[i]) {
				char str[2] = ""; // Память для цифр
				str[0] = s;
				strcat(numbers, str); // Вставляем цифру в вспомогательный массив
			}

	int j = 0;
	for (int i = 0; i < strlen(line); i++)
		if (line[i] > 47 && line[i] < 58)
			line[i] = numbers[j++]; // Вставляем в исходный массив

	cout << "Result: " << line << endl; // Выводим результат
	return 0;
}