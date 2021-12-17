#include "Matrix functions.h"

void create(int** const matrixName, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		matrixName[i] = new int[cols];
	}
}

void fill(int** const matrixName, const int startNumber, const int firstNumber, const int rows, const int cols)
{
	matrixName[0][0] = 0;

	int colNumber = firstNumber;

	for (int i = 1; i < rows; i++)
	{
		matrixName[i][0] = startNumber;
	}
	for (int j = 1; j < cols; j++)
	{
		matrixName[0][j] = colNumber++;
	}

	for (int i = 1; i < rows; i++)
	{
		for (int j = 1; j < cols; j++)
		{
			matrixName[i][j] = startNumber * matrixName[0][j];
		}
	}
}

void show(int** const matrixName, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			cout << matrixName[i][j] << "\t";
		}
		cout << endl;
	}
}

void deleteMatrix(int** const matrixName, const int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] matrixName[i];
	}
	delete[] matrixName;
}