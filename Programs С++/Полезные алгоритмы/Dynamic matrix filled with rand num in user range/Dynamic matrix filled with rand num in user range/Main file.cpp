// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

// Значения для функции гсч. по умолчанию
int min_number = 0, max_number = 0;
int count_of_numbers_after_dot = 0;

void create(double** const matrix, const int rows, const int cols)
{
    for (int i = 0; i < rows; i++) // цикл, отвечющий за переход строки (создаёт столбцы)
    {
        matrix[i] = new double[cols];
    }
}

void fill(double** const matrix, const int rows, const int cols)
{
    for (int i = 0; i < rows; i++) // внеш. цикл, отвечает за переход по строкам
    {
        for (int j = 0; j < cols; j++) // внут. цикл, непосредственно заполняет столбцы
        {
            // Генерация целой части числа
            int integer_part_of_random_number = rand() % (max_number - min_number) + min_number;

            // Генерация дробной части числа

            // Данная переменная необходима для проведения вычислений
            int count_of_numbers_after_dot_using_for_calculation = 0;
            count_of_numbers_after_dot_using_for_calculation = count_of_numbers_after_dot;


            double fractional_part_of_number = 0.0;
            if (count_of_numbers_after_dot_using_for_calculation == 0) // не генерируем дробную часть числа
            {
                matrix[i][j] = integer_part_of_random_number;
            }
            else
            {
                // Заранее записываем целую часть в эл. матрицы
                matrix[i][j] = integer_part_of_random_number;
                while (count_of_numbers_after_dot_using_for_calculation > 0)
                {
                    fractional_part_of_number += rand() % 10; // 0 - 9
                    int accuracy_of_a_number =
                        pow(10, count_of_numbers_after_dot_using_for_calculation);
                    // Округление до определённого количества знаков после ,
                    fractional_part_of_number = round(fractional_part_of_number * 10) / 10; // Этот код никак не влияет на число!
                    fractional_part_of_number /= accuracy_of_a_number;

                    matrix[i][j] += fractional_part_of_number;
                    count_of_numbers_after_dot_using_for_calculation--;
                }
            }

        }
    }
}

void show(double** const matrix, const int rows, const int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

}

void delete_matrix(double** matrix, const int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

//_______________________________________________________________________________
//                                              Прочие функции

int check_count_rows_and_columns(int* rows, int* cols)
{
    cout << "Сколько строк должно быть в вашей матрице: ";
    cin >> *rows;
    cout << "Сколько столбцов должно быть в вашей матрице: ";
    cin >> *cols;
    while (*rows <= 0 || *cols <= 0)
    {
        cout << "Такого количества строк и/или столбцов не может быть в матрице!" << endl;
        cout << "Сколько строк должно быть в вашей матрице: ";
        cin >> *rows;
        cout << "Сколько столбцов должно быть в вашей матрице: ";
        cin >> *cols;
    }
    return *rows, * cols;
}

void set_range_for_rng(int* Min_number, int* Max_number)
{
    cout << "Введите целое число, от которого будут генерироваться случайные числа: ";
    cin >> *Min_number;

    cout << endl;

    cout << "Введите целое число, до которого будут генерироваться случайные числа: " << endl;
    cout << "Введённое число не будет генерироваться ";
    cin >> *Max_number;
}

void set_count_of_numbers_after_dot(int* Count_of_numbers_after_dot)
{
    cout << "Введите количество знаков после запятой (от 0 до 3): ";
    cin >> *Count_of_numbers_after_dot;

    while (*Count_of_numbers_after_dot < 0 || *Count_of_numbers_after_dot > 3)
    {
        cout << "Такого количества знаков после запятой не может быть!" << endl;
        cout << "Введите количество знаков после запятой: ";
        cin >> *Count_of_numbers_after_dot;
    }
}

int main()
{
    setlocale(0, "rus");
    srand(time(0));

    // Размеры матрицы по умолчанию:
    int rows = 10;
    int cols = 10;
    cout << "Введите размеры матрицы вещественных чисел: \n";
    check_count_rows_and_columns(&rows, &cols);

    set_range_for_rng(&min_number, &max_number);
    while (min_number >= max_number)
    {
        cout << "Минимальное число не может быть >= максимальному числу! " << endl;
        cout << "Введите числа заново!" << endl;
        set_range_for_rng(&min_number, &max_number);
    }

    set_count_of_numbers_after_dot(&count_of_numbers_after_dot);

    // Создание матрицы вещественных чисел
    double** userMatrix = new double* [rows];

    create(userMatrix, rows, cols);
    fill(userMatrix, rows, cols);
    cout << "Ваша матрица: " << endl;
    show(userMatrix, rows, cols);

    delete_matrix(userMatrix, rows);
    return 0;
}
