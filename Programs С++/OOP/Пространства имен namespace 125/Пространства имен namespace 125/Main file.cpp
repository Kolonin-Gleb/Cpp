// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#include "Functions.h"

using namespace std;

namespace myNamespace
{
	void hello()
	{
		cout << "Hello, world!" << endl;
	}
	void goodbye()
	{
		cout << "Goodbye, world!" << endl;
	}
	namespace myNamespaceWords
	{
		string word = "world";

	}
}

using myNamespace::hello;
using myNamespace::myNamespaceWords::word;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << word << endl;

	hello();

	//goodbye(); - недоступно

	system("pause");
	return 0;
}
