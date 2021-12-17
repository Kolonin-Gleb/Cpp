// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<string> inventory;

	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	// Итераторы

	vector<string>::iterator Iterator;
	vector<string>::const_iterator ITERATOR;

	cout << "Ваши предметы: " << endl;
	for (ITERATOR = inventory.begin(); ITERATOR != inventory.end(); ++ITERATOR)
	{
		cout << *ITERATOR << endl;
	}



	cout << "\nТест изменения значения элемента вектора с использование итератора " << endl << endl;

	cout << "Вы продали ваш меч и купили боевой топор" << endl;
	Iterator = inventory.begin();

	*Iterator = "battle axe";

	cout << "Ваши предметы: " << endl;
	for (ITERATOR = inventory.begin(); ITERATOR != inventory.end(); ++ITERATOR)
	{
		cout << *ITERATOR << endl;
	}



	cout << "\nТест различных вариантов синтаксиса, для применения функции челна к элементу вектора " << endl << endl;

	cout << "В названии предмета \"" << *Iterator << "\" вашего инвентаря " << (*Iterator).size() << " букв"<< endl;
	cout << "В названии предмета \"" << *Iterator << "\" вашего инвентаря " << Iterator->size() << " букв" << endl;

	
	cout << "\nТест функции члена insert() и того, как сбиваются значения, на которые указывали итераторы " << endl;

	cout << "Iterator указывает на 1 элемент инвентаря" << endl;
	//Iterator = inventory.begin();

	cout << "Вы убили врага и забрали его арбалет" << endl;
	inventory.insert(inventory.begin(), "crossbow");

	cout << "Ваши предметы: " << endl;
	for (ITERATOR = inventory.begin(); ITERATOR != inventory.end(); ++ITERATOR)
	{
		cout << *ITERATOR << endl;
	}

	cout << "Сработала функция insert(), сбивающая все итераторы (т.к. новый элемент был добавлен в начало)" << endl;

	cout << "Значение Iterator прсле этого (ранее указывал на 1 элемент инвентаря)" << endl;
	cout << "Вывести его невозможно, из-за вызванной ошибки!" << endl;
	//cout << *Iterator << endl; Не сработает из-за ошибки!



	cout << "\nТест функции члена erase()" << endl;

	cout << "В этой яростной битве ваш доспех развалился!" << endl;


	inventory.erase(inventory.begin()+2);

	cout << "Ваши предметы: " << endl;
	for (ITERATOR = inventory.begin(); ITERATOR != inventory.end(); ++ITERATOR)
	{
		cout << *ITERATOR << endl;
	}

	system("pause");
	return 0;
} 
