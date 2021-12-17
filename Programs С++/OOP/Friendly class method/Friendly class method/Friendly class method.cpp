// Friendly class method.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

    // Прототипы классов
class Apple; // Данный прототип необходим, чтобы метод 
// Take_apple знал о существовании класса Apple

class Human
{

public:

    // Прототипы методов
    void Take_apple(Apple& apple);

};

class Apple
{
    int weight;
    string color;
public:

    // Прототипы конструкторов
    Apple();
    Apple(int weight, string color);

    // Объявление дружественных функций
 // Данная запись говорит о том, что метод класса Human является дружественным этому классу =>
 // Он имеет права доступа ко всем полям класса Apple 
    friend void Human::Take_apple(Apple& apple);
};

    // Реализация прототипов конструкторов
Apple::Apple() // Конструктор без параметров
{
    int weight = 0;
    string color = "Green";
}
Apple::Apple(int weight, string color) // Конструктор с параметрами
{
    this->color = color;
    this->weight = weight;
}

int main()
{
    setlocale(0, "rus");

    Apple apple(100, "Red");
    Human a;

    a.Take_apple(apple);
    return 0;
}

void Human::Take_apple(Apple& apple)
{
    cout << "Цвет яблока - " << apple.color << endl;
    cout << "Вес яблока - " << apple.weight << endl;
}

