// static class fields.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Apple
{
    int weight;
    string color;
public:

    static int count; // Переменная, которая будет хранить количество объектов класса Apple

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
    Apple::count++;
}
Apple::Apple(int weight, string color) // Конструктор с параметрами
{
    this->color = color;
    this->weight = weight;
    Apple::count++;
}
Apple::~Apple() // Деструктор
{
    Apple::count--; 
}


int main()
{
    setlocale(0, "rus");

    Apple apple(150, "Red");
    cout << Apple::count << endl;
    apple.~Apple();

    return 0;
}
