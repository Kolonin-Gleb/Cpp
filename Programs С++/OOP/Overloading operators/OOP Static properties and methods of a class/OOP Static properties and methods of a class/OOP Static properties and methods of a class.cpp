// OOP Static properties and methods of a class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


class point
{
int x, y;

static int count;

public:
	point()
	{
		cout << "Создаётся точка с номером " << ++count << endl;
	}
	~point()
	{ 
		cout << "Разрушается точка с номером " << count-- << endl;
	}
};
int point :: count;
//Помимо соответствующего описания в классе, статическая переменная - член
//класса должна быть дополнительно объявлена в программе в качестве глобаль -
//ной переменной с указанием её принадлежности классу

void main()
{
	setlocale(0, "rus");

	point a, b, c;
}