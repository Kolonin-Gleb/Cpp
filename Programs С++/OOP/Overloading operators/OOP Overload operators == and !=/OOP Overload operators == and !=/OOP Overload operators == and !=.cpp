// OOP Overload operators == and !=.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Point
{
    int x = 0;
    int y = 0;
public:

    // методы

    void Print()
    {
        cout << "X = " << x << " Y = " << y << endl;
    }

                                    // Конструкторы класса
    // Свой конструктор
    Point(int ValueX, int ValueY)
    {
        cout << "Вызвался конструктор" << this << endl;
        x = ValueX;
        y = ValueY;
    }

    // Конструктор по умолчанию
    Point()
    {
        cout << "Вызвался конструктор" << this << endl;
    }

    // Деструктор класса
    ~Point()
    {
        cout << "Вызвался деструктор " << this << endl;
    }

    // Перегрузки операторов

    bool operator == ( const Point& other)
    {
    //                  длинная реализация 
        if (this->x == other.x && this->y == other.y)
        {
            cout << "Объекты равны!" << endl;
            return true;
        }
        else
        {
            cout << "Объекты не равны!" << endl;
            return false;
        }

        //              Короткая реализация 
        //return this->x == other.x && this->y == other.y;
    }


};


int main()
{
    setlocale(0, "rus");

    Point a(5, 1);
    Point b(5, 1);

    bool result = a == b;


    return 0;
}

