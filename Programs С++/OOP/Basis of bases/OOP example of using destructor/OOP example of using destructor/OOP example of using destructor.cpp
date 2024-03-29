﻿// OOP example of using destructor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class MyClass
{
    int* data; // указатель на массив

public:

    // Конструкторы
    MyClass(int size)
    {
        data = new int[size]; // Выделение памяти под 1 м. дин. массив

        // Цикл записывающий в каждый элемент массива его индекс
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }

        // Цикл показывающий каждый элемент массива
        // Как реализовать вывод массива созданного в конструкторе при помощи метода???
        cout << "Вот 1 мерный массив вашего размера " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << "\t";
        }

    }

    // Методы

    // Деструктор
    ~MyClass()
    {
        cout << "Вызвался диструктор (Удаление массива из закрытых членов класса) " << endl;
        delete[] data;
        // Так как массив был создан в закрытом члене класса мы не имее к нему доступа из-вне 
        // класса. Поэтому необходимо позаботится об его удалении в деструкторе
    }


};


int main()
{
    setlocale(0, "rus");
    cout << "Введите положительное целое число: ";
    int array_size = 0;
    cin >> array_size;

    MyClass a(array_size);
    


    return 0;
}
