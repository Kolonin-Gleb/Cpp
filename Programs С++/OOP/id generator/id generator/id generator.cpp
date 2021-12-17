// id generator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Apple
{
    int weight;
    string color;
    static int count; // количество яблок

    int id;
public:
    
    int get_id()
    {
        return id;
    }
    

    // Конструкторы
    Apple(int weight = 0, string color = "Green")
    {
        this->color = color;
        this->weight = weight;
        count++;
        id = count;
    }
};

int Apple::count = 0;


int main()
{
    setlocale(0, "rus");
    
    Apple apple_1;
    Apple apple_2(100, "Red");
    Apple apple_3(250, "Yellow");

    cout << "id 1 яблока = " << apple_1.get_id() << endl;
    cout << "id 2 яблока = " << apple_2.get_id() << endl;
    cout << "id 3 яблока = " << apple_3.get_id() << endl;

    return 0;
}