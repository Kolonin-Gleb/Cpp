// Несколько блоков catch 122.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


void func(int value)
{
	if (value < 0)
	{
		throw exception("Ошибка класса exception!\n Число < 0!");
	}
	else if (value == 0)
	{
		throw exception("Ошибка класса exception!\n Число = 0!");
	}
	else if (value == 1)
	{
		throw 1;
	}

	cout << "Переменная = "  << value << endl;
}


int main()
{
	setlocale(0, "rus");

	try
	{
		func(4);
	}
	catch (const std::exception& ex) 
	{
		cout << "Поймана ошибка!" << endl;
		cout << ex.what() << endl;
	}
	catch (const char* ex)
	{
		cout << "Поймана ошибка!" << endl;
		cout << ex << endl;
	}
	catch (...)
	{
		cout << "Что-то пошло не так!" << endl;
	}

	return 0;
}
