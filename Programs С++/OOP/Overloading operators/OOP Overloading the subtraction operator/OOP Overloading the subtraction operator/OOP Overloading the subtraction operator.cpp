// OOP Overloading the subtraction operator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    // Перегрузка оператора вычитания
    Point operator - (const Point& other) // Этот аргумент - это 2 слагаемое  
    {
        Point temp; // Временная переменная. Её инициализирует конструктор

        temp.x = this->x - other.x;
        temp.y = this->y - other.y;

        return temp;
    }
};

int main()
{
    setlocale(0, "rus");

    Point a(15, 24);
    a.Print();
    Point b(10, 12);
    b.Print();
    Point с = a - b;
    с.Print();

    return 0;
}
