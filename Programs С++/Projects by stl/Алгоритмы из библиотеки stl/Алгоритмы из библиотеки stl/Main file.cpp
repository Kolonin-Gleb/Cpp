// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Создание таблицы рекордов..." << endl;
	vector<int> scores;

	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);
	scores.push_back(8500);
	scores.push_back(900);

	cout << "\nТаблица рекордов" << endl;
	for (int i = 0; i < scores.size(); i++)
	{
		cout << scores[i] << endl;
	}

	cout << "\n\t\tПоиск по таблице рекордов..." << endl;

	cout << "Введите счёт рекорда для его поиска:";
	int score = 0;
	cin >> score;

	// Поиск при помощи итератора
	vector<int>::const_iterator iter;

	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end())
	{
		cout << "Счёт = " << score << " есть в таблице рекордов" << endl;
	}
	else
	{
		cout << "Счёт = " << score << " нет в таблице рекордов" << endl;
	}

	cout << "\n\t\tПеремешивание таблицы рекордов..." << endl;

	random_shuffle(scores.rbegin(), scores.rend());

	cout << "\nТаблица рекордов" << endl;
	for (int i = 0; i < scores.size(); i++)
	{
		cout << scores[i] << endl;
	}

	cout << "\n\t\tСортировка таблицы рекордов по возрастанию..." << endl;
	sort(scores.begin(), scores.end());

	cout << "\nТаблица рекордов" << endl;
	for (int i = 0; i < scores.size(); i++)
	{
		cout << scores[i] << endl;
	}

	cout << "\n\t\tСортировка таблицы рекордов по убыванию..." << endl;
	sort(scores.rbegin(), scores.rend());

	cout << "\nТаблица рекордов" << endl;
	for (int i = 0; i < scores.size(); i++)
	{
		cout << scores[i] << endl;
	}

	system("pause");
	return 0;
}
