// Чтение данных из файла ifstream.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>
#include <string>
#include <fstream>


int main()
{
    setlocale(0, "rus");

    ifstream fin;
    fin.open("File for reading.txt");

    if (fin.is_open())
    {
        cout << "Файл открыт!" << endl;
        cout << "Вот информация из файла:" << endl;
                        /* Считывание информации из файла посимвольно*/
        //char fileSymbol;
        //while (fin.get(fileSymbol))
        //{
        //    cout << fileSymbol;
        //}
                        /* Считывание информации из файла по словам*/
        //string fileString;
        //while (!fin.eof())
        //{
        //    fileString = ""; // Чтобы последнее слово небыло выведенно 2 раза в случае,
        //    // когда в конце файла есть пустые строки
        //    fin >> fileString;
        //    cout << fileString;
        //    cout << endl; // перенос строки после каждого слова
        //}
                        /* Считывание информации из файла построчно*/
        string fileString;
        while (!fin.eof())
        {
            fileString = "";
            getline(fin, fileString);
            cout << fileString;
            cout << endl; // Переход после каждой строки
        }
    }
    else
    {
        cout << "Ошибка открытия файла!" << endl;
    }

    fin.close();

    return 0;
}