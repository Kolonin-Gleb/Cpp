// Собственный класс exception 123.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class MyException : public exception
{
public:
	MyException(const char* msg, int dataState):exception(msg)
	{
		this->dataState = dataState;
	}

	int getDataState() 
	{
		return dataState;
	}
private:
	int dataState;
};

void func(int value)
{
	if (value < 0)
	{
		throw exception("Число < 0!");
	}
	else if (value == 24)
	{
		throw MyException("Запрещенное значение числа!", value);
	}
}

int main()
{
	setlocale(0, "rus");

	try
	{
		func(24);
	}
	catch (MyException& ex) // Более частный оработчик исключения
	{
		cout << ex.what() << endl;
		cout << ex.getDataState() << endl;;
	}
	catch (exception& ex)// Менее частный оработчик исключения
	{
		cout << ex.what() << endl;
	}
	catch (...)
	{
		cout << "Что-то пошло не так!" << endl;
	}

	cout << "" << endl;

	return 0;
}
