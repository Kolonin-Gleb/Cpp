// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <iomanip>

#include "Functions.h"

using namespace std;

// Чтобы передать матрицу в функцию, его необходимо интерпретировать
// как одномерный, и передавать количество строк и столбцов.

void fillMatrix(int arr[], size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            arr[i * cols + j] = i * cols + j;
        }
    }
}

void showMatrix(int arr[], size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cout << setw(2) << arr[i * cols + j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


    const size_t rows = 3;
    const size_t cols = 4;
    int matrix[rows][cols];
    
    fillMatrix(reinterpret_cast<int*>(matrix), rows, cols);
    
    showMatrix(reinterpret_cast<int*>(matrix), rows, cols);

	system("pause");
	return 0;
}
