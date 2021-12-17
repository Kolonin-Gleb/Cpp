// Обработка исключений. try catch. 120.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(0, "rus");

	string path = "File.txt";

	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		cout << "Попытка открыть файл" << endl;
		fin.open(path);
		cout << "Файл успешно открыт" << endl;
	}
	/*catch(const std::exception& exception)*/ // Стандартная обработка исключений
	catch (const ifstream::failure& exception) 
	{
		cout << "Ошибка открытия файла!" << endl;
		cout << exception.what() << endl;
		cout << exception.code() << endl; // Метод возвращающий код ошибки. Его можно вызвать благодаря 
		// нестандартной обработке исключений

	}

	return 0;
}
