// Одинаковые методы при множественном наследовании 112.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    void engineStart()
    {
        cout << "Двигатель машины заведён!" << endl;
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

    void engineStart()
    {
        cout << "Двигатель самолёта заведён!" << endl;
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

    // К свойствам с одинаковыми именами можно обращаться по полному синтаксису
    //cout << fc.::Car::info << endl;
    //cout << fc.::Plane::info << endl;

    // Также можно использовать следующий синтаксис

    cout << ((Car)fc).info << endl;
    cout << ((Plane)fc).info << endl;

    // К методам с одинаковыми именами можно обращаться также, как и к свойствам (По полному синтаксису)
    //fc.::Car::engineStart();
    //fc.::Plane::engineStart();

    // Также можно использовать следующий синтаксис

    ((Car)fc).engineStart();
    ((Plane)fc).engineStart();



    return 0;
}