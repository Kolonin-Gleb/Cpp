// Запись в файл ofstream.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "rus");

    ofstream fout;
    fout.open("Myfile", ofstream::app);

    if (fout.is_open())
    {
        cout << "Файл открыт!" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла!" << endl;
    }

    cout << "Введите информацию в файл" << endl;
    string userInfo = "";
    cin >> userInfo;
    fout << "\n" << userInfo;
    fout.close();

    return 0;
}
