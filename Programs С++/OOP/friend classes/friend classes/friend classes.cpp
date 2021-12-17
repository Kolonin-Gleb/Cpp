// friend classes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Apple; // Прототип класса

class Human
{
public:
    // Прототипы методов
    void take_apple(Apple& apple);
    void eat_apple(Apple& apple);
    
};

class Apple
{
    // Дружественные классы
    friend Human;

    int weight;
    string color;
public:
    // Прототипы конструкторов и деструкторов
    Apple(); // Конструктор по умолчанию
    Apple(int weight, string color); // Конструктор с параметрами
    ~Apple(); // Деструктор
};
    // Реализация конструкторов и деструкторов
Apple::Apple() // Конструктор по умолчанию
{
    weight = 0;
    color = "Green";
}
Apple::Apple(int weight, string color) // Конструктор с параметрами
{
    this->color = color;
    this->weight = weight;
}
Apple::~Apple() // Деструктор
{

}


int main()
{
    setlocale(0, "rus");

    Apple apple_1;
    Human Neo;
    Neo.take_apple(apple_1);
    Neo.eat_apple(apple_1);
    Apple apple_2(150, "Red");
    Neo.take_apple(apple_2);
    
    return 0;
}

    // Реализация методов класса Human
void Human::take_apple(Apple& apple)
{
    cout << "Подоброно яблоко с характеристиками: " << endl;
    cout << "Это яблоко цвета " << apple.color << endl;
    cout << "Это яблоко весит " << apple.weight << endl;
}

void Human::eat_apple(Apple& apple)
{
    cout << "Съедено яблоко: "<< endl;
    apple.~Apple();
}
