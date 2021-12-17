// OOP class constructor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    Point(int ValueX, int ValueY)
    {
        x = ValueX;
        y = ValueY;
    }

    Point()
    {

    }

    // Деструктор класса
    ~Point()
    {
        cout << "Вызвался деструктор " << endl;
    }
};


int main()
{
    setlocale(0, "rus");
    
    Point a;
    a.Print();

    Point b(11, 22);
    b.Print();

    return 0;
}
