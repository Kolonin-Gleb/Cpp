// Вызов констр баз класса из констр класса-наследника 102.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Вызов конструктора базового класса из конструктора класса-наследника 102

#include <iostream>
#include <cstring>

using namespace std;

class A
{
public:
	A()
	{
		cout << "Конструктор класса А без параметров" << endl;
	}

	A(string msg)
	{
		cout << "Конструктор класса А с параметрами" << endl;
		this->msg = msg;
	}

	void printMsg()
	{
		cout << msg << endl;
	}

	~A()
	{
		cout << "Деструктор класса А" << endl;
	}

private:
	string msg;
};

class B : public A
{
public:
	B():A("Новое сообщение")
	{
		cout << "Конструктор класса B без параметров" << endl;
	}

	~B()
	{
		cout << "Деструктор класса B" << endl;
	}
private:

};

int main()
{
    setlocale(0, "rus");

	A a("Моё сообщение");
	a.printMsg();

	B b;
	b.printMsg();
    return 0;
}

