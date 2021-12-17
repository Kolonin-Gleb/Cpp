// Order of called constructors during inheritance 100.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "Вызвался конструктор класса A" << endl;
	}

};

class B : A
{
public:
	B()
	{
		cout << "Вызвался конструктор класса B" << endl;
	}

};


int main()
{
	setlocale(0, "rus");
    
	B objectOfClassB;




    return 0;
}
