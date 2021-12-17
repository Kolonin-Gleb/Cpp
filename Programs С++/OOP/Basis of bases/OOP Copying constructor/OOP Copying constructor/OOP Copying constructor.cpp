// OOP Copying constructor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class MyClass
{
    
public:
    int *data;

    // Конструкторы создания объекта

    MyClass(int size)
    {
        size = Size;


        data = new int[size]; // выделение памяти под массив

        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }

        // this выведет адрес в памяти данного конструктора
        cout << "Вызвался конструктор " << this << endl;
    }//;

    // Конструктор копирования
    MyClass(const MyClass& other)
    {
        cout << "Вызвался конструктор копирования " << this << endl;
        // Следующая реализация создаёт новый объект с таким кол. яч. массива, сколько их в коп. об.

        // Выполняем коп. пер. Size в 
        this->Size = other.Size;
        // Создание массива с размером равным размеру массива переданного элемента 
        this->data = new int[this->Size];
        // Цикл переписи значений из массива 2 об. в массив 1 об.
        for (int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }
        
    }

    // методы

    void func(MyClass value) // это передача пар. в функцию по значению
    {
        cout << "Вывелась функция func " << endl;
    }


    // Деструктор для уничтожения объекта
    ~MyClass()
    {
        // this выведет адрес в памяти данного деструктора
        cout << "Вызвался деструктор " << this << endl;

        delete[] data;
    }//;

private:
    int Size;

};


int main()
{
    setlocale(0, "rus");
    
    MyClass a(10); // Создание объекта (Он будет содержать 1м массив на 10 эл.) 


    return 0;
}
