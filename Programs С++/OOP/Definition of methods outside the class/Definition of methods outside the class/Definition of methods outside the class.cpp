// Definition of methods outside the class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int number_of_clone = 0;

class Person
{
	string name;
	int age;
public:

	// Прототипы конструкторов по умолчанию и деструкторов
	Person();
	~Person();

	// Прототипы конструкторов с параметрами
	Person(string name, int age);

	// Прототипы методов
	void Print();

	// Прототипы перегрузки операторов
	Person& operator ++();
	
};

	//Реализация конструкторов и деструкторов по умолчанию
Person::Person()
{
	name = "Anonim";
	age = 0;
}
Person::~Person()
{
}
	//Реализация конструкторов с параметрами
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Person::Print()
{
	cout <<"Имя " << name << endl;
	cout <<"Возраст " << age << endl;
}
	// Реализации перегрузки операторов
Person& Person::operator++()
{
	{
		++age;
		number_of_clone++;
		string name_of_clone = to_string(number_of_clone);
		name += "_" + name_of_clone;

		return *this;
	}
}

	//Реализация методов


int main()
{
	setlocale(0, "rus");
	Person Anonim;
	Anonim.Print();
	Person Neo("Neo", 24);
	Neo.Print();

	int i = 0;
	while (i < 10)
	{
		i++;
		++Neo;
	}
	Neo.Print();


    return 0;
}
