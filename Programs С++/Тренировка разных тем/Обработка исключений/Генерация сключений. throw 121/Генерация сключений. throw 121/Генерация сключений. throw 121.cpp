// Генерация сключений. throw 121.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

using namespace std;

void func(int value)
{
	cout << "Функция вывода положительной int переменной: " << endl;

	if (value < 0)
	{
		//throw value;
		//throw "Число < 0";
		throw exception("Число < 0");
	}
	cout << value << endl;
}

int main()
{
	setlocale(0, "rus");

	try
	{
		func(-5);
	}	
	//catch (const int ex)
	//{
	//	cout << "Обработанно исключение " << ex << endl;
	//}
	//catch (const char* ex)
	//{
	//	cout << "Обработанно исключение: " << ex << endl;
	//}
	catch (const exception &ex)
	{
		cout << "Обработанно исключение: " << ex.what() << endl;
	}

	return 0;
}
