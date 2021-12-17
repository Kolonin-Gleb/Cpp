// Aggregation and composition.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

// Пример агрегации
// Кепку можно надеть на кого угодно и она может существовать вне носителя =>
// это соответствует сопсобу вкл. одного класса в другой под названием агрегация
class Cap
{
    string colour = "Красный";

public:
    void get_colour()
    {
        cout << colour << endl;
    }
};

class Mannequin
{
    Cap mannequin_cap;

public:
    void check_view()
    {
        cout << "Цвет кепки манекена ";
        mannequin_cap.get_colour();
        cout << endl;
        
    }
};


// Пример композиции
// Если грубо считать, то мозг есть только у человека  =>
// класс мозг имеет смысл использовать только внутри человека
// Вне человека мозг бесполезен, что соответствует сопсобу вкл. 
// одного класса в другой под названиемкомпозиция
class Human
{

	class Brain
	{

	public:
            // Методы
        void think()
        {
            cout << "Я придумал!" << endl;
        }

	};

    Brain brain; // Создание объекта внутреннего класса
    Cap cap; // // Создание объекта внешнего класса
public:
            // Методы
    void check_the_cap()
    {
        cout << "Моя кепка цвета ";
        cap.get_colour();
    }

    void think()
    {
        // Здесь применяется паттерн Делегирования
        brain.think(); // Сам человек думать не может, думает только мозг, 
        // поэтому к нему и обращаемся
    }

};


int main()
{
    setlocale(0, "rus");

    Human human;
    human.think();
    human.check_the_cap();

    // Поскольку кепка может существовать вне носителя 
    // мы можем обращаться непосредственно к ней
    Cap cap;
    cap.get_colour();

    // А так же от других носителей, которые могут её иметь
    Mannequin model;
    model.check_view();

    

    return 0;
}
