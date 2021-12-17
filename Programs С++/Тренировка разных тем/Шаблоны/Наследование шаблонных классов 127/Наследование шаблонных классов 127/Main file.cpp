// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#include "Functions.h"

using namespace std;

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(double x, double y, double z)
	{
		this->x = x;
		this->x = y;
		this->x = z;
	}
private:
	double x;
	double y;
	double z;
};

template <class T1>
class TypeSize
{
public:
	TypeSize(T1 value)
	{
		this->value = value;
	}

	void dataTypeSize()
	{
		cout << "Объект занимает " << sizeof(value) << " байт в памяти" << endl;
	}
protected:
	T1 value;
};

template<class T1>
class TypeInfo : public TypeSize<T1>
{
public:
	TypeInfo(T1 value) : TypeSize<T1>(value)
	{
	
	}
	void showTypeName()
	{
		cout << "Название типа объекта " << typeid(TypeSize<T1>::value).name() << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Point a;

	TypeInfo<Point> c(a);
	c.showTypeName();
	c.dataTypeSize();


	system("pause");
	return 0;
}
