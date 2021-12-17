// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <ctime>

#include "Array functions.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	cout << "Создание 2x мерной динамической матрицы" << endl;

	int rows = 0;
	int cols = 0;
	cout << "Введите количество строк матрицы: ";
	cin >> rows;
	cout << "Введите количество столбцов матрицы: ";
	cin >> cols;

	int** matrix1 = new int* [rows];
	int** matrix2 = new int* [rows];


	cout << "Первая матрица с случайными значениями: " << endl;
	createMatrix(matrix1, rows, cols);
	fillMatrix(matrix1, rows, cols);
	showMatrix(matrix1, rows, cols);
	cout << "Вторая матрица с случайными значениями: " << endl;
	createMatrix(matrix2, rows, cols);
	fillMatrix(matrix2, rows, cols);
	showMatrix(matrix2, rows, cols);

	cout << "Данные какой матрицы (1 или 2) вы хотите копировать? " << endl;
	int userChoice = 0;
	cin >> userChoice;

	while (!(userChoice == 1 || userChoice == 2))
	{
		cout << "Матрицы под таким номером не существует!" << endl;
		cout << "Данные какой Матрицы (1 или 2) вы хотите копировать? " << endl;
		cin >> userChoice;
	}

	if (userChoice == 1)
	{
		copyMatrix(matrix1, matrix2, rows, cols);
	}
	if (userChoice == 2)
	{
		copyMatrix(matrix2, matrix1, rows, cols);
	}

	cout << "Массивы после копирования: " << endl;
	cout << "Первый 2x мерный массив с случайными значениями: " << endl;
	showMatrix(matrix1, rows, cols);
	cout << "Второй 2x мерный массив с случайными значениями: " << endl;
	showMatrix(matrix2, rows, cols);

	deleteMatrix(matrix1, rows);
	deleteMatrix(matrix2, rows);


	system("pause");
	return 0;
}
