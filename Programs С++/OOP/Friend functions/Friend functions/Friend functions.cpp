// Friend functions.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Data; // Говорим компилятору о существовании класса Data

class Point
{
    int x;
    int y;

public:
                                            // Конструкторы
    // Конструктор без параметров
    Point()
    {
        x = 0;
        y = 0;
    }
    // Конструктор с параметрами
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

                                               // Дружественные функции
    friend void Info(Point& point_object, Data& data_object);
};

class Data
{
    int data = 0;
    // Дружественные функции
    friend void Info(Point& point_object, Data& data_object);
};

int main()
{
    setlocale(0, "rus");

    Point a(10, 24);
    Data information;
    Info(a, information);
    


    return 0;
}



// Реализация дружественных функций
void Info(Point& point_object, Data& data_object) // Данная функция является дружественной для нескольких классов
{
    cout << "Информация о объекте класса Point: " << endl;
    cout << "X = " << point_object.x << endl;
    cout << "Y = " << point_object.y << endl;
    cout << "Информация о объекте класса Data: " << endl;
    cout << "data = " << data_object.data << endl;
}