// Множественное наследование 109.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Car
{
public:
    void drive()
    {
        cout << "Я еду!" << endl;
    }

    string info = "Я машина!";
};

class Plane
{
public:
    void fly()
    {
        cout << "Я лечу!" << endl;
    }

    string info = "Я самолёт!";
};

// Множественное наследование.
// Класс FlyingCar наследуется с моддификатором доступа public от 2х классов
class FlyingCar : public Car, public Plane
{
public:

};


int main()
{
    setlocale(0, "rus");

    FlyingCar fc;
    fc.drive();
    fc.fly();
    // Если при множественном наследовании несколько классов имеют поля(наследование которых происходит)
    // с одинаковыми именами, то чтобы обращаться к ним придётся использовать полный синтаксис обращения.
    //
    // Следующий вариант не сработает, т.к. унаследованное поле данных Info не является однозначным.  
    //
    //cout << fc.Info << endl;
    //cout << fc.Info << endl;

    cout << fc.::Car::info << endl;
    cout << fc.::Plane::info << endl;




    return 0;
}
