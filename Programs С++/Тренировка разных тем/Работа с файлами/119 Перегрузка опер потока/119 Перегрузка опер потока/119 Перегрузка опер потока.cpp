// 119 Перегрузка опер потока.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

using namespace std;

class Point
{
public:
	int x;
	int y;
	int z;

	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

// Перегрузка оператора вывода информации в файл/консоль
ostream& operator<<(ostream& os, const Point& point)
{
	// Реализация вывода объекта
	os << point.x << " " << point.y << " " << point.z;

	// Непосредственный вывод объекта
	return os;
}

// Перегрузка оператора считывания данных из файла
istream& operator>>(istream& is, Point& point)
{
	// Реализация считывания данных объекта
	is >> point.x >> point.y >> point.z; // TODO: Запись не происходит

	return is;
}

int main()
{
	setlocale(0, "rus");

	string path = "File.txt";

	Point point(22, 11, 2004);

	// Вывод объекта в консоль
	// cout << point;

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (fs.is_open())
	{
		cout << "Файл открыт!" << endl;
		cout << "Запись информации из объекта в файл: " << endl;
		fs << point << endl;

		cout << "Запись информации из файла в объект: " << endl;
		Point GlebPoint;
		fs >> GlebPoint; // TODO: Не получается записать информацию!
		cout << "Запись произведена!" << endl;

		cout << "Вот данные объекта, которые были записаны из файла:" << endl;
		cout << GlebPoint;
	}
	else
	{
		cout << "Ошибка открытия файла!" << endl;
	}

	fs.close();

	return 0;
}
