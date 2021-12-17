// Запись объекта в файл.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
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

	void print()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
		cout << "Z = " << z << endl;
	}
};


int main()
{
	setlocale(0, "rus");

	string path = "File.txt";
	// Сохранение объекта в файл
	//Point GlebPoint(22, 11, 2004);

	//ofstream fout;
	//fout.open(path, ofstream::app);
	//if (fout.is_open())
	//{
	//	cout << "Файл открыт! " << endl;
	//	// GlebPoint - объект, информация о котором будет записываться в файл
	//	fout.write((char*)&GlebPoint, sizeof(Point));
	//}
	//else
	//{
	//	cout << "Ошибка открытия файла! " << endl;
	//}

	//fout.close();

	// Чтение объекта из файла
	ifstream fin;
	fin.open(path);

	if (fin.is_open())
	{
		cout << "Файл открыт! " << endl;
		cout << "Иформация из файла: " << endl;
		Point pnt; // Объект, в который будет считываться информация из файла.

		while (fin.read((char*)&pnt, sizeof(Point)))
		{
			pnt.print();
		}
	}
	else
	{
		cout << "Ошибка открытия файла! " << endl;

	}
	fin.close();
	return 0;
}
