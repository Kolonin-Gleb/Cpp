// Порядок вызова деструкторов при наследовании.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class A
{
public:

	A()
	{
		cout << "Вызвался конструктор класса А" << endl;
	}

	~A()
	{
		cout << "Вызвался деструктор класса А" << endl;
	}
};

class B
{
public:

	B()
	{
		cout << "Вызвался конструктор класса B" << endl;
	}

	~B()
	{
		cout << "Вызвался деструктор класса B" << endl;
	}
};

class C
{
public:

	C()
	{
		cout << "Вызвался конструктор класса C" << endl;
	}

	~C()
	{
		cout << "Вызвался деструктор класса C" << endl;
	}
};

int main()
{
    setlocale(0, "rus");

	A a;

    return 0;
}
