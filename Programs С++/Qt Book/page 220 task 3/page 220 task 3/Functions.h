#pragma once
// Функции для работы установки параметров матрице

#include <iostream>
using namespace std;

// Функция запроса у пользователя размера матрицы
void enter(short int* matixSize);

// Функция проверки размера матрицы указанного пользователем
void check(short int* matixSize);

// Функция запроса у пользователя диапозона для ГСЧ
void enter(int* Min_number, int* Max_number);

// Функция проверки диапозона для ГСЧ, указанного пользователем
void check(int* Min_number, int* Max_number);
