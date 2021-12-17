// OOP Overloading the addition operator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    Point operator + (const Point& other) // Этот аргумент - это 2 слагаемое  
    {
        Point temp; // Временная переменная. Её инициализирует конструктор

        // this->x - говорит о том, что берётся поля данных объекта для которого вызван оператор,
        // то есть для 1 слагаемого

        // Таким образом поля данных временного объекта будут 
        // хранить суммы полей данных 2 слагаемых объектов
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;

        return temp;
    }


};


int main()
{
    setlocale(0, "rus");

    Point a(5, 1);
    a.Print();
    Point b(5, 1);
    b.Print();

    // Данные записи абсолютно равнозначны, но вариант слева короче
    Point с = a + b; // = Point c = a.operator+(b);
    с.Print();


    return 0;
}

