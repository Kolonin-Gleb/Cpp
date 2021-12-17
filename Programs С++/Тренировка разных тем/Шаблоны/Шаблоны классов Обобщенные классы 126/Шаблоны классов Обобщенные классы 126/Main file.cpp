// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#include "Functions.h"

using namespace std;

class Point
{
public:
	double x;
	double y;
	double z;

	Point()
	{
		x = y = z = 0;
	}
	Point(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

template <typename T1, typename T2>
class MyClass
{
public:

	MyClass(T1 value, T2 value2)
	{
		this->value = value;
		this->value2 = value2;
	}

	void dataTypeSize()
	{
		cout << "value 1 " << sizeof(value) << endl;
		cout << "value 2 " << sizeof(value2) << endl;
	}

	//T1 getDataTypeSize()
	//{
	//	return sizeof(value);
	//}
private:
	T1 value;
	T2 value2;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Point point;
	int a = 2;
	int b = 4;
	MyClass<int, Point> myClass(a, point);

	myClass.dataTypeSize();

	system("pause");
	return 0;
}
