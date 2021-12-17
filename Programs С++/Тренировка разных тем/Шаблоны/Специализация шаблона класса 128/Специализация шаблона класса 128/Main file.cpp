// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#include "Functions.h"

using namespace std;

template<class T>
class Printer
{
public:

	void print(T  value) // стандартная реализация
	{
		cout << value << endl;
	}

private:

};


template<>
class Printer<string> // особенная реализация для типа string
{
public:
	// Т.к. компилятор видит, что существует реализация
	// метода print для string value, он не реалиует её сам,
	// а будет использовать существующую (эту)
	void print(string value)
	{
		cout << "___" <<value << "___" << endl;
	}
};

template<>
class Printer<int>
{
public:
	// Т.к. компилятор видит, что существует реализация
	// метода print для int value, он попытается её использовать,
	// но т.к. непосредственная реализация отсутствует, 
	// метод print для int value НЕ БУДЕТ РАБОТАТЬ!

	void print(int value)
	{
		// Запрет на печать int значений
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Printer<string> printer;
	//printer.print(4); // error!
	printer.print("###");
	system("pause");
	return 0;
}
