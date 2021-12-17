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

	cout << "Вы имеете " << inventory.size() << " предметов"<< endl;
	cout << "Ваши предметы: " << endl;
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "Вы обменяли броню на 2 меч" << endl;
	inventory[1] = "sword";

	cout << "Ваш щит сломался!" << endl;
	inventory.pop_back();

	cout << "Вы имеете " << inventory.size() << " предметов" << endl;
	cout << "Ваши предметы: " << endl;
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "Вас обокрали!" << endl;
	inventory.clear();
	cout << "Вы имеете " << inventory.size() << " предметов" << endl;
	cout << "Ваши предметы: " << endl;
	if (inventory.empty())
	{
		cout << "У вас ничего нет!" << endl;
	}
	else
	{
		for (int i = 0; i < inventory.size(); i++)
		{
			cout << inventory[i] << endl;
		}
	}
	
	system("pause");
	return 0;
}
