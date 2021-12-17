#pragma once
// Функции создающие матрицу по параметрам

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int extern  gMinNumber, gMaxNumber;
int extern gCountOfNumbersAfterDot;

// Функция создающая колонки для полученного массива указателей
void create(int** const matrix, const short* matrixSize);

// Функция заполняющая 2х мерный массив случайными числами в указанном диапозоне
void fill(int** const matrix, const short* matrixSize);

// Функция генерирующая целую часть случайного числа в указанном диапозоне
// Она принимает переменную, в которое будет записана целая часть случайного числа 
void generate(int* integerPartOfRN);

// Функция вывода 2х мерного массива
void show(int** const matrix, const short* matrixSize);

// Функция вывода 1 мерного массива
void show(int* const array, const short* arraySize);

// Функция удаления 2х мерного массива
void deleteMatrix(int** matrix, const short* matrixSize);

//
// Дополнительные функции
//

// Функция, инициализирующая массив произведением элементов нечётных строк матрицы
void initArrayOfMultiplications(int** const matrix, int* const arrayOfMultiplications, const short* const matrixSize, const short* const arraySize);

// Функция определяющая количество нечётных строк в матрице
short int countOddRowsInMatrix(const short* rows);

// Функция считающая поизведение элементов строки матрицы
//int productNumbersInMatrixRow(int** const array2d, const int* rowNumber, short* colNumber);
int multiplicationOfElements(const int* const arrayRow, const short* const rowLength);

// Функция заменяющая простые числа в побочной диагонали матрицы 
// на сумму цифр максимального числа находящегося в одной строке с простым числом
// Если число, которое является максимальным и простое число в побочной диагонали это одно и тоже число,
// то произойдёт замена этого числа на сумму его цифр
void changeSimpleNumbersAlongSideDiagonal(int** const matrix, const short* const matrixSize);

// Функция определяющая является ли число простым
bool isNumberSimple(int* const numberForCheck);

// Функция определяющая максимальное число в строке
int findMaxNumber(const int* const arrayRow, const short* const rowLength);

// Функция считающая сумму цифр полученного числа
int sumOfNumerals(int* const number);
