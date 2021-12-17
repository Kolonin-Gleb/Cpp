// page 220 task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <cmath>
#include <Windows.h>

#include "Functions.h"
#include "Matrix functions.h"

using namespace std;

int extern  gMinNumber, gMaxNumber;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));

    short int matrixSize = 0;

    enter(&matrixSize);
    check(&matrixSize);

    enter(&gMinNumber, &gMaxNumber);
    check(&gMinNumber, &gMaxNumber);


    int** userMatrix = new int* [matrixSize];

    create(userMatrix, &matrixSize);
    fill(userMatrix, &matrixSize);

    cout << "Ваша матрица: " << endl;
    show(userMatrix, &matrixSize);
    cout << endl << endl;

    // Действия над созданной матрицей

    short arraySize = countOddRowsInMatrix(&matrixSize);

    // массив, хранящий произведения элементов нечётных строк матрицы пользователя
    int* arrayOfMultiplications = new int[arraySize];

    initArrayOfMultiplications(userMatrix, arrayOfMultiplications, &matrixSize, &arraySize);

    cout << "Произведение нечетных строк вашей матрицы: " << endl;
    show(arrayOfMultiplications, &arraySize);

    changeSimpleNumbersAlongSideDiagonal(userMatrix, &matrixSize);
    cout << "Ваша матрица, в которой простые числа в побочной диагонали были заменены на сумму" << endl;
    cout << "цифр максимального числа находящегося в одной строке с простым числом" << endl;
    show(userMatrix, &matrixSize);

    deleteMatrix(userMatrix, &matrixSize);

    system("pause");
    return 0;
}
