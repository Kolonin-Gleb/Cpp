#include "Array functions.h"

void createMatrix(int ** const arrayName, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++) // внеш. цикл, отвечает за переход строки (заполняет столбцы)
	{
		arrayName[i] = new int[cols];
	}
}

void fillMatrix(int ** const arrayName, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++) // внеш. цикл, отвечает за переход строки
	{
		for (int j = 0; j < cols; j++) // внут. цикл, непосредственно заполняет столбцы
		{
			arrayName[i][j] = rand() % 10;
		}
	}
}

void showMatrix(int ** const arrayName, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arrayName[i][j] << "\t";
		}
		cout << endl;
	}
}

void copyMatrix(int** const copyingArray, int** copiedArray, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			copiedArray[i][j] = copyingArray[i][j];
		}
	}
}

void deleteMatrix(int** arrayName, const int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arrayName[i];
	}
	delete[] arrayName;
}

// Не используется в данной программе
void randomizeArray(string array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		swap(array[i], array[rand() % size]);
	}
}
