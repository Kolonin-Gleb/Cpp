// Чтение и запись в файл используя класс fstream.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(0, "rus");

	string path = "File.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app); // | - побитовое или

	if (fs.is_open())
	{
		bool fileAction;
		cout << "Файл открыт!" << endl;
		cout << "Нажмите 0 для чтения всей информации файла " << endl;
		cout << "Нажмите 1 для записи информации в файл " << endl;
		cin >> fileAction;
		if (fileAction == true) // 1
		{
			string userInfo;
			cout << "Введите ваше сообщение в файл: " << endl;
			SetConsoleCP(1251);
			cin >> userInfo;
			fs << userInfo << endl;
			SetConsoleCP(866);
		}
		else // 0
		{
			cout << "Содержимое файла: " << endl;
			while (!fs.eof())
			{
				string fileInfo = ""; // Чтобы небыло дубляжа последнего слова
				fs >> fileInfo;
				cout << fileInfo << endl;
			}
		}
	}
	else
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	fs.close();


	return 0;
}
