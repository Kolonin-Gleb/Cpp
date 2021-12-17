// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#include "Functions.h"

using namespace std;

template <typename T>
T Sum (T a, T b)
{
	return a + b;
}

template <typename T1, typename T2>
void show(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << Sum(4.454, 7.999) << endl;
	cout << Sum(4, 7) << endl;

	show(24, "Номер");

	system("pause");
	return 0;
}
