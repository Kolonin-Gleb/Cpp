#include "Functions.h"


void enter(short int* colsmatixSize)
{
    cout << "–азмер матрицы не может быть > 100 и <= 0" << endl;
    cout << "¬ведите размеры квадратной матрицы целых чисел: ";
    cin >> *colsmatixSize;
}

void check(short int* matixSize)
{
    while (*matixSize <= 0 || *matixSize > 100)
    {
        cout << "Ќедопустимый размер матрицы!" << endl;
        enter(matixSize);
    }
}

void enter(int* Min_number, int* Max_number)
{
    cout << "¬ведите целое число, от которого будут генерироватьс€ случайные числа: ";
    cin >> *Min_number;

    cout << endl;

    cout << "¬ведите целое число, до которого будут генерироватьс€ случайные числа: " << endl;
    cout << "¬ведЄнное число не будет генерироватьс€ ";
    cin >> *Max_number;
}

void check(int* Min_number, int* Max_number)
{
    while (*Min_number >= *Max_number)
    {
        cout << "ћинимальное число не может быть >= максимальному числу! " << endl;
        cout << "¬ведите числа заново!" << endl;
        enter(Min_number, Max_number);
    }
}
