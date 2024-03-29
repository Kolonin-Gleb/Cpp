﻿// Const.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");
                                 cout << "Ключевое слово Const \n";

    ////                          Константные данные, варианты записи
    //const int i(1);
    //int const j(1);
    //int const k = 1;
    //const int f = 1;
    //cout << i << "\t" << j << "\t" << k  << "\t" << f << endl;
    ////i++; j++; k++; f++ // - изменить значение переменной невозможно!

    //                                  Константы и указатели
    // const указывает на адрес в памяти 
    // (значение указ. менять можно, а адрес, по которому она хранится нет)

    const char* a = "a";
    cout << a << endl; 
    a = "b";
    cout << a << endl;

    char const* b = "b";
    cout << b << endl;
    b = "c";
    cout << b << endl;

    // const указывает на данные переменной 
    // (значение пер. менять нельзя, а адрес по которому она хранится можно)


    //  char* const a = "a";
    //  a = "b"; // <-- не работает
    //  Это уже не работает, т. к. мы изменяем указ. а не данные

        short value = 7; // объявл. пер. без указания её типа данных!
        cout << value;
    return 0;
}
