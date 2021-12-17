// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <ctime>

#include "Matrix functions.h"

using namespace std;

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\t\t\t\t\t\tТаблица умножения для вашего числа" << endl << endl;

	cout << "Введите число, с которого начнётся таблица умножения: ";
	int userNumber = 0;
	cin >> userNumber;
	cout << "Введите 1 число, на которое будет умножено ваше число: ";
	int firstNumber = 0;
	cin >> firstNumber;


	const int ROWS = 2;
	const int COLS = 10;

	int** multiplicationTable = new int*[ROWS];

	create(multiplicationTable, ROWS, COLS);

	fill(multiplicationTable, userNumber, firstNumber, ROWS, COLS);

	show(multiplicationTable, ROWS, COLS);

	deleteMatrix(multiplicationTable, ROWS);

	system("pause");
	return 0;
}
