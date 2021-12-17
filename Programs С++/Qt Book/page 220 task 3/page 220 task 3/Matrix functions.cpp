#include "Matrix functions.h"

void create(int** const matrix, const short* matrixSize)
{
    for (short i = 0; i < *matrixSize; i++) // цикл, идущий по строкам и создающий столбцы
    {
        matrix[i] = new int[*matrixSize];
    }
}

void fill(int** const matrix, const short* matrixSize)
{
    for (short i = 0; i < *matrixSize; i++)
    {
        for (short j = 0; j < *matrixSize; j++) // внут. цикл, заполняет столбцы
        {
            int randomNumber = 0;
            generate(&randomNumber);

            matrix[i][j] = randomNumber;
        }
    }
}

void generate(int* randomNumber)
{
    *randomNumber = rand() % (gMaxNumber - gMinNumber) + gMinNumber;
}

void show(int** const matrix, const short* matrixSize)
{
    for (short i = 0; i < *matrixSize; i++)
    {
        for (short j = 0; j < *matrixSize; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void show(int* const array, const short* arraySize)
{
    for (short j = 0; j < *arraySize; j++)
    {
        cout << array[j] << "\t";
    }
    cout << endl;
}

void deleteMatrix(int** matrix, const short* matrixSize)
{
    for (short i = 0; i < *matrixSize; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

//
// Дополнительные функции
//

void initArrayOfMultiplications(int** const matrix, int* const arrayOfMultiplications, const short* const matrixSize, const short* const arraySize)
{
    short count = 0;
    for (short matrixRow = 1; matrixRow < *matrixSize + 1; matrixRow++)
    {
        if (matrixRow % 2 != 0)
        {
            arrayOfMultiplications[count] = multiplicationOfElements(matrix[matrixRow - 1], matrixSize);
            count++;
        }
    }
}

short int countOddRowsInMatrix(const short* rows)
{
    if (*rows % 2 == 0)
    {
        return *rows / 2;
    }
    else return *rows / 2 + 1;
}

int multiplicationOfElements(const int* const arrayRow, const short* const rowLength)
{
    int multiplicationResult = 1;
    for (short rowElement = 0; rowElement < *rowLength; rowElement++)
    {
        multiplicationResult *= arrayRow[rowElement];
    }
    return multiplicationResult;
}


void changeSimpleNumbersAlongSideDiagonal(int** const matrix, const short* const matrixSize)
{
    for (short rowNumber = 0; rowNumber < *matrixSize; rowNumber++)
    {
        if (isNumberSimple(&matrix[rowNumber][*matrixSize - 1 - rowNumber]))
        {
            int tmp = findMaxNumber(matrix[rowNumber], matrixSize);
            matrix[rowNumber][*matrixSize - 1 - rowNumber] = sumOfNumerals(&tmp);
        }
    }
}

bool isNumberSimple(int* const numberForCheck)
{
    if (*numberForCheck == 1)
    {
        return false;
    }
    else if (*numberForCheck == 2 || *numberForCheck == 3)
    {
        return true;
    }
    else if ((*numberForCheck * *numberForCheck) % 24 == 1)
    {
        return true;
    }

    return false;
}

int findMaxNumber(const int* const arrayRow, const short* const rowLength)
{
    int maxNumberInMatrixRow = arrayRow[0];
    for (short elementInRow = 1; elementInRow < *rowLength; elementInRow++)
    {
        if (maxNumberInMatrixRow < arrayRow[elementInRow])
        {
            maxNumberInMatrixRow = arrayRow[elementInRow];
        }
    }
    return maxNumberInMatrixRow;
}

int sumOfNumerals(int* const number)
{
    int sumOfNumerals = 0;
    while (*number != 0)
    {
        sumOfNumerals += *number % 10;
        *number /= 10;
    }
    return sumOfNumerals;
}